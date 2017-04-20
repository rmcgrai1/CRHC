﻿using general;
using general.mobile;
using System;
using UnityEngine;

public class ScrollMenu : IMenu {
    // TODO: Update scrollFrac if height changes.

    private IMenu menu;
    private float scrollFrac = 0, prevScrollY, prevHeightDiff = float.PositiveInfinity;
    private Color color;

    public ScrollMenu(IMenu menu) {
        this.menu = menu;
    }

    public override bool enter() { return menu.enter(); }
    public override bool exit(bool isClosing) { return menu.exit(isClosing); }

    public override void addRow(IRow row) {
        menu.addRow(row);
    }

    public override void draw(float w, float h) {
        // TODO: Pass w/h in via draw, or constructor??
        // might not work right?

        float menuH = menu.getPixelHeight(w), scrollY;
        float heightDiff = menuH - h;

        ITouch iTouch = ServiceLocator.getITouch();

        GUIX.fillRect(new Rect(0, 0, w, h), color);

        if (heightDiff > 0) {
			// Scroll menu.
            if(!float.IsInfinity(prevHeightDiff)) {
                if(heightDiff != prevHeightDiff) {
                    scrollFrac = -prevScrollY / heightDiff;
                }
            }

            scrollFrac = Math.Max(0, Math.Min(scrollFrac, 1));
            scrollY = -scrollFrac * heightDiff;
        }
        else {
            scrollY = 0;
        }

        prevHeightDiff = heightDiff;
        prevScrollY = scrollY;

        Vector2 scrollPosition = new Vector2(0, scrollY);
        GUIX.beginClip(new Rect(0, 0, w, h), scrollPosition);
        menu.draw(w, h);
        GUIX.endClip();

        scrollFrac -= (iTouch.getDragVector().y / heightDiff);
    }

    protected override float calcPixelHeight(float w) {
        return menu.getPixelHeight(w);
    }

    public override void reset() {
        menu.reset();
    }

    public override void setColor(Color color) {
        this.color = color;
    }

    public override void onDispose() {
        menu.Dispose();
        menu = null;
    }
}
