using general.number.smooth;
using System.Collections.Generic;
using UnityEngine;

public class BlackoutTransitionMenu : IMenu {
    private IMenu menu;
    private ISmoothNumber fadeAmount;
    private Color color;

    public BlackoutTransitionMenu(IMenu menu) {
        this.menu = menu;
        fadeAmount = new LinearNumber(0, 1, 1f);
    }

    public override bool enter() {
        fadeAmount.setDirection(true);
        fadeAmount.update();

        return (!CrhcSettings.doShowAnimations) || (menu.enter() && fadeAmount.isDone());
    }

    public override bool exit(bool isClosing) {
        fadeAmount.setDirection(false);
        fadeAmount.update();

        return (!CrhcSettings.doShowAnimations) || (menu.exit(isClosing) && fadeAmount.isDone());
    }

    public override void addRow(IRow row) {
        menu.addRow(row);
    }

    public override void draw(float w, float h) {
        menu.draw(w, h);

        if(CrhcSettings.doShowAnimations && fadeAmount.get() < 1) {
            GUIX.beginOpacity(1 - fadeAmount.get());
            GUIX.fillRect(new Rect(0, 0, w, h), Color.black);
            GUIX.endOpacity();
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
    }
}