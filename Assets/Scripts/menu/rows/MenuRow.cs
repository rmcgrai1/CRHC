using general.number;
using general.number.smooth;
using general.rendering;
using System;
using UnityEngine;

public class MenuRow : IRow {
    private IMenu subMenu;

    public MenuRow(IMenu subMenu) {
        this.subMenu = subMenu;

        setCache(false);
    }

    public override bool draw(float w) {
        float h = subMenu.getPixelHeight(w);

        GUIX.beginClip(new Rect(0, 0, w, h));
        subMenu.draw(w, h);
        GUIX.endClip();

        return false;
    }

    protected override float calcPixelHeight(float w) {
        return subMenu.getPixelHeight(w);
    }

    public override void onDispose() {
        base.onDispose();

        subMenu.Dispose();
        subMenu = null;
    }

    public override bool enter() {
        return subMenu.enter();
    }

    public override bool exit(bool isClosing) {
        return subMenu.exit(isClosing);
    }
}
