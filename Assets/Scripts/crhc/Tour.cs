using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Tour : CrhcFolder<Landmark> {

    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public Tour(CrhcItem parent, JObject data) : base(parent, data) {
    }


    /*=======================================================**=======================================================*/
    /*============================================== ACCESSORS/MUTATORS ==============================================*/
    /*=======================================================**=======================================================*/
    public string getName() {
        return getData<string>("name");
    }

    public string getDescription() {
        return getData<string>("description");
    }

    public override IMenu buildMenu() {
        sort();

        Menu menu = new Menu();

        SpaceItem padding = new SpaceItem();

        Row headerTitle = new Row();
        headerTitle.setPadding(true, true, false);
        headerTitle.setColor(CrhcConstants.COLOR_BLUE_LIGHT);

        TextItem titleText = new TextItem(getName().ToUpper());
        titleText.setColor(CrhcConstants.COLOR_RED);
        titleText.setFont(CrhcConstants.FONT_TITLE);
        headerTitle.addItem(titleText);

        menu.addRow(headerTitle);

        Row headerDesc = new Row();
        headerDesc.setPadding(true, false, true);
        headerDesc.setColor(CrhcConstants.COLOR_BLUE_LIGHT);

        TextItem descText = new TextItem(getDescription());
        headerDesc.addItem(descText);

        menu.addRow(headerDesc);

        Row paddingRow = new Row(5);
        foreach (Landmark child in this) {
            if (!child.isVisible()) {
                continue;
            }

            menu.addRow(paddingRow);

            Row row = new Row();
            row.setPadding(true, true, true);

            if (CrhcConstants.LANDMARK_SORTORDER == SortOrder.NUMBER) {
                TextItem number = new TextItem(child.getNumber() + ". ");
                number.setFont(CrhcConstants.FONT_SUBTITLE);
                number.setColor(Color.white);
                row.addItem(number, .1f);

                TextItem text = new TextItem(child.getName());
                text.setFont(CrhcConstants.FONT_SUBTITLE);
                text.setColor(Color.white);
                row.addItem(text, .4f);
            }
            else {
                TextItem text = new TextItem(child.getName());
                text.setFont(CrhcConstants.FONT_SUBTITLE);
                text.setColor(Color.white);
                row.addItem(text, .55f);
            }

            Menu submenu = new Menu();
            submenu.setColor(CrhcConstants.COLOR_BLUE_LIGHT);

            Row subrow = new Row();
            subrow.setPadding(true, true, true);

            TextItem subtext = new TextItem(child.getDescription());

            subrow.addItem(subtext, 1);
            submenu.addRow(subrow);

            if (child.hasAudio()) {
                JArray audioClips = child.getAudioClips();

                for (int i = 0; i < audioClips.Count; i++) {
                    JToken audioClip = audioClips.GetItem(i);

                    if (i == 0) {
                        submenu.addRow(new AudioPlayerRow(child.getUrl() + "audio.mp3"));
                    }
                    else {
                        submenu.addRow(new AudioPlayerRow(child.getUrl() + "audio" + i + ".mp3"));
                    }

                    Row audioSourceRow = new Row();
                    audioSourceRow.setPadding(true, false, false);

                    TextItem audioSourceItem = new TextItem(audioClip.Value<string>("audioSource"));
                    audioSourceItem.setTextAnchor(TextAnchor.UpperLeft);
                    audioSourceItem.setFont(CrhcConstants.FONT_SOURCE);
                    audioSourceRow.addItem(audioSourceItem, 1);
                    submenu.addRow(audioSourceRow);


                    Row audioTranscriptionTitleRow = new Row();
                    TextItem audioTranscriptionTitle = new TextItem("Audio Transcription");
                    audioTranscriptionTitle.setFont(CrhcConstants.FONT_SUBTITLE);
                    audioTranscriptionTitleRow.addItem(audioTranscriptionTitle, 1);
                    audioTranscriptionTitleRow.setPadding(true, true, false);
                    submenu.addRow(audioTranscriptionTitleRow);


                    Row audioTranscriptionRow = new Row();
                    audioTranscriptionRow.setPadding(true, false, true);

                    TextItem audioTranscriptionItem = new TextItem(audioClip.Value<string>("audioTranscription"));
                    audioTranscriptionItem.setTextAnchor(TextAnchor.UpperLeft);
                    audioTranscriptionRow.addItem(audioTranscriptionItem, 1);
                    submenu.addRow(audioTranscriptionRow);
                }
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

                Row subLongDescTitleRow = new Row();
                TextItem subLongDescTitle = new TextItem("More Info");
                subLongDescTitle.setFont(CrhcConstants.FONT_SUBTITLE);
                subLongDescTitleRow.addItem(subLongDescTitle, 1);
                subLongDescTitleRow.setPadding(true, true, false);
                submenu.addRow(subLongDescTitleRow);

                Row subLongDescRow = new Row();
                TextItem subLongDesc = new TextItem(child.getLongDescription());
                subLongDescRow.addItem(subLongDesc, 1);
                subLongDescRow.setPadding(true, false, true);
                submenu.addRow(subLongDescRow);
            }


            PaneRow panerow = new PaneRow(row, submenu);
            panerow.setClosedColor(CrhcConstants.COLOR_BLUE_DARK);
            panerow.setOpenColor(CrhcConstants.COLOR_RED);

            menu.addRow(panerow);
        }

        menu.addRow(paddingRow);
        menu.addRow(new SurveyRow());
        menu.addRow(paddingRow);
        menu.addRow(new SettingsRow());

        IMenu scrollMenu = new ScrollMenu(menu);
        IMenu fadeInMenu = new FadeInMenu(scrollMenu);
        fadeInMenu.setColor(CrhcConstants.COLOR_GRAY_DARK);

        return new BlackoutTransitionMenu(new TourMenu(fadeInMenu, getUrl() + "header.jpg"));
    }

    private class DirectionButton : ImageItem {
        private Landmark landmark;
        public DirectionButton(Landmark landmark) : base(CachedLoader.SERVER_PATH + "icons/nav_icon.png") {
            this.landmark = landmark;

            setColor(CrhcConstants.COLOR_BLUE_LIGHT);
            setAspectType(AspectType.FIT_IN_REGION);
            setTouchable(true);
        }

        public override void onClick() {
            base.onClick();
            landmark.showMapRoute();
        }
    }

    private class ARButton : ImageItem {
        private Landmark landmark;
        public ARButton(Landmark landmark) : base(CachedLoader.SERVER_PATH + "icons/ar_icon.png") {
            this.landmark = landmark;

            setColor(CrhcConstants.COLOR_BLUE_LIGHT);
            setAspectType(AspectType.FIT_IN_REGION);
            setTouchable(true);
        }

        public override void onClick() {
            base.onClick();
            landmark.load();
        }
    }

    private class SurveyRow : ITextButtonRow {
        public SurveyRow() : base("Survey") {
        }

        public override void onClick() {
            base.onClick();
            Application.OpenURL("https://docs.google.com/forms/d/e/1FAIpQLSciG9ouNTXAjUciVz4xKG0ZAnlaiMXZhgIkqy-gQDy4MJJWSA/viewform");
        }
    }

    private class ClearCacheRow : ITextButtonRow {
        public ClearCacheRow() : base("Clear Cache") {
            setColor(CrhcConstants.COLOR_RED);
        }

        public override void onClick() {
            base.onClick();

            ServiceLocator.getILoader().clearCache(true);
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }

    private class SettingsBackButton : Landmark.BackButton {
        public SettingsBackButton() : base(null) { }

        public override void onClick() {
            base.onClick();

            CrhcSettings.saveSettings();
        }
    }

    private class SettingsRow : ITextButtonRow {
        public SettingsRow() : base("Settings") {
        }

        public override void onClick() {
            base.onClick();

            Menu menu = new Menu();

            SpaceItem padding = new SpaceItem();

            Row backRow = new Row();
            backRow.addItem(new SettingsBackButton());
            menu.addRow(backRow);

            Row titleRow = new Row();
            titleRow.setPadding(true, true, false);

            TextItem titleText = new TextItem("Settings");
            titleText.setColor(CrhcConstants.COLOR_RED);
            titleText.setFont(CrhcConstants.FONT_TITLE);
            titleText.setTextAnchor(TextAnchor.MiddleCenter);
            titleRow.addItem(titleText);

            menu.addRow(titleRow);

            Row paddingRow = new Row(5);

            JObject dict = CrhcSettings.getSettingsDict();
            Dictionary<string, string> jsonData = JsonConvert.DeserializeObject<Dictionary<string, string>>(dict.ToString());

            foreach (string key in jsonData.Keys) {
                menu.addRow(paddingRow);
                menu.addRow(new JSONBoolRow(dict, key));
            }

            jsonData.Clear();

            menu.addRow(paddingRow);
            menu.addRow(new ClearCacheRow());

            IMenu scrollMenu = new ScrollMenu(menu);
            IMenu fadeInMenu = new FadeInMenu(scrollMenu);

            fadeInMenu.setColor(CrhcConstants.COLOR_BLUE_DARK);

            AppRunner.enterMenu(new BlackoutTransitionMenu(fadeInMenu));
        }
    }
}

public enum SortOrder {
    NUMBER, NAME
}