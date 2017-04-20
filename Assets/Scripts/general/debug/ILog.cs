using System;

public interface ILog {

    void clear();

    void print(LogType type, object o);
    void println(LogType type, object o);
    void println(LogType type, Exception e);
}

public enum LogType {
    IO, JUNK
}