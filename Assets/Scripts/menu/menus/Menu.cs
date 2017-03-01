using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class Menu : IMenu {
    private IList<IRow> rows = new List<IRow>();
    private Color color;

    public override void addRow(IRow row) {
        rows.Add(row);
    }

    public override float getHeight(float w) {
        float h = 0;
        foreach (IRow row in rows) {
            h += row.getHeight(w);
        }
        return h;
    }

    public override void draw(float w, float h) {
        float y = 0;

        // TODO: Limit ys to just those onscreen?
        // TODO: Prevent from recalculating getHeight so much?

        float menuH = getHeight(w);
        GUIX.fillRect(new Rect(0, 0, w, menuH), color);

        int i = 0;
        foreach (IRow row in rows) {
            h = row.getHeight(w);

            GUIX.beginClip(new Rect(0, y, w, h+1));
            row.draw(w);
            GUIX.endClip();

            y += row.getHeight(w);
        }
    }

    public override void reset() {
    }

    public override void setColor(Color color) {
        this.color = color;
    }

    public override void onDispose() {
        for(int i = 0; i < rows.Count; i++) {
            rows[i].Dispose();
        }
        rows.Clear();
        rows = null;
    }
}