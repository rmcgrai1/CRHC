using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System;
using generic;
using Vuforia;

public class Landmark : CrchFolder<Experience> {
    private Reference<byte[]> dat;
    private Reference<string> xml;

    public IEnumerator loadCoroutine() {
        ILoader loader = ServiceLocator.getILoader();
        dat = loader.getReference<byte[]>(getUrl() + "vuforia/" + getId() + ".dat");
        xml = loader.getReference<string>(getUrl() + "vuforia/" + getId() + ".xml");

        yield return loader.loadCoroutine(dat);
        yield return loader.loadCoroutine(xml);
    }

    public override void onDispose() {
        base.onDispose();

        dat.removeOwner();
        xml.removeOwner();
        dat = null;
        xml = null;
    }

    public Reference<byte[]> getDat() {
        return dat;
    }

    public Reference<string> getXML() {
        return xml;
    }

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
    public Tour getTour() {
        return getParent() as Tour;
    }

    public string getName() {
        return getData("name");
    }

    public string getDescription() {
        return getData("description");
    }

    public string getLongDescription() {
        return getData("longDescription");
    }

    public double getLatitude() {
        return double.Parse(getData("latitude"));
    }

    public double getLongitude() {
        return double.Parse(getData("longitude"));
    }

    public bool hasAudio() {
        return bool.Parse(getData("hasAudio"));
    }

    public override IMenu buildMenu() {
        CoroutineManager.startCoroutine(loadCoroutine());

        Menu menu = new Menu();

        SpaceItem padding = new SpaceItem();

        Row backRow = new Row();
        backRow.addItem(new BackButton(this), 1);
        menu.addRow(backRow);

        Row titleRow = new Row();
        titleRow.setPadding(true, true, false);

        TextItem titleText = new TextItem(getName().ToUpper());
<<<<<<< HEAD
        titleText.setColor(CRHC.COLOR_RED);
        titleText.setFont(CRHC.FONT_SUBTITLE);
=======
        titleText.setColor(Crch.COLOR_RED);
        titleText.setFont(Crch.FONT_SUBTITLE);
>>>>>>> 7d8058b78fc3336b912526ca3bdad1b73a459737
        titleRow.addItem(titleText, 1);

        menu.addRow(titleRow);

        Row descRow = new Row();
        descRow.setPadding(true, false, true);

        TextItem descText = new TextItem(getDescription());
        descRow.addItem(descText, 1);

        menu.addRow(descRow);

        int inRow = 0, i = 0;
        Row curRow = null, sourceRow = null;

        Row paddingRow = new Row(30);

        foreach (Experience child in this) {
            // Add image.
            if (inRow == 0) {
                inRow++;

                if (i++ > 0) {
                    menu.addRow(paddingRow);
                }

                curRow = new Row();
                curRow.setPadding(true, false, false);
                sourceRow = new Row();
                sourceRow.setPadding(true, false, false);

                menu.addRow(curRow);
                menu.addRow(sourceRow);
            }
            else {
                curRow.addItem(new SpaceItem(), .2f);
                sourceRow.addItem(new SpaceItem(), .2f);
                inRow = 0;
            }

            ImageItem img = new ARButton(child);
            curRow.addItem(img, 1);

            TextItem sourceText = new TextItem(child.getSource());
<<<<<<< HEAD
            sourceText.setFont(CRHC.FONT_SOURCE);
=======
            sourceText.setFont(Crch.FONT_SOURCE);
>>>>>>> 7d8058b78fc3336b912526ca3bdad1b73a459737
            sourceText.setTextVerticalAlignment(TextVerticalAlignment.TOP);
            sourceRow.addItem(sourceText, 1);
        }

        if (inRow == 1) {
            curRow.addItem(new SpaceItem(), 1.2f);
            sourceRow.addItem(new SpaceItem(), 1.2f);
        }

        Row row = new Row();
        row.addItem(new TextItem(getLongDescription()), 1);
        menu.addRow(row);
        row.setPadding(true, true, true);

        IMenu scrollMenu = new ScrollMenu(menu);
<<<<<<< HEAD
        IMenu fadeInMenu = new FadeInMenu(scrollMenu, CRHC.SPEED_FADE_IN);

        fadeInMenu.setColor(CRHC.COLOR_BLUE_LIGHT);
=======
        IMenu fadeInMenu = new FadeInMenu(scrollMenu, Crch.FADE_IN_SPEED);

        fadeInMenu.setColor(Crch.COLOR_BLUE_LIGHT);
>>>>>>> 7d8058b78fc3336b912526ca3bdad1b73a459737

        return fadeInMenu;
    }

    private class BackButton : RectItem {
        private Landmark owner;

        public BackButton(Landmark owner) : base(Color.red) {
            this.owner = owner;
        }

        public override void onClick() {
            owner.unload();
        }

        public override void onDispose() {
            base.onDispose();

            owner = null;
        }
    }

    private class ARButton : ImageItem {
        private Experience exp;
        private Reference<Texture2D> tex;

        public ARButton(Experience exp) : base(exp.getUrl() + "img.jpg") {
            this.exp = exp;
<<<<<<< HEAD
            tex = ServiceLocator.getILoader().load<Texture2D>(CachedLoader.SERVER_PATH + "icons/ar_icon.png");
=======
            tex = ServiceLocator.getILoader().load<Texture2D>("http://www3.nd.edu/~rmcgrai1/CRHC/icons/ar_icon.png");
>>>>>>> 7d8058b78fc3336b912526ca3bdad1b73a459737
        }

        public override void onClick() {
            exp.load();
        }

        public override bool draw(float w, float h) {
            bool output = base.draw(w, h);

            if (tex.isLoaded()) {
                GUIX.Texture(new Rect(0, 0, w / 4, w / 4), tex.getResource());
            }

            return output;
        }

        public override void onDispose() {
            base.onDispose();
            tex.removeOwner();
            tex = null;
            exp = null;
        }
    }
}