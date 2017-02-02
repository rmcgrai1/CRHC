using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class LoadableCollection : Loadable, LoadableObserver {
    private ICollection<Loadable> children;

    public void load() {
        foreach(Loadable child in children) {
            child.load();
        }
    }
    public void unload() {
        foreach (Loadable child in children) {
            child.unload();
        }
    }

    public bool isLoaded() {
        throw new NotImplementedException();
    }

    public void addObserver(LoadableObserver obj) {
        throw new NotImplementedException();
    }

    public void notifyLoadSuccess() {
        throw new NotImplementedException();
    }

    public void notifyLoadFailure() {
        throw new NotImplementedException();
    }

    public void notifyUnloadSuccess() {
        throw new NotImplementedException();
    }

    public void notifyUnloadFailure() {
        throw new NotImplementedException();
    }

    public void onLoadFailure(Loadable obj) {
    }

    public void onLoadSuccess(Loadable obj) {
    }

    public void onUnloadFailure(Loadable obj) {
    }

    public void onUnloadSuccess(Loadable obj) {
    }
}