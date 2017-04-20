using UnityEngine;

public abstract class ITextButtonRow : IButtonRow {
    public ITextButtonRow(string text) {
        TextItem textItem = new TextItem(text);
        textItem.setTextAnchor(TextAnchor.MiddleCenter);
        addItem(textItem, 1);
    }
}