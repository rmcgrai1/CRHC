using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

public abstract class IFileManager {
    private Stack<string> directories = new Stack<string>();

    public abstract string getBaseDirectory();
    public abstract bool createDirectory(string path);
    public abstract bool deleteDirectory(string path);
    public abstract bool writeToFile(string path, byte[] data);

    public void pushDirectory(string directory) {
        try {
            directories.Push(Directory.GetCurrentDirectory());
            Directory.SetCurrentDirectory(directory);
        }
        catch (Exception e) {
            ServiceLocator.getILog().println(LogType.IO, e);
        }
    }

    public void popDirectory() {
        Directory.SetCurrentDirectory(directories.Pop());
    }
}
