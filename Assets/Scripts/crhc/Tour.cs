using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using generic;
using UnityEngine.SceneManagement;

public class Tour : CrhcFolder<Landmark> {

    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public Tour(CrhcItem parent, JsonChildList.JsonChild data) : base(parent, data) {
    }

    //protected override void tryLoad()
    //texture.loadCoroutine();
    //texture.unload();


    /*=======================================================**=======================================================*/
    /*============================================== ACCESSORS/MUTATORS ==============================================*/
    /*=======================================================**=======================================================*/
    public string getName() {
        return getData("name");
    }

    public string getDescription() {
        return getData("description");
    }

    public override IMenu buildMenu() {
        sort();

        Menu menu = new Menu();

        SpaceItem padding = new SpaceItem();

        Row headerTitle = new Row();
        headerTitle.setPadding(true, true, false);
        headerTitle.setColor(CRHC.COLOR_BLUE_LIGHT);

        TextItem titleText = new TextItem(getName().ToUpper());
        titleText.setColor(CRHC.COLOR_RED);
        titleText.setFont(CRHC.FONT_TITLE);
        headerTitle.addItem(titleText, 1);

        menu.addRow(headerTitle);

        Row headerDesc = new Row();
        headerDesc.setPadding(true, false, true);
        headerDesc.setColor(CRHC.COLOR_BLUE_LIGHT);

        TextItem descText = new TextItem(getDescription());
        headerDesc.addItem(descText, 1);

        menu.addRow(headerDesc);

        Row paddingRow = new Row(5);

        foreach (Landmark child in this) {
            if(!child.isVisible()) {
                continue;
            }

            menu.addRow(paddingRow);

            Row row = new Row();
            row.setPadding(true, true, true);

            if(CRHC.LANDMARK_SORTORDER == SortOrder.NUMBER) {
                TextItem number = new TextItem(child.getNumber() + ". ");
                number.setFont(CRHC.FONT_SUBTITLE);
                number.setColor(Color.white);
                row.addItem(number, .05f);

                TextItem text = new TextItem(child.getName());
                text.setFont(CRHC.FONT_SUBTITLE);
                text.setColor(Color.white);
                row.addItem(text, .5f);
            }
            else {
                TextItem text = new TextItem(child.getName());
                text.setFont(CRHC.FONT_SUBTITLE);
                text.setColor(Color.white);
                row.addItem(text, .55f);
            }

            Menu submenu = new Menu();
            submenu.setColor(CRHC.COLOR_BLUE_LIGHT);

            Row subrow = new Row();
            subrow.setPadding(true, true, true);

            TextItem subtext = new TextItem(child.getDescription());

            subrow.addItem(subtext, 1);
            submenu.addRow(subrow);

            if(child.hasAudio()) {
                submenu.addRow(new AudioPlayerRow(child.getUrl() + "audio.mp3"));

                Row audioSourceRow = new Row();
                audioSourceRow.setPadding(true, false, false);

                TextItem audioSourceItem = new TextItem(child.getAudioSource());
                audioSourceItem.setTextAnchor(TextAnchor.UpperLeft);
                audioSourceRow.addItem(audioSourceItem, 1);

                submenu.addRow(audioSourceRow);
            }


            row.addItem(new SpaceItem(), .025f);
            if (child.hasAddress()) {
                row.addItem(new DirectionButton(child), .1f);
            }
            else {
                row.addItem(new SpaceItem(), .1f);
            }

            row.addItem(new SpaceItem(), .025f);

            if (child.hasAR()) {
                row.addItem(new ARButton(child), .1f);
            }
            else {
                row.addItem(new SpaceItem(), .1f);

                Row subLongDescRow = new Row();
                TextItem subLongDesc = new TextItem(child.getLongDescription());
                subLongDescRow.addItem(subLongDesc, 1);
                subLongDescRow.setPadding(true, true, true);

                submenu.addRow(subLongDescRow);
            }


            PaneRow panerow = new PaneRow(row, submenu);
            panerow.setClosedColor(CRHC.COLOR_BLUE_DARK);
            panerow.setOpenColor(CRHC.COLOR_RED);

            menu.addRow(panerow);
        }

        menu.addRow(paddingRow);
        menu.addRow(new SurveyRow());
        menu.addRow(paddingRow);
        menu.addRow(new ClearCacheRow());

        IMenu scrollMenu = new ScrollMenu(menu);
        IMenu fadeInMenu = new FadeInMenu(scrollMenu, CRHC.SPEED_FADE_IN);
        fadeInMenu.setColor(CRHC.COLOR_GRAY_DARK);

        return new TourMenu(fadeInMenu, getUrl() + "header.jpg");
    }

    private class AudioButton : ImageItem {
        private Reference<AudioClip> audio;
        private AudioSource audioSource;
        private enum AudioState {
            UNLOADED, LOADING, LOADED, PLAYING, PAUSED
        };
        private AudioState state = AudioState.UNLOADED;

        public AudioButton(string url) : base(CachedLoader.SERVER_PATH + "icons/sound_icon.png") {
            state = AudioState.LOADING;
            audio = ServiceLocator.getILoader().load<AudioClip>(url);
            audioSource = AppRunner.get().AddComponent<AudioSource>();
        }

        public override void onClick() {
            if (state == AudioState.LOADED) {
                state = AudioState.PLAYING;
                audioSource.Play();
            }
            else if (state == AudioState.PLAYING) {
                state = AudioState.PAUSED;
                audioSource.Pause();
            }
            else if (state == AudioState.PAUSED) {
                state = AudioState.PLAYING;
                audioSource.UnPause();
            }
        }

        public override bool draw(float w, float h) {
            if (audio.isLoaded()) {
                state = AudioState.LOADED;
                audioSource.clip = audio.getResource();
            }

            return base.draw(w, h);
        }

        public override void onDispose() {
            base.onDispose();
            audio.removeOwner();

            UnityEngine.Object.Destroy(audioSource);
        }
    }

    private class DirectionButton : ImageItem {
        private Landmark landmark;
        public DirectionButton(Landmark landmark) : base(CachedLoader.SERVER_PATH + "icons/nav_icon.png") {
            this.landmark = landmark;

            setColor(CRHC.COLOR_BLUE_LIGHT);
            setAspectType(AspectType.FIT_IN_REGION);
        }

        public override void onClick() {
            landmark.showMapRoute();
        }
    }

    private class ARButton : ImageItem {
        private Landmark landmark;
        public ARButton(Landmark landmark) : base(CachedLoader.SERVER_PATH + "icons/ar_icon.png") {
            this.landmark = landmark;

            setColor(CRHC.COLOR_BLUE_LIGHT);
            setAspectType(AspectType.FIT_IN_REGION);
        }

        public override void onClick() {
            landmark.load();
        }
    }

    private abstract class ButtonRow : Row {
        public ButtonRow() {
            setColor(CRHC.COLOR_BLUE_MEDIUM);
            setPadding(true, true, true);
        }

        public override bool draw(float w) {
            if (base.draw(w)) {
                onClick();
            }

            return false;
        }

        public abstract void onClick();
    }

    private abstract class TextButtonRow : ButtonRow {
        public TextButtonRow(string text) {
            TextItem textItem = new TextItem(text);
            textItem.setTextAnchor(TextAnchor.MiddleCenter);
            addItem(textItem, 1);
        }
    }

    private abstract class ImageButtonRow : ButtonRow {
        public ImageButtonRow(string imageUrl) {
            ImageItem imageItem = new ImageItem(imageUrl);
            imageItem.setAspectType(AspectType.HEIGHT_DEPENDENT_ON_WIDTH);
            addItem(imageItem, 1);
        }

        public override void onDispose() {
            base.onDispose();
        }
    }

    private class HomePageRow : ImageButtonRow {
        public HomePageRow() : base(CachedLoader.SERVER_PATH + "logo.png") {
        }

        public override void onClick() {
            Application.OpenURL("https://www.iusb.edu/civil-rights/");
        }
    }

    private class SurveyRow : TextButtonRow {
        public SurveyRow() : base("Survey") {
        }

        public override void onClick() {
            Application.OpenURL("https://docs.google.com/forms/d/e/1FAIpQLSciG9ouNTXAjUciVz4xKG0ZAnlaiMXZhgIkqy-gQDy4MJJWSA/viewform");
        }
    }

    private class ClearCacheRow : TextButtonRow {
        public ClearCacheRow() : base("Clear Cache") {
        }

        public override void onClick() {
            ServiceLocator.getILoader().clearCache(true);
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }
}

public enum SortOrder {
    NUMBER, NAME
}