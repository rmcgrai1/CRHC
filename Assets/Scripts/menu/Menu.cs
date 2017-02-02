using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class Menu {
    private List<Row> rows = new List<Row>();

    private class Row : MenuItem {
        private List<MenuItem> items = new List<MenuItem>();

        public void addItem(MenuItem item) {
            items.Add(item);
        }

        public void draw(float x, float y, float w) {
            w /= items.Count;

            foreach (MenuItem item in items) {
                item.draw(x, y, w);
                x += w;
            }
        }

        public float getHeight(float w) {
            w /= items.Count;

            float h = 0;
            foreach (MenuItem item in items) {
                h = Math.Max(h, item.getHeight(w));
            }

            return h;
        }
    }

    public void addRow(params MenuItem[] rowItems) {
        Row row = new Row();
        rows.Add(row);

        foreach (MenuItem item in rowItems) {
            row.addItem(item);
        }
    }

    public void draw() {
        float x = 0, y = 0, w = Screen.width, h = 0;
        float[] hs = new float[rows.Count];

        int i = 0;
        foreach (Row row in rows) {
            hs[i++] = h += row.getHeight(w);
        }

        i = 0;
        foreach (Row row in rows) {
            row.draw(x, y, w);
            y += hs[i];
        }
    }
}