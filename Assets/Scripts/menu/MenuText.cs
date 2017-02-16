using System;
using UnityEngine;
using UnityEngine.UI;

public class MenuText : MenuItem {
    private GUIStyle style;
    private GUIContent content;

    public MenuText(string text) {
        content = new GUIContent("");

        style = new GUIStyle();
        style.fixedHeight = 0;
        style.clipping = TextClipping.Overflow;
        style.wordWrap = true;

        setText(text);
    }

    public override bool draw(float w) {
        float h = getHeight(w);

        Rect rect = new Rect(0, 0, w, h);
        GUIX.Label(rect, content, style);
        if (GUIX.isMouseInsideRect(rect)) {
            onClick();
            return true;
        }
        else {
            return false;
        }
    }

    public void setText(string text) {
        content.text = text;
    }

    public void setColor(Color color) {
        style.normal.textColor = color;
    }

    public override float getHeight(float w) {
        float h = style.CalcHeight(content, w);

        return h;
    }
}
