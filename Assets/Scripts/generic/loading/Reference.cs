using generic;
using UnityEngine;
using System;
using System.IO;

public abstract class Reference { }
public class Reference<T> : Reference where T : class {
    private string path;
    private T data;
    private bool _isLoaded;
    private int references = 1;
    private byte[] byteData;

    public Reference(string path) {
        this.path = path;
    }

    public bool isLoaded() {
        return _isLoaded;
    }

    public string getPath() {
        return path;
    }

    public void setResource(T data, byte[] byteData) {
        if (!isLoaded() && data != null) {
            _isLoaded = true;
            this.data = data;
            this.byteData = byteData;
        }
    }

    public T getResource() {
        return data;
    }

    // TODO: Tweak, so reference has to be owned by reference owner.
    public void addOwner() {
        if (references > 0) {
            references++;
        }
        else {
            references = 1;

            ServiceLocator.getILoader().load(this);
        }
    }

    public void removeOwner() {
        if (references > 1) {
            references--;
        }
        else {
            references = 0;
            _isLoaded = false;

            byteData = null;

            Type type = typeof(T);
            if (type == typeof(Texture2D)) {
                UnityEngine.Object.Destroy(data as Texture2D);
            }
            else if (type == typeof(AudioClip)) {
                UnityEngine.Object.Destroy(data as AudioClip);
            }
            else {
                data = null;
            }
        }
    }

    public int getOwnerCount() {
        return references;
    }

    public void save(string localPath) {
        try {
            ServiceLocator.getIFileManager().writeToFile(localPath, byteData);
        }
        catch (Exception e) {
            ServiceLocator.getILog().println(LogType.IO, e);
        }
    }
}