using general.number.smooth;
using general.rendering;
using System;
using UnityEngine;

public class CheckboxItem : IItem {
    private ISmoothNumber filledAmount = new PolynomialNumber(0, 1, 2f, 3);

    public CheckboxItem(bool isFilled) {
        filledAmount.setDirection(isFilled);
        filledAmount.complete();
    }

    public override bool draw(float w, float h) {
        Rect rect = TextureUtility.getUseRect(new Rect(0, 0, w, h), AspectType.FIT_IN_REGION);

        float s = CrhcConstants.FONT_HEIGHT_NORMAL.getAs(general.number.NumberType.PIXELS);

        float x = rect.x, y = rect.y;
        w = Math.Min(s, rect.width);
        h = Math.Min(s, rect.height);

        x += rect.width / 2 - w / 2;
        y += rect.height / 2 - h / 2;

        rect = new Rect(x, y, w, h);

        filledAmount.update();

        float th = w/10, p = 1.5f * th, f = filledAmount.get(), sx = (w - 2 * p) * f, sy = (h - 2 * p) * f;

        GUIX.fillRect(rect, Color.white);
        GUIX.strokeRect(rect, Color.black, th);

        GUIX.fillRect(new Rect(x + w/2 - sx/2, y + h/2 - sy/2, sx, sy), Color.black);

        return false;
    }

    protected override float calcPixelHeight(float w) {
        return 30;
    }

    public void setIsFilled(bool isFilled) {
        filledAmount.setDirection(isFilled);

        if(!CrhcSettings.showAnimations) {
            filledAmount.complete();
        }
    }
}
