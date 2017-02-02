using System.Collections;
using UnityEngine;

public abstract class Loadable {
    private bool _isLoaded;

    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public Loadable() {
        _isLoaded = false;
    }
    ~Loadable() {
        unload();
    }


    /*=======================================================**=======================================================*/
    /*============================================ METHODS TO BE OVERRIDDEN ==========================================*/
    /*=======================================================**=======================================================*/
    protected abstract IEnumerator onLoadCoroutine();
    protected abstract IEnumerator onUnloadCoroutine();


    /*=======================================================**=======================================================*/
    /*============================================== LOADING/UNLOADING ===============================================*/
    /*=======================================================**=======================================================*/
    public void load() {
        // TODO: Run synchronously??
        loadAsync();
    }
    public void loadAsync() {
        CoroutineManager.startCoroutine(loadCoroutine());
    }
    public IEnumerator loadCoroutine() {
        if (!_isLoaded) {
            Debug.Log("Loading " + this + "...");

            _isLoaded = true;
            yield return onLoadCoroutine();
        }
    }

    public void unload() {
        // TODO: Run synchronously??
        unloadAsync();
    }
    public void unloadAsync() {
        CoroutineManager.startCoroutine(unloadCoroutine());
    }
    public IEnumerator unloadCoroutine() {
        if (_isLoaded) {
            Debug.Log("Unloading " + this + "...");

            _isLoaded = false;
            yield return onUnloadCoroutine();
        }
    }


    /*=======================================================**=======================================================*/
    /*============================================== ACCESSORS/MUTATORS ==============================================*/
    /*=======================================================**=======================================================*/
    public bool isLoaded() {
        return _isLoaded;
    }
}
 
 
 