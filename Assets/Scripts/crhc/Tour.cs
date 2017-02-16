using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Tour : CrchFolder<Landmark> {
    private LoadableTexture texture;

    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public Tour(CrchItem parent, JsonChildList.JsonChild data) : base(parent, data) {
        texture = new LoadableTexture(getUrl() + getData("imagePath"));
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

    public Texture2D getTexture() {
        return texture.getResource();
    }

    public override IMenu buildMenu() {
        Menu menu = new Menu();

        MenuSpace padding = new MenuSpace();

        Row header = new Row();
        header.setColor(Crch.COLOR_BLUE_LIGHT);

        header.addItem(padding, .1f);

        MenuText headerText = new MenuText(getName() + "\n" + getDescription());
        header.addItem(headerText, .8f);

        header.addItem(padding, .1f);

        menu.addRow(header);

        foreach (Landmark child in this) {
            Row row = new Row();

            MenuText text = new MenuText(child.getName());
            text.setColor(Color.white);

            row.addItem(padding, .1f);
            row.addItem(text, .4f);

            row.addItem(padding, .1f);
            row.addItem(new AudioButton(child.getAudioUrl()), .1f);
            row.addItem(new DirectionButton(child), .1f);
            row.addItem(new ARButton(child), .1f);
            row.addItem(padding, .1f);

            Menu submenu = new Menu();

            Row subrow = new Row();
            subrow.setColor(Crch.COLOR_BLUE_LIGHT);

            MenuText subtext = new MenuText(child.getDescription());

            subrow.addItem(subtext, 1);
            submenu.addRow(subrow);

            PaneRow panerow = new PaneRow(row, submenu);
            panerow.setClosedColor(Crch.COLOR_BLUE_DARK);
            panerow.setOpenColor(Crch.COLOR_RED);

            menu.addRow(panerow);
        }

        return new ScrollMenu(menu);
    }

    private class AudioButton : MenuImage, LoadableObserver {
        private LoadableAudio audio;
        private enum AudioState {
            UNLOADED, LOADING, STREAMING, PAUSED
        };
        private AudioState state = AudioState.UNLOADED;

        public AudioButton(string url) : base("http://www3.nd.edu/~rmcgrai1/CRHC/icons/sound_icon.png") {
            audio = new LoadableAudio(url);
            audio.registerObserver(this);
        }

        public override void onClick() {
            if (state == AudioState.UNLOADED) {
                state = AudioState.LOADING;
                audio.load();
            }
            else if(state == AudioState.STREAMING) {
                state = AudioState.PAUSED;
                audio.pause();
            }
            else if (state == AudioState.PAUSED) {
                state = AudioState.STREAMING;
                audio.play();
            }
        }

        public void onLoadFailure(Loadable obj) {
            throw new NotImplementedException();
        }

        public void onLoadSuccess(Loadable obj) {
            state = AudioState.STREAMING;
            audio.play();
        }

        public void onUnloadFailure(Loadable obj) {
            throw new NotImplementedException();
        }

        public void onUnloadSuccess(Loadable obj) {
            throw new NotImplementedException();
        }
    }

    private class DirectionButton : MenuImage {
        private Landmark landmark;
        public DirectionButton(Landmark landmark) : base("http://www3.nd.edu/~rmcgrai1/CRHC/icons/nav_icon.png") {
            this.landmark = landmark;
        }

        public override void onClick() {
            landmark.showMapRoute();
        }
    }

    private class ARButton : MenuImage {
        private Landmark landmark;
        public ARButton(Landmark landmark) : base("http://www3.nd.edu/~rmcgrai1/CRHC/icons/ar_icon.png") {
            this.landmark = landmark;
        }

        public override void onClick() {
            landmark.load();
        }
    }
}