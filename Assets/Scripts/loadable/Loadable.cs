using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Loadable {
    private ICollection<LoadableObserver> observers;
    private bool _isLoaded;

    public Loadable() {
        observers = new LinkedList<LoadableObserver>();
    }

    /*=======================================================**=======================================================*/
    /*============================================ METHODS TO BE OVERRIDDEN ==========================================*/
    /*=======================================================**=======================================================*/
    protected abstract IEnumerator tryLoad();
    protected abstract IEnumerator tryUnload();

    private IEnumerator loadCoroutine() {
        // TODO: Figure out how to check for success.

        Debug.Log(this + ".loadCoroutine()");

        if (!isLoaded()) {
            yield return tryLoad();
            _isLoaded = true;
            println(this + " successfully loaded.");
            notifyLoadSuccess();
        }
        else {
            println("Already loaded!");
        }

        /*try {
            _isLoaded = true;
        }
        catch(Exception e) {
            println(this + " failed to load: " + e);
            println(e.StackTrace);
            notifyLoadFailure();
        }
        yield return null;*/
    }

    public void println(string msg) {
        int len = msg.Length, chunkSize = len, curSize;

        /*for(int i = 0; i < len; i += chunkSize) {
            curSize = Math.Min(len - i, chunkSize);

            Debug.Log(msg.Substring(i, curSize));
        }*/
        Debug.Log(msg);
    }

    private IEnumerator unloadCoroutine() {
        println(this + ".unloadCoroutine()");

        if (isLoaded()) {
            yield return tryUnload();
            _isLoaded = false;
            println(this + " successfully unloaded.");
            notifyUnloadSuccess();
        }
        else {
            println("Already unloaded!");
        }

        /*try {
            tryUnload();
            _isLoaded = false;
            println(this + " successfully unloaded.");
            notifyUnloadSuccess();
        }
        catch (Exception e) {
            println(this + " failed to unload: " + e);
            println(e.StackTrace);
            notifyUnloadFailure();
        }
        yield return null;*/
    }

    public void load() {
        println(this + ".load()");
        CoroutineManager.startCoroutine(loadCoroutine());
    }
    public void unload() {
        println(this + ".unload()");
        CoroutineManager.startCoroutine(unloadCoroutine());
    }
    public bool isLoaded() {
        return _isLoaded;
    }

    public void registerObserver(LoadableObserver observer) {
        observers.Add(observer);
    }
    public void unregisterObserver(LoadableObserver observer) {
        observers.Remove(observer);
    }

    public void unregisterAll() {
        observers.Clear();
    }

    private void notifyLoadSuccess() {
        foreach (LoadableObserver observer in observers) {
            observer.onLoadSuccess(this);
        }
    }
    private void notifyLoadFailure() {
        foreach (LoadableObserver observer in observers) {
            observer.onLoadFailure(this);
        }
    }
    private void notifyUnloadSuccess() {
        foreach (LoadableObserver observer in observers) {
            observer.onUnloadSuccess(this);
        }
    }
    private void notifyUnloadFailure() {
        foreach (LoadableObserver observer in observers) {
            observer.onUnloadFailure(this);
        }
    }

    public override string ToString() {
        return "Loadable";
    }
}