using general.number.smooth;
using System.Collections.Generic;
using UnityEngine;

public class BlackoutTransitionMenu : IMenu {
    private IMenu menu;
    private ISmoothNumber fadeAmount;

    public BlackoutTransitionMenu(IMenu menu) {
        this.menu = menu;
        fadeAmount = new LinearNumber(0, 1, 1f);
    }

    public override bool enter() {
        fadeAmount.setDirection(true);

        if (!CrhcSettings.showAnimations) {
            menu.enter();
            fadeAmount.complete();
            return true;
        }
        else {
            fadeAmount.update();
            return menu.enter() && fadeAmount.isDone();
        }
    }

    public override bool exit(bool isClosing) {
        fadeAmount.setDirection(false);

        if (!CrhcSettings.showAnimations) {
            menu.exit(isClosing);
            fadeAmount.complete();
            return true;
        }
        else {
            fadeAmount.update();
            return menu.exit(isClosing) && fadeAmount.isDone();
        }
    }

    public override void addRow(IRow row) {
        menu.addRow(row);
    }

    public override void draw(float w, float h) {
        menu.draw(w, h);

        if (CrhcSettings.showAnimations && fadeAmount.get() < 1) {
            GUIX.beginOpacity(1 - fadeAmount.get());
            GUIX.fillRect(new Rect(0, 0, w, h), Color.black);
            GUIX.endOpacity();
        }
    }

    protected override float calcPixelHeight(float w) {
        return menu.getPixelHeight(w);
    }

    public override void setColor(Color color) { menu.setColor(color); }
    public override Color getColor() { return menu.getColor(); }

    public override void onDispose() {
        base.onDispose();

        menu.Dispose();
        menu = null;
    }
}