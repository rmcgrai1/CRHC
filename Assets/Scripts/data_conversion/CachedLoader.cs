using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class CachedLoader<RESOURCE_TYPE> {
    private static IDictionary<string, CachedLoader<object>> runtimeCache;
    private int referenceCount = 0;

    private CachedLoader() {
    }

    public override IEnumerator convertCoroutine<INPUT_TYPE>(INPUT_TYPE path) {
        if(typeof(INPUT_TYPE) == typeof(string)) {
            yield return convertCoroutine(path as string);
        }
    }

    public static CachedLoader<RESOURCE_TYPE> getReference(string url) {
        CachedLoader<RESOURCE_TYPE> loader;

        loader = getFromRuntimeCache(url);

        if(loader == null) {

        }

        loader.referenceCount++;

        return loader;
    }

    public static void removeReference() {

    }

    static CachedLoader() {
        // TODO: HANDLE UNLOADING
        runtimeCache = new Dictionary<string, object>();
    }

    protected static CachedLoader<RESOURCE_TYPE> getFromRuntimeCache(string path) {
        if(runtimeCache.ContainsKey(path)) {
            object value = runtimeCache[path];

            return (RESOURCE_TYPE) value;
        }
        else {
            return default(RESOURCE_TYPE);
        }
    }

    public IEnumerator convertCoroutine(string path) {
        Type resourceType = typeof(RESOURCE_TYPE);

        // Check if file already exists in run-time cache.
        // TODO:
        CachedLoader<RESOURCE_TYPE> cached;
        if((cached = getFromRuntimeCache(path)) != null) {
            setOutput(cached);
        }

        // Check if file already exists in local file storage cache.
        string cachePath = path;
        bool isHTTP, isWWW, fromCache;

        if(isHTTP = cachePath.StartsWith("http://")) {
            cachePath = cachePath.Substring(7);
        }
        else if(isHTTP = cachePath.StartsWith("https://")) {
            cachePath = cachePath.Substring(8);
        }
        if (isWWW = cachePath.StartsWith("www.")) {
            cachePath = cachePath.Substring(4);
        }
        else if (isWWW = cachePath.StartsWith("www3.")) {
            cachePath = cachePath.Substring(5);
        }

        string prefix = "file:///";

        // If path leads to a website, then convert cache path to a relevant file path!
        if (isHTTP || isWWW) {
            string cwd = Directory.GetCurrentDirectory().Replace("\\", "/") + "/";

            // TODO: Change to double-dashes for certain devices?
            cachePath = cwd + "cache/" + cachePath;

            Debug.Log(cachePath);

            createNonexistingFolders(cachePath);
            if(File.Exists(cachePath)) {
                fromCache = true;
                path = prefix + cachePath;
            } else {
                fromCache = false;
            }
        }
        else {
            fromCache = true;
        }

        // Get WWW for downloading, if don't already have one.
        IConvertible<WWW> x_www = new X_WWW();
        yield return x_www.convertCoroutine(path);

        // Convert WWW to resource.
        IConvertible<RESOURCE_TYPE> x_resource = null;

        if (resourceType == typeof(string)) {
            x_resource = new X_String() as IConvertible<RESOURCE_TYPE>;
        }
        else if (resourceType == typeof(Texture2D)) {
            x_resource = new X_Texture2D() as IConvertible<RESOURCE_TYPE>;
        }
        else if (resourceType == typeof(AudioClip)) {
            x_resource = new X_AudioClip() as IConvertible<RESOURCE_TYPE>;
        }
        else if (resourceType == typeof(MovieTexture)) {
            x_resource = new X_MovieTexture() as IConvertible<RESOURCE_TYPE>;
        }

        yield return x_resource.convertFrom(x_www);

        // Backup file in cache if not from there.
        if(!fromCache) {
            x_resource.save(cachePath);
        }

        setOutput(x_resource.getOutput());
    }

    private void createNonexistingFolders(string relativePath) {
        int index = 0, slashIndex;
        string curDirs = "";

        while((slashIndex = relativePath.IndexOf("/", index)) != -1) {
            curDirs += relativePath.Substring(index, (slashIndex-index)) + "/";

            if(!Directory.Exists(curDirs)) {
                Debug.Log("Creating " + curDirs + "...");
                Directory.CreateDirectory(curDirs);
            }

            index += (slashIndex-index) + 1;
        }
    }
}
