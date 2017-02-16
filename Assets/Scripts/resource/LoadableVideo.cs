using UnityEngine;

public class LoadableVideo : LoadableResource<MovieTexture> {

    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public LoadableVideo(string url) : base(url) {
    }

    public void play() {
        getResource().Play();
    }
    public void stop() {
        getResource().Stop();
    }
}