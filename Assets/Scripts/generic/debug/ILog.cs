using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public interface ILog {

    void clear();

    void print(LogType type, object o);
    void println(LogType type, object o);
    void println(LogType type, Exception e);
}

public enum LogType {
    IO, JUNK
}