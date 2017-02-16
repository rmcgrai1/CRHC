using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class Menu : IMenu {
    private ICollection<IRow> rows = new List<IRow>();
    private float rowGap = 5;

    public void addRow(IRow row) {
        rows.Add(row);
    }

    public float getHeight(float w) {
        float i = 0, h = 0;
        foreach (IRow row in rows) {
            if (i++ > 0) {
                h += rowGap;
            }
            h += row.getHeight(w);
        }
        return h;
    }

    public void draw(float w, float h) {
        float y = 0;

        // TODO: Limit ys to just those onscreen?
        // TODO: Prevent from recalculating getHeight so much?

        int i = 0;
        foreach (IRow row in rows) {
            if (i++ > 0) {
                y += rowGap;
            }

            h = row.getHeight(w);

            GUIX.beginClip(new Rect(0, y, w, h));
            row.draw(w);
            GUIX.endClip();

            y += row.getHeight(w);
        }
    }
}