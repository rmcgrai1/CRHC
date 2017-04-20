using general;
using general.mobile;
using general.rendering;
using System;
using UnityEngine;

public class ScrollMenu : IMenu {
    // TODO: Update scrollFrac if height changes.

    private IMenu menu;
    private float scrollFrac = 0, prevScrollY, prevHeightDiff = float.PositiveInfinity;
    private Color color;
    private Reference<Texture2D> arrowTexture;


    public ScrollMenu(IMenu menu) {
        this.menu = menu;

        ILoader il = ServiceLocator.getILoader();
        arrowTexture = il.load<Texture2D>(CachedLoader.SERVER_PATH + "icons/right_icon.png");
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
            if (!float.IsInfinity(prevHeightDiff)) {
                if (heightDiff != prevHeightDiff) {
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

        // Draw scrollbar.
        if(heightDiff > 0 && CrhcSettings.doShowScrollbar) {
            float PADDING = 8, scrollBarWidth = CrhcConstants.PADDING_H.getAs(general.number.NumberType.PIXELS) - PADDING * 2, scrollBarHeight = scrollBarWidth * 2;
            GUIX.beginClip(new Rect(w - PADDING - scrollBarWidth, 0, scrollBarWidth, h));

            GUIX.beginOpacity(.5f);
            TextureUtility.drawTexture(new Rect(0, PADDING, scrollBarWidth, scrollBarWidth), arrowTexture, AspectType.FIT_IN_REGION, 90);

            float hh = h - 4 * PADDING - 2 * scrollBarWidth - scrollBarHeight / 2;
            GUIX.fillRect(new Rect(0, 2 * PADDING + scrollBarWidth + hh * scrollFrac, scrollBarWidth, scrollBarWidth));
            TextureUtility.drawTexture(new Rect(0, h - PADDING - scrollBarWidth, scrollBarWidth, scrollBarWidth), arrowTexture, AspectType.FIT_IN_REGION, -90);
            GUIX.endOpacity();
            GUIX.endClip();

            scrollFrac -= (iTouch.getDragVector().y / heightDiff);
        }
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

        arrowTexture.removeOwner();
        arrowTexture = null;
    }
}
