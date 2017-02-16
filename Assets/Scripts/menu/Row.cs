using System;
using System.Collections.Generic;
using UnityEngine;

public class Row : IRow {

    private class Pair {
        public MenuItem item;
        public float priority;

        public Pair(MenuItem item, float priority) {
            this.item = item;
            this.priority = priority;
        }
    }

    private ICollection<Pair> items = new List<Pair>();
    private Color color = Color.black;

    public void addItem(MenuItem item, float priority) {
        items.Add(new Pair(item, priority));
    }

    public void setColor(Color color) {
        this.color = color;
    }

    public bool draw(float w) {
        float x = 0, h = getHeight(w);

        bool alreadyClicked = false;

        Rect position = new Rect(0, 0, w, h);
        GUIX.Rect(position, color);

        MenuItem item;
        float totalPriority = 0, sw;
        foreach (Pair pair in items) {
            totalPriority += pair.priority;
        }

        foreach (Pair pair in items) {
            item = pair.item;
            sw = pair.priority / totalPriority * w;

            GUIX.beginClip(new Rect(x, 0, sw, h));
            alreadyClicked = item.draw(sw) || alreadyClicked;
            GUIX.endClip();
            x += sw;
        }

        if (!alreadyClicked) {
            return GUIX.isMouseInsideRect(position);
        }
        else {
            return false;
        }
    }

    public float getHeight(float w) {
        float totalPriority = 0, sw;
        foreach (Pair pair in items) {
            totalPriority += pair.priority;
        }

        MenuItem item;
        float h = 0;
        foreach (Pair pair in items) {
            item = pair.item;
            sw = pair.priority / totalPriority * w;

            h = Math.Max(h, item.getHeight(sw));
        }

        return h;
    }
}