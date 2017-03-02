using generic.number;
using generic.rendering;
using System;
using UnityEngine;

public class PaneRow : IRow {
    private Row headRow;
    private IMenu subMenu;
    private float openFrac = 0, toFrac = 0;
    private Color openColor, closedColor;
    private Reference<Texture2D> arrowTexture;

    public PaneRow(Row headRow, IMenu subMenu) {
        this.headRow = headRow;
        this.subMenu = subMenu;

        arrowTexture = ServiceLocator.getILoader().load<Texture2D>(CachedLoader.SERVER_PATH + "icons/right_icon.png");
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

        float headH = headRow.getPixelHeight(w);
        float padding = CRHC.PADDING_H.getAs(NumberType.PIXELS), s = .6f, arrowW = padding*s;
        Rect arrowRect = new Rect(padding*(1-s)/2, headH/2 - arrowW/2, arrowW, arrowW);
        Vector2 pivot = new Vector2(arrowRect.x + arrowRect.width/2, arrowRect.y + arrowRect.height/2);
        float angle = 90 * openFrac;
        GUIUtility.RotateAroundPivot(angle, pivot);
        TextureUtility.drawTexture(arrowRect, arrowTexture, CRHC.COLOR_GRAY_DARK, AspectType.FIT_IN_REGION);
        GUIUtility.RotateAroundPivot(-angle, pivot);

        float h = subMenu.getHeight(w) * openFrac;
        if (h > .01) {
            GUIX.beginClip(new Rect(0, headRow.getPixelHeight(w), w, h));
            subMenu.draw(w, h);
            GUIX.endClip();
        }

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

        arrowTexture.removeOwner();
        arrowTexture = null;
    }
}
