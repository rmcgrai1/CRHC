using general.number.smooth;
using UnityEngine;

public class FadeInMenu : IMenu {
    private IMenu menu;
    private ISmoothNumber fadeAmount = new PolynomialNumber(0, 1, .5f, 3);
    private Color color = CrhcConstants.COLOR_TRANSPARENT;
    private float fadeDis;
    private bool hasEntered = false, isClosing = false;

    public FadeInMenu(IMenu menu) {
        this.menu = menu;
    }

    public override bool enter() {
        fadeAmount.setDirection(true);

        if (!CrhcSettings.showAnimations) {
            menu.enter();
            fadeAmount.complete();

            return true;
        }
        else {
            if (fadeDis == 0) {
                return menu.enter();
            }

            fadeAmount.update();

            bool output = fadeAmount.isDone();
            hasEntered |= output;

            return menu.enter() && output;
        }
    }

    public override bool exit(bool isClosing) {
        this.isClosing = isClosing;

        fadeAmount.setDirection(false);

        if (!CrhcSettings.showAnimations) {
            menu.exit(isClosing);
            fadeAmount.complete();

            return true;
        }
        else {
            if (fadeDis == 0) {
                return menu.exit(isClosing);
            }

            fadeAmount.update();

            return menu.enter() && fadeAmount.isDone();
        }
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

        float fadeAmount = this.fadeAmount.get();

        GUIX.fillRect(new Rect(0, 0, w, h), color);

        if (CrhcSettings.showAnimations) {
            GUIX.beginOpacity(fadeAmount);
        }

        /*float fadeY, menuH;
        fadeY = -fadeDis * (1 - fadeInAmount);
        menuH = h - fadeY;
        Rect menuRect = new Rect(0, fadeY, w, menuH);*/
        float fadeX = 0, menuH;
        menuH = h;

        Rect menuRect;

        if (CrhcSettings.showAnimations) {
            if (!hasEntered || isClosing) {
                fadeX = fadeDis * (1 - fadeAmount);
            }
            else {
                fadeX = -fadeDis * (1 - fadeAmount);
            }
        }
        menuRect = new Rect(fadeX, 0, w, menuH);

        GUIX.beginClip(menuRect);
        menu.draw(w, menuH);
        GUIX.endClip();

        if (CrhcSettings.showAnimations) {
            GUIX.endOpacity();
        }
    }

    protected override float calcPixelHeight(float w) {
        return menu.getPixelHeight(w);
    }

    public override void reset() {
        menu.reset();
    }

    public override void setColor(Color color) {this.color = color;}
    public override Color getColor() { return color; }

    public override void onDispose() {
        base.onDispose();

        menu.Dispose();
        menu = null;
    }
}