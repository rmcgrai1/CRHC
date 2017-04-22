using System;
using general.number;
using Newtonsoft.Json.Linq;
using UnityEngine;

public static class CrhcSettings {
    public static bool
        offlineMode {
        set { data["offlineMode"] = value; }
        get { return data.Value<bool>("offlineMode"); }
    }

    public static bool
        forceLandscapeOrientation {
        set { data["forceLandscapeOrientation"] = value; }
        get { return data.Value<bool>("forceLandscapeOrientation"); }
    }

    public static bool
        showTouchPosition {
        set { data["showTouchPosition"] = value; }
        get { return data.Value<bool>("showTouchPosition"); }
    }

    public static bool
        showAnimations {
        set { data["showAnimations"] = value; }
        get { return data.Value<bool>("showAnimations"); }
    }
    public static bool
        showFps {
        set { data["showFps"] = value; }
        get { return data.Value<bool>("showFps"); }
    }
    public static bool
        showMemory {
        set { data["showMemory"] = value; }
        get { return data.Value<bool>("showMemory"); }
    }
    public static bool
        showGuixStackCounts {
        set { data["showGuixStackCounts"] = value; }
        get { return data.Value<bool>("showGuixStackCounts"); }
    }

    public static bool
        showFileManagerStackCount {
        set { data["showFileManagerStackCount"] = value; }
        get { return data.Value<bool>("showFileManagerStackCount"); }
    }
    public static bool
        showMenuElementCount {
        set { data["showMenuElementCount"] = value; }
        get { return data.Value<bool>("showMenuElementCount"); }
    }
    public static bool
        showReferenceCount {
        set { data["showReferenceCount"] = value; }
        get { return data.Value<bool>("showReferenceCount"); }
    }
    public static bool
        showScrollbar {
        set { data["showScrollbar"] = value; }
        get { return data.Value<bool>("showScrollbar"); }
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

            offlineMode = false;
            forceLandscapeOrientation = false;
            showTouchPosition = false;
            showAnimations = true;
            showFps = false;
            showMemory = false;
            showGuixStackCounts = false;
            showFileManagerStackCount = false;
            showMenuElementCount = false;
            showReferenceCount = false;
            showScrollbar = true;

            saveSettings();
        }
    }

    public static JObject getSettingsDict() {
        return data;
    }
}
