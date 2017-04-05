using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class FadeInMenu : IMenu {
    private IMenu menu;
    private float fadeInAmount = 0, fadeSpeed;
    private Color color;
    private float fadeDis;
    private bool hasEntered = false, isClosing = false;

    public FadeInMenu(IMenu menu, float fadeInSpeed) {
        this.menu = menu;
        this.fadeSpeed = fadeInSpeed;
    }

    public override bool enter() {
        bool val = false;

        if(fadeDis == 0) {
            return menu.enter();
        }

        float fadeInDelta = ((1 - fadeInAmount) / fadeSpeed) * Time.fixedDeltaTime;
        if (fadeInDelta * fadeDis < .1) {
            fadeInAmount = 1;
            hasEntered = val = true;
        }
        else {
            fadeInAmount += fadeInDelta;
        }

        return menu.enter() && val;
    }

    public override bool exit(bool isClosing) {
        this.isClosing = isClosing;

        bool val = false;

        if (fadeDis == 0) {
            return menu.exit(isClosing);
        }

        float fadeInDelta = ((0 - fadeInAmount) / fadeSpeed) * Time.fixedDeltaTime;
        if (- fadeInDelta * fadeDis < Time.fixedDeltaTime) {
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
        // TODO: Update outside of draw.
        // TODO: Incorporate deltaTime.
        // TODO: Make smooth deltaTime variables.

        //float fadeDis = menu.getHeight(w);
        fadeDis = w;

        GUIX.fillRect(new Rect(0, 0, w, h), color);
        GUIX.beginOpacity(fadeInAmount);


        /*float fadeY, menuH;
		fadeY = -fadeDis * (1 - fadeInAmount);
		menuH = h - fadeY;
		Rect menuRect = new Rect(0, fadeY, w, menuH);*/
        float fadeX, menuH;
        menuH = h;

        Rect menuRect;

        if(!hasEntered || isClosing) {
            fadeX = -fadeDis * (1 - fadeInAmount);
            menuRect = new Rect(fadeX, 0, w, menuH);
        }
        else {
            fadeX = fadeDis * (1 - fadeInAmount);
            menuRect = new Rect(fadeX, 0, w, menuH);
        }

        GUIX.beginClip(menuRect);
        menu.draw(w, menuH);
        GUIX.endClip();
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