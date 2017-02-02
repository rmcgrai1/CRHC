using System.Collections;
using UnityEngine;

public abstract class WebLoadable<T> : Loadable {
    private string url;


    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public WebLoadable(string url) {
        Debug.Log("Instantiated new webresource: " + url);
        this.url = url;
    }


    /*=======================================================**=======================================================*/
    /*============================================ METHODS TO BE OVERRIDDEN ==========================================*/
    /*=======================================================**=======================================================*/
    protected abstract T convert(WWW data);
    protected abstract void onLoadCoroutineSuccess(T data);
    //protected abstract void onLoadCoroutineFailure(T data);


    /*=======================================================**=======================================================*/
    /*============================================== OVERRIDDEN METHODS ==============================================*/
    /*=======================================================**=======================================================*/
    protected sealed override IEnumerator onLoadCoroutine() {
        // Download data from url...
        WWW www = new WWW(url);

        // Wait for download to complete until performing tasks below...
        yield return www;

        // Convert the raw byte data from WWW into usable data by the class (string, texture, audio, etc.).
        T data = convert(www);

        // Work with the data upon loading.
        onLoadCoroutineSuccess(data);
    }

    public string getUrl() {
        return url;
    }
}
