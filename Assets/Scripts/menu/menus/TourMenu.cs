using generic;
using generic.rendering;
using UnityEngine;

public class TourMenu : IMenu {
    private IMenu menu;
    private Reference<Texture2D> bg;

    public TourMenu(IMenu menu, string bgPath) {
        this.menu = menu;

        ILoader loader = ServiceLocator.getILoader();
        bg = loader.load<Texture2D>(bgPath);
    }

    public override void addRow(IRow row) {
        menu.addRow(row);
    }

    public override void draw(float w, float h) {
        // TODO: Update outside of draw.
        // TODO: Incorporate deltaTime.
        // TODO: Make smooth deltaTime variables.

        float headerFrac = .3f, menuFrac = 1 - headerFrac;

        // Draw BG.
        TextureUtility.drawTexture(new Rect(0, 0, Screen.width, h * headerFrac), bg, AspectType.CROP_IN_REGION);

        GUIX.beginClip(new Rect(0, h * headerFrac, w, h * menuFrac));
        menu.draw(w, h * menuFrac);
        GUIX.endClip();
    }

    public override float getHeight(float w) {
        return menu.getHeight(w);
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
