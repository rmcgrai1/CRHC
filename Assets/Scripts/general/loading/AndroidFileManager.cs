using System;
using System.IO;
using UnityEngine;

public class AndroidFileManager : IFileManager {
    private WorkDirectoryType workDirectoryType = WorkDirectoryType.BASE;

    public override void setWorkDirectory(WorkDirectoryType type) {
        workDirectoryType = type;
    }

    public override string getWorkDirectory() {
        switch(workDirectoryType) {
            case WorkDirectoryType.BASE:
                return getBaseDirectory();
            case WorkDirectoryType.STREAMING_ASSETS:
                return getStreamingAssetsDirectory();
            default:
                return "";
        }
    }


    public override string getBaseDirectory() {
        return Application.persistentDataPath + "/";
    }

    public override string getStreamingAssetsDirectory() {
        switch (Application.platform) {
            case RuntimePlatform.Android:
                return "jar:file://" + Application.dataPath + "!/assets/";

            case RuntimePlatform.IPhonePlayer:
                return Application.dataPath + "/Raw/";

            case RuntimePlatform.WindowsEditor:
            case RuntimePlatform.WindowsPlayer:
            case RuntimePlatform.OSXEditor:
            case RuntimePlatform.OSXPlayer:
                return Application.dataPath + "/StreamingAssets/";

            default:
                return null;
        }
    }

    public override string getWWWPrefix() {
        switch (Application.platform) {
            case RuntimePlatform.WindowsEditor:
            case RuntimePlatform.WindowsPlayer:
            case RuntimePlatform.OSXEditor:
            case RuntimePlatform.OSXPlayer:
                return "file:///";
            default:
                return "";
        }
    }

    public override bool createDirectory(string path) {
        pushDirectory(getWorkDirectory());
        createNonexistingFolders(path);
        popDirectory();

        return true;
    }

    public override bool deleteDirectory(string path) {
        pushDirectory(getWorkDirectory());
        if (directoryExists(path)) {
            Directory.Delete(path, true);
        }
        popDirectory();

        return true;
    }

    public override bool deleteFile(string path) {
        pushDirectory(getWorkDirectory());
        if (fileExists(path)) {
            File.Delete(path);
        }
        popDirectory();

        return true;
    }

    public override string readFromFile(string path) {
        string text = "";

        pushDirectory(getWorkDirectory());
        try {
            text = File.ReadAllText(path);
        }
        catch (Exception e) {
            ServiceLocator.getILog().println(LogType.IO, e);
        }
        popDirectory();

        return text;
    }

    public override bool writeToFile(string path, byte[] data) {
        pushDirectory(getWorkDirectory());
        createDirectory(Path.GetDirectoryName(path));
        try {
            File.WriteAllBytes(path, data);
        }
        catch (Exception e) {
            ServiceLocator.getILog().println(LogType.IO, e);
        }
        popDirectory();

        return true;
    }

    public override bool writeToFile(string path, string data) {
        pushDirectory(getWorkDirectory());
        createDirectory(Path.GetDirectoryName(path));
        try {
            File.WriteAllText(path, data);
        }
        catch (Exception e) {
            ServiceLocator.getILog().println(LogType.IO, e);
        }
        popDirectory();

        return true;
    }

    public override bool directoryExists(string path) {
        pushDirectory(getWorkDirectory());
        bool doesExist = Directory.Exists(path);
        popDirectory();

        return doesExist;
    }

    public override bool fileExists(string path) {
        pushDirectory(getWorkDirectory());
        bool doesExist = File.Exists(path);
        popDirectory();

        return doesExist;
    }

    private void createNonexistingFolders(string relativePath) {
        string curDirs = "";

        ILog iLog = ServiceLocator.getILog();

        string[] dirs = relativePath.Split('/');

        foreach (string dir in dirs) {
            curDirs += dir + "/";

            bool doesntExist = false;
            try {
                iLog.print(LogType.IO, "Checking if " + curDirs + " exists...");
                doesntExist = !directoryExists(curDirs);
            }
            catch (Exception e) {
                iLog.println(LogType.IO, e);
            }

            if (doesntExist) {
                iLog.print(LogType.IO, "\n\tCreating " + curDirs + "...");

                try {
                    Directory.CreateDirectory(curDirs);
                    iLog.println(LogType.IO, "OK!");
                }
                catch (Exception e) {
                    iLog.println(LogType.IO, e);
                }
            }
            else {
                iLog.println(LogType.IO, "OK!");
            }
        }
    }
}
