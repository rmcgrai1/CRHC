using System;
using UnityEngine;
using UnityEngine.UI;

public class MenuText : MenuItem {
    private static GUIStyle style;
    private string text;

    static MenuText() {
        style = new GUIStyle();
        style.fixedHeight = 0;
        style.clipping = TextClipping.Overflow;
        style.wordWrap = true;
    }

    public MenuText(string text) {
        setText(text);
    }

    public void draw(float x, float y, float w) {
        float h = getHeight(w);

        GUI.Label(new Rect(x, y, w, h), text, style);
    }

    public void setText(string text) {
        this.text = text;
    }

    public float getHeight(float w) {
        GUIContent content = new GUIContent(text);
        float h = style.CalcHeight(content, w);

        return h;
    }
}
