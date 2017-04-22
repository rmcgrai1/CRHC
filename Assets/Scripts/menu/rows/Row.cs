using general.number;
using System;
using System.Collections.Generic;
using UnityEngine;

public class Row : IRow {
    private float height;
    private bool doSupercedeChildClick = false;

    public Row() {
        height = 0;
    }

    public Row(float height) {
        this.height = height;
    }

    public void setSupercedeChildClick(bool yes) {
        doSupercedeChildClick = yes;
    }

    private struct Pair {
        public IItem item;
        public float priority;

        public Pair(IItem item, float priority) {
            this.item = item;
            this.priority = priority;
        }
    }

    private IList<Pair> items = new List<Pair>();
    private Color color = CrhcConstants.COLOR_TRANSPARENT;
    private bool doXPad, doYPadTop, doYPadBottom;

    public void addItem(IItem item) { addItem(item, 1); }
    public void addItem(IItem item, float priority) {
        items.Add(new Pair(item, priority));
    }

    public void setColor(Color color) {
        this.color = color;
    }

    public override bool draw(float w) {
        float x = 0, h = getPixelHeight(w);

        bool alreadyClicked = false;

        Rect position = new Rect(0, 0, w, h + 1);
        GUIX.fillRect(position, color);

        if (doXPad) {
            float pad = CrhcConstants.PADDING_H.getAs(NumberType.PIXELS);
            w -= 2 * pad;
            x += pad;
        }

        float y = 0;
        if (doYPadTop) {
            y += CrhcConstants.PADDING_V.getAs(NumberType.PIXELS);
            h -= CrhcConstants.PADDING_V.getAs(NumberType.PIXELS);
        }
        if (doYPadBottom) {
            h -= CrhcConstants.PADDING_V.getAs(NumberType.PIXELS);
        }

        IItem item;
        float totalPriority = 0, sw;
        foreach (Pair pair in items) {
            totalPriority += pair.priority;
        }

        foreach (Pair pair in items) {
            item = pair.item;
            sw = pair.priority / totalPriority * w;

            GUIX.beginClip(new Rect(x, y, sw, h));
            alreadyClicked = item.draw(sw, h) || alreadyClicked;
            GUIX.endClip();
            x += sw;
        }

        drawTouchRing(position);

        if (doSupercedeChildClick || !alreadyClicked) {
            if (GUIX.didTapInsideRect(position)) {
                onClick();
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }

    protected override float calcPixelHeight(float w) {
        float totalPriority = 0, sw;
        foreach (Pair pair in items) {
            totalPriority += pair.priority;
        }

        if (doXPad) {
            float pad = CrhcConstants.PADDING_H.getAs(NumberType.PIXELS);
            w -= 2 * pad;
        }

        float h = 0;

        IItem item;
        foreach (Pair pair in items) {
            item = pair.item;
            sw = pair.priority / totalPriority * w;

            h = Math.Max(h, item.getPixelHeight(sw));
        }

        if (doYPadTop) {
            h += CrhcConstants.PADDING_V.getAs(NumberType.PIXELS);
        }
        if (doYPadBottom) {
            h += CrhcConstants.PADDING_V.getAs(NumberType.PIXELS);
        }

        return Math.Max(h, height);
    }

    public void setPadding(bool enableX, bool enableYTop, bool enableYBottom) {
        doXPad = enableX;
        doYPadTop = enableYTop;
        doYPadBottom = enableYBottom;
    }

    public override void onDispose() {
        base.onDispose();

        for (int i = 0; i < items.Count; i++) {
            items[i].item.Dispose();
        }
        items.Clear();
        items = null;
    }
}