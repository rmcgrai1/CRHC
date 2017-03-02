using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using UnityEngine;

public class AndroidFileManager : IFileManager {
    public override string getBaseDirectory() {
        return Application.persistentDataPath + "/";
    }

    public override bool createDirectory(string path) {
        pushDirectory(getBaseDirectory());
        createNonexistingFolders(path);
        popDirectory();

        return true;
    }

    public override bool deleteDirectory(string path) {
        pushDirectory(getBaseDirectory());
        if (directoryExists(path)) {
            Directory.Delete(path, true);
        }
        popDirectory();

        return true;
    }

    public override bool writeToFile(string path, byte[] data) {
        pushDirectory(getBaseDirectory());
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

    public override bool directoryExists(string path) {
        pushDirectory(getBaseDirectory());
        bool doesExist = Directory.Exists(path);
        popDirectory();

        return doesExist;
    }

    public override bool fileExists(string path) {
        pushDirectory(getBaseDirectory());
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
