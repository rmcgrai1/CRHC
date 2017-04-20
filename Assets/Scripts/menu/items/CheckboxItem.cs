using general.rendering;
using UnityEngine;

public class CheckboxItem : IItem {
    private bool isFilled;

    public CheckboxItem(bool isFilled) {
        this.isFilled = isFilled;
    }

    public override bool draw(float w, float h) {
        Rect rect = TextureUtility.getUseRect(new Rect(0, 0, w, h), AspectType.FIT_IN_REGION);

        float x = rect.x, y = rect.y;
        w = rect.width;
        h = rect.height;

        float th = 4, p = th;

        GUIX.fillRect(rect, Color.white);
        GUIX.strokeRect(rect, Color.black, th);

        if (isFilled) {
            GUIX.fillRect(new Rect(x + th + p, y + th + p, w - 2 * (th + p), h - 2 * (th + p)), Color.black);
        }

        return false;
    }

    protected override float calcPixelHeight(float w) {
        return 30;
    }

    public override void onDispose() {
    }

    public void setIsFilled(bool isFilled) {
        this.isFilled = isFilled;
    }
}
