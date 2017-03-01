using System;
using UnityEngine;
using UnityEngine.UI;

public class TextItem : IItem {
    private GUIStyle style;
    private GUIContent content;
    private TextVerticalAlignment verticalAlignment;

    public TextItem(string text) {
        content = new GUIContent("");

        style = new GUIStyle();
        style.fixedHeight = 0;
        style.clipping = TextClipping.Overflow;
        style.wordWrap = true;

        verticalAlignment = TextVerticalAlignment.CENTER;

        setText(text);

<<<<<<< HEAD
        setFont(CRHC.FONT_NORMAL);
=======
        setFont(Crch.FONT_NORMAL);
>>>>>>> 7d8058b78fc3336b912526ca3bdad1b73a459737
    }

    public override bool draw(float w, float h) {
        float realH = getHeight(w);

        Rect rect;
        if(verticalAlignment == TextVerticalAlignment.CENTER) {
            rect = new Rect(0, (h - realH) / 2, w, realH);
        }
        else {
            rect = new Rect(0, 0, w, realH);
        }

        GUIX.Label(rect, content, style);

        if (GUIX.isMouseInsideRect(rect)) {
            //onClick();
            return false; // true;
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

    public void setFont(Font font) {
        style.font = font;
    }

    public override float getHeight(float w) {
        float h = style.CalcHeight(content, w);

        return h;
    }

    public override void onDispose() {
        style = null;
        content = null;
    }

    public void setTextVerticalAlignment(TextVerticalAlignment verticalAlignment) {
        this.verticalAlignment = verticalAlignment;
    }
}

public enum TextVerticalAlignment {
    TOP, CENTER
}
