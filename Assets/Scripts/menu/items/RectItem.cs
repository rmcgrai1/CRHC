using UnityEngine;

public class RectItem : IItem {
    private Color color;

    public RectItem(Color color) {
        this.color = color;
    }

    public override bool draw(float w, float h) {
        Rect rect = new Rect(0, 0, w, h);

        GUIX.fillRect(rect, color);
        if (GUIX.isMouseInsideRect(rect)) {
            onClick();
            return true;
        }
        else {
            return false;
        }
    }

    public override float getHeight(float w) {
        return 30;
    }

    public override void onDispose() {
    }
}
