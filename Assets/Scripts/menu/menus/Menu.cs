using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class Menu : IMenu {
    private IList<IRow> rows = new List<IRow>();
    private Color color;

    public override bool enter() { return true; }
    public override bool exit(bool isClosing) { return true; }

    public override void addRow(IRow row) {
        rows.Add(row);
    }

    public override float getHeight(float w) {
        float h = 0;
        foreach (IRow row in rows) {
            h += row.getPixelHeight(w);
        }
        return h;
    }

    public override void draw(float w, float h) {
        bool handleOffscreen = false;

        float y = 0;

        // TODO: Limit ys to just those onscreen?
        // TODO: Prevent from recalculating getHeight so much?

        float menuH = getHeight(w);
        GUIX.fillRect(new Rect(0, 0, w, menuH), color);

        Rect clipRect = GUIX.getClipRect();
        float cY = clipRect.y, cH = clipRect.height;

        float sH = AppRunner.getScreenHeight();

        foreach (IRow row in rows) {
            if (handleOffscreen && cY+y > sH) {
                return;
            }

            h = row.getPixelHeight(w);

            if (!handleOffscreen || cY + y + h > 0) {
                GUIX.beginClip(new Rect(0, y, w, h + 1));
                row.draw(w);
                GUIX.endClip();
            }

            y += row.getPixelHeight(w);
        }
    }

    public override void reset() {
    }

    public override void setColor(Color color) {
        this.color = color;
    }

    public override void onDispose() {
        for (int i = 0; i < rows.Count; i++) {
            rows[i].Dispose();
        }
        rows.Clear();
        rows = null;
    }
}