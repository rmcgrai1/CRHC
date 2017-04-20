using general.debug;
using general.mobile;
using System.IO;

public static class ServiceLocator {
    private static ITouch iTouch;
    private static ILog iLog;
    private static ILoader iLoader;
    private static IFileManager iFileManager;

    static ServiceLocator() {
        iTouch = new MouseTouch();
        iLog = new OnScreenLog(); //new UnityLog();
        iLoader = new CachedLoader();
        iFileManager = new AndroidFileManager();
    }

    public static ITouch getITouch() {
        return iTouch;
    }

    public static ILog getILog() {
        return iLog;
    }

    public static ILoader getILoader() {
        return iLoader;
    }

    public static IFileManager getIFileManager() {
        return iFileManager;
    }
}