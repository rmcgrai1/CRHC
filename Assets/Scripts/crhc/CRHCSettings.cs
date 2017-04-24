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
        autoRotate {
        set { data["autoRotate"] = value; }
        get { return data.Value<bool>("autoRotate"); }
    }

    public static bool
        debugShowTouchPosition {
        set { data["debugShowTouchPosition"] = value; }
        get { return data.Value<bool>("debugShowTouchPosition"); }
    }

    public static bool
        showAnimations {
        set { data["showAnimations"] = value; }
        get { return data.Value<bool>("showAnimations"); }
    }
    public static bool
        debugShowFps {
        set { data["debugShowFps"] = value; }
        get { return data.Value<bool>("debugShowFps"); }
    }
    public static bool
        debugShowMemory {
        set { data["debugShowMemory"] = value; }
        get { return data.Value<bool>("debugShowMemory"); }
    }
    public static bool
        debugShowGuixStackCounts {
        set { data["debugShowGuixStackCounts"] = value; }
        get { return data.Value<bool>("debugShowGuixStackCounts"); }
    }

    public static bool
        debugShowFileManagerStackCount {
        set { data["debugShowFileManagerStackCount"] = value; }
        get { return data.Value<bool>("debugShowFileManagerStackCount"); }
    }
    public static bool
        debugShowMenuElementCount {
        set { data["debugShowMenuElementCount"] = value; }
        get { return data.Value<bool>("debugShowMenuElementCount"); }
    }
    public static bool
        debugShowReferenceCount {
        set { data["debugShowReferenceCount"] = value; }
        get { return data.Value<bool>("debugShowReferenceCount"); }
    }
    public static bool
        showScrollbar {
        set { data["showScrollbar"] = value; }
        get { return data.Value<bool>("showScrollbar"); }
    }
    public static bool
        showDebugSettings {
        set { data["showDebugSettings"] = value; }
        get { return data.Value<bool>("showDebugSettings"); }
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

    public static void clearSettings() {
        IFileManager fm = ServiceLocator.getIFileManager();

        if (fm.fileExists(settingsFilePath)) {
            fm.deleteFile(settingsFilePath);
        }
    }

    public static void loadSettings() {
        IFileManager fm = ServiceLocator.getIFileManager();

        if (fm.fileExists(settingsFilePath)) {
            data = JObject.Parse(fm.readFromFile(settingsFilePath));
        }
        else {
            data = new JObject();

            offlineMode = false;
            autoRotate = true;
            debugShowTouchPosition = false;
            showAnimations = true;
            debugShowFps = false;
            debugShowMemory = false;
            debugShowGuixStackCounts = false;
            debugShowFileManagerStackCount = false;
            debugShowMenuElementCount = false;
            debugShowReferenceCount = false;
            showScrollbar = true;
            showDebugSettings = false;

            saveSettings();
        }
    }

    public static JObject getSettingsDict() {
        return data;
    }
}
