using general.number;
using UnityEngine;

public class TextItem : IItem {
    private GUIStyle style;
    private GUIContent content;

    public TextItem(string text) {
        content = new GUIContent("");

        style = new GUIStyle();
        style.fixedHeight = 0;
        style.clipping = TextClipping.Overflow;
        style.wordWrap = true;

        setTextAnchor(TextAnchor.MiddleLeft);
        setText(text);

        setFont(CrhcConstants.FONT_NORMAL);
    }

    public override bool draw(float w, float h) {
        Rect rect;
        rect = new Rect(0, 0, w, h);

        GUIX.drawLabel(rect, content, style);

        return false;
    }

    public void setText(string text) {
        content.text = text;
        //invalidateHeight();
    }

    public void setColor(Color color) {
        style.normal.textColor = color;
    }

    public void setFont(Font font) {
        style.font = font;

        DistanceMeasure fontSize = null;
        if (font == CrhcConstants.FONT_NORMAL) {
            fontSize = CrhcConstants.FONT_HEIGHT_NORMAL;
        }
        else if (font == CrhcConstants.FONT_TITLE) {
            fontSize = CrhcConstants.FONT_HEIGHT_TITLE;
        }
        else if (font == CrhcConstants.FONT_SUBTITLE) {
            fontSize = CrhcConstants.FONT_HEIGHT_SUBTITLE;
        }
        else if (font == CrhcConstants.FONT_SOURCE) {
            fontSize = CrhcConstants.FONT_HEIGHT_SOURCE;
        }

        if (fontSize != null) {
            style.fontSize = (int)fontSize.getAs(NumberType.PIXELS);
        }

        //invalidateHeight();
    }

    protected override float calcPixelHeight(float w) {
        return style.CalcHeight(content, w);            
    }

    public override void onDispose() {
        base.onDispose();

        style = null;
        content = null;
    }

    public void setTextAnchor(TextAnchor textAnchor) {
        style.alignment = textAnchor;
        //invalidateHeight();
    }
}