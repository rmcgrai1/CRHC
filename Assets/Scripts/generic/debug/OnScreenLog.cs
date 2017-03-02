using generic.debug;
using System;
using System.Collections.Generic;
using UnityEngine;

public class OnScreenLog : ILog {
    private LinkedList<string> log = new LinkedList<string>();

    public void Start() {
        clear();
    }

    public void clear() {
        log.Clear();
    }

    private bool allow(LogType type) {
        return (type == LogType.IO);
    }

    public void print(LogType type, object o) {
        if (allow(type)) {
            string[] strs = o.ToString().Split('\n');

            for(int i = 0; i < strs.Length; i++) {
                string str = strs[i];

                if(i+1 == strs.Length) {
                    if(log.Count == 0) {
                        log.AddFirst("");
                    }

                    log.First.Value += str;
                }
                else {
                    log.First.Value += str;

                    log.AddFirst("");

                    if (log.Count > 50) {
                        log.RemoveLast();
                    }
                }
            }
        }
    }

    public void println(LogType type, object o) {
        print(type, o.ToString() + '\n');
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

        float y = 0, w = Screen.width, h, lh = 8;
        Rect r = new Rect(0, 0, 0, 0), rb = new Rect(0, 0, 0, 0);

        foreach(string str in log) {
            GUIX.beginOpacity(.5f);
            c.text = str;
            h = s.CalcHeight(c, w);
            h += lh;

            r.Set(0, y, w, h);
            rb.Set(0, y, w, h-lh);

            GUIX.fillRect(rb, Color.black);
            GUI.Label(r, c);

            y += h-lh;
            GUIX.endOpacity();
        }
    }
}
