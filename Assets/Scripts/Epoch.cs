using UnityEngine;
using System;

public static class Epoch {

    public static double CurrentMillis() {
        DateTime epochStart = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
        return (DateTime.UtcNow - epochStart).TotalMilliseconds;
    }

    public static double MillisElapsed(double t1) {
        return MillisElapsed(CurrentMillis(), t1);
    }

    public static double MillisElapsed(double t1, double t2) {
        return Math.Abs(t1 - t2);
    }
}