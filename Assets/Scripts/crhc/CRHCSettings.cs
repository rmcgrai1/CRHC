using System;
using general.number;
using Newtonsoft.Json.Linq;
using UnityEngine;

public static class CrhcSettings {
    public static bool
        doShowAnimations {
        set { data["doShowAnimations"] = value; }
        get { return data.Value<bool>("doShowAnimations"); }
    }
    public static bool
        doShowFps {
        set { data["doShowFps"] = value; }
        get { return data.Value<bool>("doShowFps"); }
    }
    public static bool
        doShowScrollbar {
        set { data["doShowScrollbar"] = value; }
        get { return data.Value<bool>("doShowScrollbar"); }
    }


    private static string settingsFilePath = "settings.json";
    private static JObject data;

    static CrhcSettings() {
        loadSettings();
    }

    public static void saveSettings() {
        IFileManager fm = ServiceLocator.getIFileManager();
        fm.writeToFile(settingsFilePath, data.ToString());
    }

    public static void loadSettings() {
        IFileManager fm = ServiceLocator.getIFileManager();

        if (fm.fileExists(settingsFilePath)) {
            data = JObject.Parse(fm.readFromFile(settingsFilePath));
        }
        else {
            data = new JObject();

            doShowAnimations = true;
            doShowFps = false;
            doShowScrollbar = true;

            saveSettings();
        }
    }

    public static JObject getSettingsDict() {
        return data;
    }
}
