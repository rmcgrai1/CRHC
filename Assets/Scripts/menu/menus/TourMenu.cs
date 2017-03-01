using generic;
using UnityEngine;

public class TourMenu : IMenu {
    private IMenu menu;
    private Reference<Texture2D> bg;

    public TourMenu(IMenu menu, string bgPath) {
        this.menu = menu;

        bg = ServiceLocator.getILoader().load<Texture2D>(bgPath);
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
        if (bg.isLoaded()) {
            Texture2D tex = bg.getResource();

            float headerH, headerW, x, y;
            headerH = h * headerFrac;
            headerW = tex.width * headerH / tex.height;

            if (headerW < Screen.width) {
                headerH *= Screen.width / headerW;
                headerW = Screen.width;
            }

            x = Screen.width / 2 - headerW / 2;
            y = (h * headerFrac) / 2 - headerH / 2;

            GUIX.Texture(new Rect(x, y, headerW, headerH), tex);
        }

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
        bg = null;

        menu.Dispose();
        menu = null;
    }
}
