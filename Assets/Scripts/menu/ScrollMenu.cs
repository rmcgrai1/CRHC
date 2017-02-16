using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class ScrollMenu : IMenu {
    private Menu menu;
    private float scrollFrac = 0;

    public ScrollMenu(Menu menu) {
        this.menu = menu;
    }

    public void addRow(IRow row) {
        menu.addRow(row);
    }

    public void draw(float w, float h) {
        // TODO: Pass w/h in via draw, or constructor??
        // might not work right?

        scrollFrac = (float) (.5 + .5 * Math.Sin(Time.timeSinceLevelLoad));

        float menuH = menu.getHeight(w), scrollY;

        if(menuH < h) {
            scrollY = 0;
        }
        else {
            scrollY = -scrollFrac * (menuH - h);
        }

        Vector2 scrollPosition = new Vector2(0, scrollY);
        GUIX.beginClip(new Rect(0, 0, w, h), scrollPosition, Vector2.zero, false);
        //GUIX.beginClip(new Rect(0, scrollY, w, h));
        menu.draw(w, h);
        GUIX.endClip();
    }
}
