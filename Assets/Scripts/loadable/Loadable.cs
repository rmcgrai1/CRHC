using System.Collections;

public interface Loadable {
    void load();
    void unload();

    bool isLoaded();

    void addObserver(LoadableObserver obj);

    void notifyLoadSuccess();
    void notifyLoadFailure();
    void notifyUnloadSuccess();
    void notifyUnloadFailure();
}


