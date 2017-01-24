using System;
using System.Collections;
using System.Net;
using UnityEngine;

public abstract class WebResource<T> {

    //TODO: Replace w/ WWW class??

    private string url;
    private bool isLoaded;

    public WebResource(string url) {
        Debug.Log("Instantiated new webresource: " + url);

        this.url = url;
    }

    public void load() {
        load("");
    }
    public void load(string relativePath) {
        DownloadManager.Start
    }

    private IEnumerator loadCoroutine(string relativePath) {
        //DownloadManager.download(this, url+relativePath);

        if (!isLoaded) {
            isLoaded = true;

            string path = url + relativePath;

            Debug.Log("Loading from: " + path);

            WWW www = new WWW(path);
            yield return www;

            Debug.Log("OK!");
            T data = convert(www);

            onLoad(data);

            /*using (WebClient webClient = new WebClient()) {
                try {
                    byte[] returnedData = webClient.DownloadData(path);

                    T data = convert(returnedData);

                    onLoad(data);
                }
                catch (WebException e) {
                    Debug.Log(e.Message);
                }
            }*/
        }
    }

    public void unload() {
        if (!isLoaded)
            return;
        isLoaded = false;

        onUnload();
    }

    protected abstract T convert(WWW data);

    protected abstract void onLoad(T data);
    protected abstract void onUnload();

    public string getUrl() {
        return url;
    }
}
