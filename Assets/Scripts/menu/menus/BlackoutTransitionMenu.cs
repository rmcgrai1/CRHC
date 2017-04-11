using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class BlackoutTransitionMenu : IMenu {
    private IMenu menu;
    private float fadeInAmount = 0, fadeSpeed;
    private Color color;

    public BlackoutTransitionMenu(IMenu menu, float fadeInSpeed) {
        this.menu = menu;
        this.fadeSpeed = fadeInSpeed;
    }

    public override bool enter() {
        bool val = false;

        float fadeInDelta = ((1 - fadeInAmount) / fadeSpeed) * Time.fixedDeltaTime;
        if (fadeInDelta < .05) {
            fadeInAmount = 1;
            val = true;
        }
        else {
            fadeInAmount += fadeInDelta;
        }

        return menu.enter() && val;
    }

    public override bool exit(bool isClosing) {
        bool val = false;

        float fadeInDelta = ((0 - fadeInAmount) / fadeSpeed) * Time.fixedDeltaTime;
        if (fadeInAmount < .01) {
            fadeInAmount = 0;
            val = true;
        }
        else {
            fadeInAmount += fadeInDelta;
        }

        return menu.exit(isClosing) && val;
    }

    public override void addRow(IRow row) {
        menu.addRow(row);
    }

    public override void draw(float w, float h) {
        menu.draw(w, h);

        GUIX.beginOpacity(1 - fadeInAmount);
        //GUIX.fillRect(new Rect(0, 0, w, h), Color.black);
        GUIX.endOpacity();
    }

    public override float getHeight(float w) {
        return menu.getHeight(w);
    }

    public override void reset() {
        menu.reset();
        fadeInAmount = 0;
    }

    public override void setColor(Color color) {
        this.color = color;
    }

    public override void onDispose() {
        menu.Dispose();
        menu = null;
    }
}