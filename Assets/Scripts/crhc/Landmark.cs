using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System;

public class Landmark : CrchFolder<Experience> {
    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public Landmark(CrchItem parent, JsonChildList.JsonChild data) : base(parent, data) {
    }

    public void showMap() {
        MapServer.show(getLatitude(), getLongitude());
    }
    public void showMapRoute() {
        MapServer.showRoute(getLatitude(), getLongitude());
    }

    /*=======================================================**=======================================================*/
    /*============================================== ACCESSORS/MUTATORS ==============================================*/
    /*=======================================================**=======================================================*/
    public string getName() {
        return getData("name");
    }

    public string getDescription() {
        return getData("description");
    }

    public double getLatitude() {
        return double.Parse(getData("latitude"));
    }

    public double getLongitude() {
        return double.Parse(getData("longitude"));
    }

    public string getAudioUrl() {
        return getData("audioUrl");
    }

    public override IMenu buildMenu() {
        Menu menu = new Menu();

        MenuSpace padding = new MenuSpace();

        Row backRow = new Row();
        backRow.addItem(new BackButton(this), 1);
        menu.addRow(backRow);

        Row titleRow = new Row();
        MenuText titleText = new MenuText(getName().ToUpper());
        titleText.setColor(Crch.COLOR_RED);
        titleRow.addItem(titleText, 1);
        titleRow.setColor(Crch.COLOR_BLUE_LIGHT);

        menu.addRow(titleRow);

        Row descRow = new Row();
        MenuText descText = new MenuText(getDescription());
        descRow.addItem(descText, 1);
        descRow.setColor(Crch.COLOR_BLUE_LIGHT);

        menu.addRow(descRow);

        int inRow = 0;
        Row curRow = null;
        foreach (Experience child in this) {
            // Add image.
            if(inRow == 0) {
                inRow++;
                curRow = new Row();
                curRow.setColor(Crch.COLOR_BLUE_LIGHT);

                menu.addRow(curRow);
            }
            else {
                inRow = 0;
            }

            MenuImage img = new ARButton(child);
            curRow.addItem(img, 1);
        }

        if(inRow == 1) {
            curRow.addItem(new MenuSpace(), 1);
        }

        return new ScrollMenu(menu);
    }

    private class BackButton : MenuRect {
        private Landmark owner;

        public BackButton(Landmark owner) : base(Color.red) {
            this.owner = owner;
        }

        public override void onClick() {
            owner.unload();            
        }
    }

    private class ARButton : MenuImage {
        private Experience exp;
        public ARButton(Experience exp) : base(exp.getUrl() + "img.jpg") {
            this.exp = exp;
        }

        public override void onClick() {
            exp.load();
        }
    }
}