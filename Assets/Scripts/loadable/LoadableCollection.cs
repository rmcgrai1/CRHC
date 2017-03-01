/*using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class LoadableCollection : Loadable {
    private ICollection<Loadable> children;
    private ChildObserver myObserver;

    public LoadableCollection() {
        observers = new List<LoadableObserver>();
        children = new List<Loadable>();
        myObserver = new ChildObserver();
    }

    public void load() {
        foreach (Loadable child in children) {
            child.load();
        }
    }
    public void unload() {
        foreach (Loadable child in children) {
            child.unload();
        }
    }

    public bool isLoaded() {
        bool success = true;
        foreach (Loadable child in children) {
            success = success && child.isLoaded();
        }
        return success;
    }

    public void addObserver(LoadableObserver obj) {
        observers.Add(obj);

        foreach (Loadable child in children) {
            child.registerObserver(obj);
        }
    }

    public void notifyLoadSuccess() {
    }
    public void notifyLoadFailure() {
    }
    public void notifyUnloadSuccess() {
    }
    public void notifyUnloadFailure() {
    }

    private class ChildObserver : LoadableObserver {
        public void onLoadFailure(Loadable obj) {
            throw new NotImplementedException();
        }

        public void onLoadSuccess(Loadable obj) {
            throw new NotImplementedException();
        }

        public void onUnloadFailure(Loadable obj) {
            throw new NotImplementedException();
        }

        public void onUnloadSuccess(Loadable obj) {
            throw new NotImplementedException();
        }
    }
}*/