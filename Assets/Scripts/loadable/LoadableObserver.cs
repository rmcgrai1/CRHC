public interface LoadableObserver {
    void onLoadSuccess(Loadable obj);
    void onLoadFailure(Loadable obj);
    void onUnloadSuccess(Loadable obj);
    void onUnloadFailure(Loadable obj);
}