using System;
using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CachedLoader : ILoader {
    private WWWLoader wwwLoader = new WWWLoader();
    private ResourceLoader resourceLoader = new ResourceLoader();
    private static readonly string WWW_PREFIX = "file:///";
    public static readonly string SERVER_PATH = "https://s3.amazonaws.com/crhc/";
    //public static readonly string SERVER_PATH = "http://chrc.s3-website.us-east-2.amazonaws.com/";
    //private static readonly string SERVER_PATH = "http://www3.nd.edu/~rmcgrai1/CRHC/";

    private SourceType defaultSourceType = SourceType.WEB; //SourceType.DEFAULT;

    public override IEnumerator loadCoroutine<T>(Reference<T> reference, string path, bool forceReload) {
        IFileManager iFileManager = ServiceLocator.getIFileManager();

        string oriPath = path;

        SourceType sourceType = defaultSourceType;
        string 
            relePath = convertWebToLocalPath(path, PathType.RELATIVE), 
            wwwPath = convertWebToLocalPath(path, PathType.WWW),
            defaultPath = convertWebToLocalPath(path, PathType.RESOURCES);

        // Check if file already exists in local file storage cache.
        if (relePath != null) {
            ServiceLocator.getILog().print(LogType.IO, "Checking for file at " + relePath + "...");

            if (!forceReload && iFileManager.fileExists(relePath)) {
                sourceType = SourceType.CACHE;
                path = wwwPath;
                ServiceLocator.getILog().println(LogType.IO, "Using cache!");
            }
            else {
                sourceType = defaultSourceType;
                ServiceLocator.getILog().println(LogType.IO, "Not in cache.");
            }
        }
        else {
            sourceType = SourceType.DEFAULT;
        }

        if(sourceType == SourceType.DEFAULT) {
            yield return resourceLoader.loadCoroutine(reference, defaultPath);
        }
        else {
            yield return wwwLoader.loadCoroutine(reference, path);
        }

        bool valid = verify(reference);

        // Backup file in cache if not from there.
        if (!valid) {
            if(sourceType == SourceType.CACHE) {
                reference.invalidate();
                yield return loadCoroutine(reference, oriPath, true);
            }
        }
        else if (sourceType == SourceType.WEB) {
            ServiceLocator.getILog().println(LogType.IO, "Backing up " + typeof(T) + " at " + relePath + "...");
            reference.save(relePath);
        }
    }

    public static bool verify<T>(Reference<T> refer) where T : class {
        /*string s = www.text;
        if(s != null) {
            return (s[0] != '<');
        }*/

        return true;
    }

    public static string convertWebToLocalPath(string path, PathType type) {
        // Check if file already exists in local file storage cache.
        bool isHTTP, isWWW;
        string oriPath = path;

        if (isHTTP = path.StartsWith("http://")) {
            path = path.Substring(7);
        }
        else if (isHTTP = path.StartsWith("https://")) {
            path = path.Substring(8);
        }
        if (isWWW = path.StartsWith("www.")) {
            path = path.Substring(4);
        }
        else if (isWWW = path.StartsWith("www3.")) {
            path = path.Substring(5);
        }

        // If path leads to a website, then convert cache path to a relevant file path!
        if (isHTTP || isWWW) {
            // TODO: Change to double-dashes for certain devices?
            string cwd = ServiceLocator.getIFileManager().getBaseDirectory();

            if (type == PathType.ABSOLUTE) {
                path = "cache/" + path;
                path = cwd + path;
            }
            else if (type == PathType.WWW) {
                path = "cache/" + path;
                path = WWW_PREFIX + cwd + path;
            }
            else if(type == PathType.RESOURCES) {
                path = "DefaultServer/" + oriPath.Replace(SERVER_PATH, "");

                // Remove extension.
                path = path.Substring(0, path.LastIndexOf('.'));
            }
            else {
                path = "cache/" + path;
            }

            return path;
        }

        return null;
    }

    public override void clearCache(bool hardClear) {
        base.clearCache(hardClear);

        if (hardClear) {
            IFileManager iFileManager = ServiceLocator.getIFileManager();
            iFileManager.deleteDirectory(iFileManager.getBaseDirectory() + "cache/");
        }
    }
}

public enum PathType {
    WWW, RELATIVE, ABSOLUTE, RESOURCES
}

public enum SourceType {
    WEB, CACHE, DEFAULT
}