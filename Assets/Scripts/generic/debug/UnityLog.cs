using System;
using UnityEngine;

namespace generic.debug {
    public class UnityLog : ILog {
        public void clear() {
            Debug.ClearDeveloperConsole();
        }

        public void print(LogType type, object o) {
            println(type, o);
        }

        public void println(LogType type, object o) {
            Debug.Log(o);
        }

        public void println(LogType type, Exception e) {
            println(type, e.Message);
        }
    }
}
