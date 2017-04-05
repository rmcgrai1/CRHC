using generic;
using UnityEngine;
using System;
using System.IO;

public abstract class Reference {
    private int references = 1;

    // TODO: Make Reference objects owned by a ReferenceOwner object.
    public void addOwner() {
        references++;
        if (references == 1) {
            tryLoad();
        }
    }

    public void removeOwner() {
        if (references > 1) {
            references--;
        }
        else {
            references = 0;
            unload();
        }
    }

    public int getOwnerCount() {
        return references;
    }

    protected abstract void tryLoad();
    protected abstract void unload();
}
public class Reference<T> : Reference where T : class {
    private string path;
    private T data;
    private bool _isLoaded;
    private byte[] byteData;
    private bool _isValid;

    private WWW www;

    public Reference(string path) {
        this.path = path;
    }

    public void setWWW(WWW www) {
        this.www = www;
    }
    public WWW getWWW() {
        return www;
    }

    public float getLoadFraction() {
        if(www != null) {
            return www.progress;
        }
        else {
            return 1;
        }
    }

    public bool isLoaded() {
        return _isLoaded;
    }

    public string getPath() {
        return path;
    }

    public void setResource(T data, byte[] byteData) {
        if ((!_isLoaded || !_isValid) && data != null) {
            _isLoaded = true;
            _isValid = true;
            this.data = data;
            this.byteData = byteData;

            if(onLoad != null) {
                onLoad();
            }
        }
    }

    public void invalidate() {
        _isValid = false;
    }

    public T getResource() {
        return data;
    }

    public void save(string localPath) {
        try {
            ServiceLocator.getIFileManager().writeToFile(localPath, byteData);
        }
        catch (Exception e) {
            ServiceLocator.getILog().println(LogType.IO, e);
        }
    }

    protected override void tryLoad() {
        ServiceLocator.getILoader().load(this);
    }

    protected override void unload() {
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

        www = null;
    }

    public delegate void LoadEventDelegate();
    public event LoadEventDelegate onLoad;
}