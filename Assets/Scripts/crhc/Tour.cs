using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using generic;

public class Tour : CrchFolder<Landmark> {

    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public Tour(CrchItem parent, JsonChildList.JsonChild data) : base(parent, data) {
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
        Menu menu = new Menu();

        SpaceItem padding = new SpaceItem();

        Row headerTitle = new Row();
        headerTitle.setPadding(true, true, false);
        headerTitle.setColor(Crch.COLOR_BLUE_LIGHT);

        TextItem titleText = new TextItem(getName().ToUpper());
        titleText.setColor(Crch.COLOR_RED);
        titleText.setFont(Crch.FONT_TITLE);
        headerTitle.addItem(titleText, 1);

        menu.addRow(headerTitle);

        Row headerDesc = new Row();
        headerDesc.setPadding(true, false, true);
        headerDesc.setColor(Crch.COLOR_BLUE_LIGHT);

        TextItem descText = new TextItem(getDescription());
        headerDesc.addItem(descText, 1);

        menu.addRow(headerDesc);

        Row paddingRow = new Row(5);

        int i = 0;
        foreach (Landmark child in this) {
            menu.addRow(paddingRow);

            Row row = new Row();

            TextItem text = new TextItem(child.getName());
            text.setFont(Crch.FONT_SUBTITLE);
            text.setColor(Color.white);

            row.setPadding(true, true, true);
            row.addItem(text, .4f);

            row.addItem(padding, .1f);

            /*if (child.hasAudio()) {
                row.addItem(new AudioButton(child.getUrl() + "audio.mp3"), .1f);
            }
            else {*/
                row.addItem(new SpaceItem(), .1f);
            //}
            row.addItem(new DirectionButton(child), .1f);
            row.addItem(new ARButton(child), .1f);

            Menu submenu = new Menu();

            Row subrow = new Row();
            subrow.setPadding(true, true, true);
            subrow.setColor(Crch.COLOR_BLUE_LIGHT);

            TextItem subtext = new TextItem(child.getDescription());

            subrow.addItem(subtext, 1);
            submenu.addRow(subrow);

            PaneRow panerow = new PaneRow(row, submenu);
            panerow.setClosedColor(Crch.COLOR_BLUE_DARK);
            panerow.setOpenColor(Crch.COLOR_RED);

            menu.addRow(panerow);
        }

        IMenu scrollMenu = new ScrollMenu(menu);
        IMenu fadeInMenu = new FadeInMenu(scrollMenu, Crch.FADE_IN_SPEED);
        fadeInMenu.setColor(Crch.COLOR_GRAY_DARK);

        return new TourMenu(fadeInMenu, getUrl() + "header.jpg");
    }

    private class AudioButton : ImageItem {
        private Reference<AudioClip> audio;
        private AudioSource audioSource;
        private enum AudioState {
            UNLOADED, LOADING, LOADED, PLAYING, PAUSED
        };
        private AudioState state = AudioState.UNLOADED;

        public AudioButton(string url) : base("http://www3.nd.edu/~rmcgrai1/CRHC/icons/sound_icon.png") {
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
        public DirectionButton(Landmark landmark) : base("http://www3.nd.edu/~rmcgrai1/CRHC/icons/nav_icon.png") {
            this.landmark = landmark;
        }

        public override void onClick() {
            landmark.showMapRoute();
        }
    }

    private class ARButton : ImageItem {
        private Landmark landmark;
        public ARButton(Landmark landmark) : base("http://www3.nd.edu/~rmcgrai1/CRHC/icons/ar_icon.png") {
            this.landmark = landmark;
        }

        public override void onClick() {
            landmark.load();
        }
    }
}