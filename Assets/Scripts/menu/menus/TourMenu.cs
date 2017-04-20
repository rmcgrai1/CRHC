using general;
using general.rendering;
using UnityEngine;

public class TourMenu : IMenu {
    private IMenu menu;
    private Reference<Texture2D> bg;

    public TourMenu(IMenu menu, string bgPath) {
        this.menu = menu;

        ILoader loader = ServiceLocator.getILoader();
        bg = loader.load<Texture2D>(bgPath);
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
    }

    protected override float calcPixelHeight(float w) {
        return menu.getPixelHeight(w);
    }

    public override void reset() {
        menu.reset();
    }

    public override void setColor(Color color) {
        menu.setColor(color);
    }

    public override void onDispose() {
        bg.removeOwner();

        menu.Dispose();
        menu = null;
    }
}
