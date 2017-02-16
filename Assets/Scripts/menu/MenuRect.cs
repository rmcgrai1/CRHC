using UnityEngine;

public class MenuRect : MenuItem {
    private Color color;

    public MenuRect(Color color) {
        this.color = color;
    }

    public override bool draw(float w) {
        float h = getHeight(w);
        Rect rect = new Rect(0, 0, w, h);

        GUIX.Rect(rect, color);
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
}
