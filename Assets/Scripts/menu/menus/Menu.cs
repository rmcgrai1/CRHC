using System.Collections.Generic;
using UnityEngine;

public class Menu : IMenu {
    private IList<IRow> rows = new List<IRow>();
    private IList<float> rowHeights = new List<float>();
    private Color color = CrhcConstants.COLOR_TRANSPARENT;

    public override void addRow(IRow row) {
        rows.Add(row);
        rowHeights.Add(-1);
    }

    protected override float calcPixelHeight(float w) {
        float h = 0;
        foreach (IRow row in rows) {
            h += row.getPixelHeight(w);
        }
        return h;
    }

    public override void draw(float w, float h) {
        // TODO: Fix offscreen issues.

        float y = 0;

        // If any of heights different, recalculate all.
        bool didChange = false;
        for(int i = 0, len = rows.Count; i < len; i++) {
            IRow row = rows[i];
            float height = rowHeights[i], calcHeight = row.getPixelHeight(w);

            if(height != calcHeight) {
                rowHeights[i] = height;
                didChange = true;
            }
        }

        if(didChange) {
            invalidateHeight();
        }

        float menuH = getPixelHeight(w);
        GUIX.fillRect(new Rect(0, 0, w, menuH), color);

        Rect clipRect = GUIX.getClipRect();
        float cY = clipRect.y, cH = clipRect.height;

        float sH = AppRunner.getScreenHeight();

        foreach (IRow row in rows) {
            if (AppRunner.doHandleOffscreen && cY + y > sH) {
                return;
            }

            h = row.getPixelHeight(w);

            if (!AppRunner.doHandleOffscreen || cY + y + h > 0) {
                GUIX.beginClip(new Rect(0, y, w, h + 1));
                row.draw(w);
                GUIX.endClip();
            }

            y += row.getPixelHeight(w);
        }
    }

    public override void setColor(Color color) { this.color = color; }
    public override Color getColor() { return color; }

    public override void onDispose() {
        base.onDispose();

        for (int i = 0; i < rows.Count; i++) {
            rows[i].Dispose();
        }

        rows.Clear();
        rowHeights.Clear();

        rows = null;
        rowHeights = null;
    }

    public override bool enter() {
        bool done = true;

        foreach(IRow row in rows) {
            done &= row.enter();
        }

        return done;
    }

    public override bool exit(bool isClosing) {
        bool done = true;

        foreach (IRow row in rows) {
            done &= row.exit(isClosing);
        }

        return done;
    }
}