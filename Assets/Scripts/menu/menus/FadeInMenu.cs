using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class FadeInMenu : IMenu {
    private IMenu menu;
    private float fadeInAmount = 0, fadeSpeed;
    private Color color;

	public FadeInMenu(IMenu menu, float fadeInSpeed) {
        this.menu = menu;
        this.fadeSpeed = fadeInSpeed;
    }

    public override void addRow(IRow row) {
        menu.addRow(row);
    }

    public override void draw(float w, float h) {
        // TODO: Update outside of draw.
        // TODO: Incorporate deltaTime.
        // TODO: Make smooth deltaTime variables.

        float fadeDis = menu.getHeight(w);

		float fadeInDelta = ((1 - fadeInAmount) / fadeSpeed) * Time.fixedDeltaTime;
		if (fadeInDelta * fadeDis < Time.fixedDeltaTime) {
			fadeInAmount = 1;
		} else {
			fadeInAmount += fadeInDelta;
		}

        GUIX.fillRect(new Rect(0, 0, w, h), color);
        GUIX.beginOpacity(fadeInAmount);


		float fadeY, menuH;
		fadeY = -fadeDis * (1 - fadeInAmount);
		menuH = h - fadeY;
		Rect menuRect = new Rect(0, fadeY, w, menuH);

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