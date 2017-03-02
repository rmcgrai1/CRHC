using System;
using UnityEngine;

public class PaneRow : IRow {
    private Row headRow;
    private IMenu subMenu;
    private float openFrac = 0, toFrac = 0;
    private Color openColor, closedColor;

    public PaneRow(Row headRow, IMenu subMenu) {
        this.headRow = headRow;
        this.subMenu = subMenu;
    }

    public Color blendColor(Color fromColor, Color toColor, float f) {
        float nf = 1 - f;

        float fr = fromColor.r, fg = fromColor.g, fb = fromColor.b, fa = fromColor.a;
        float tr = toColor.r, tg = toColor.g, tb = toColor.b, ta = toColor.a;
        float
            r = (float)Math.Sqrt(fr * fr * nf + tr * tr * f),
            g = (float)Math.Sqrt(fg * fg * nf + tg * tg * f),
            b = (float)Math.Sqrt(fb * fb * nf + tb * tb * f),
            a = (float)Math.Sqrt(fa * fa * nf + ta * ta * f);

        return new Color(r, g, b, a);
    }

    public override bool draw(float w) {
        // TODO: Move panel bg to draw before and after others...?????? 

        openFrac += (toFrac - openFrac) / 5;

        headRow.setColor(blendColor(closedColor, openColor, openFrac));
        if (headRow.draw(w)) {
            toFrac = 1 - toFrac;
        }

        float h = subMenu.getHeight(w) * openFrac;
        GUIX.beginClip(new Rect(0, headRow.getPixelHeight(w), w, h));
        subMenu.draw(w, h);
        GUIX.endClip();

        return false;
    }

    public override float getPixelHeight(float w) {
        float h;
        h = headRow.getPixelHeight(w);

        h += subMenu.getHeight(w) * openFrac;
        return h;
    }

    public void setOpenColor(Color openColor) {
        this.openColor = openColor;
    }

    public void setClosedColor(Color closedColor) {
        this.closedColor = closedColor;
    }

    public override void onDispose() {
        headRow.Dispose();
        headRow = null;

        subMenu.Dispose();
        subMenu = null;
    }
}
