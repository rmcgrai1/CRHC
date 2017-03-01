using generic.debug;
using System;
using System.Collections.Generic;
using UnityEngine;

public class OnScreenLog : ILog {
    private LinkedList<string> log = new LinkedList<string>();

    public void Start() {
    }

    public void clear() {
        log.Clear();
    }

    private bool allow(LogType type) {
        return (type == LogType.IO);
    }

    public void print(LogType type, object o) {
        println(type, o);
    }

    public void println(LogType type, object o) {
        if (allow(type)) {
            log.AddFirst(o.ToString());
        }
    }

    public void println(LogType type, Exception e) {
        println(type, e.Message);
    }

    public void OnGUI() {
        GUIStyle s = new GUIStyle();
        GUIContent c = new GUIContent();

        s.fixedHeight = 0;
        s.clipping = TextClipping.Clip;
        s.wordWrap = true;

        float y = 0, w = Screen.width, h = 20;
        Rect r = new Rect(0, 0, 0, 0), rb = new Rect(0, 0, 0, 0);

        GUIX.beginOpacity(.5f);
        foreach (string str in log) {
            c.text = str;
            h = s.CalcHeight(c, w);
            r.Set(0, y, w, h);
            rb.Set(0, y, w, h);

            GUIX.fillRect(rb, Color.black);
            GUI.Label(r, str);

            y += h;
        }
        GUIX.endOpacity();
    }
}
