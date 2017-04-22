using System;
using general;
using general.rendering;
using UnityEngine;

public class TourMenu : IMenu {
    private IMenu menu;
    private Reference<Texture2D> bg, logo;

    public TourMenu(IMenu menu, string bgPath) {
        this.menu = menu;

        ILoader il = ServiceLocator.getILoader();
        bg = il.load<Texture2D>(bgPath);
        logo = il.load<Texture2D>(CachedLoader.SERVER_PATH + "logo.png");

        setTouchable(true);

    }

    public override bool enter() { return menu.enter(); }
    public override bool exit(bool isClosing) { return menu.exit(isClosing); }

    public override void addRow(IRow row) {
        menu.addRow(row);
    }

    public override void draw(float w, float h) {
        // TODO: Update outside of draw.
        // TODO: Incorporate deltaTime.
        // TODO: Make smooth deltaTime variables.

        float headerFrac = .3f, menuFrac = 1 - headerFrac;

        GUIX.beginClip(new Rect(0, h * headerFrac, w, h * menuFrac));
        menu.draw(w, h * menuFrac);
        GUIX.endClip();

        // Draw BG.
        Rect bgRect = new Rect(0, 0, w, h * headerFrac);
        GUIX.beginClip(bgRect);
        GUIX.beginColor(Color.white);
        TextureUtility.drawTexture(bgRect, bg, AspectType.CROP_IN_REGION);
        GUIX.endColor();
        GUIX.endClip();

        // Draw logo.
        float aspect = TextureUtility.getAspectRatio(logo);

        float logoW = w / 3, logoH = logoW / aspect;
        Rect logoRegion = new Rect(w - logoW, 0, logoW, logoH);
        logoRegion = TextureUtility.drawTexture(logoRegion, logo, AspectType.FIT_IN_REGION);
        if (GUIX.didTapInsideRect(logoRegion)) {
            onClick();
            Application.OpenURL("https://www.iusb.edu/civil-rights/");
        }
        drawTouchRing(logoRegion);
    }

    protected override float calcPixelHeight(float w) {
        return menu.getPixelHeight(w);
    }

    public override void reset() {
        menu.reset();
    }

    public override void setColor(Color color) { menu.setColor(color); }
    public override Color getColor() { return menu.getColor(); }

    public override void onDispose() {
        base.onDispose();

        bg.removeOwner();

        menu.Dispose();
        menu = null;
    }
}
