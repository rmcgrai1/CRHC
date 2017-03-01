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

    private void createNonexistingFolders(string relativePath) {
        string curDirs = "";

        ILog iLog = ServiceLocator.getILog();

        string[] dirs = relativePath.Split('/');

        foreach (string dir in dirs) {
            curDirs += dir + "/";

            iLog.println(LogType.IO, "Checking if " + curDirs + " exists...");
            bool doesntExist = false;
            try {
                doesntExist = !Directory.Exists(curDirs);
            }
            catch (Exception e) {
                iLog.println(LogType.IO, e);
            }

            if (doesntExist) {
                iLog.println(LogType.IO, "Creating" + curDirs + "...");

                try {
                    Directory.CreateDirectory(curDirs);
                }
                catch (Exception e) {
                    iLog.println(LogType.IO, e);
                }
            }
        }
    }
}
