using System.Collections;
using UnityEngine;

public class WebVideo : WebLoadable<MovieTexture> {
    private MovieTexture video;


    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public WebVideo(string url) : base(url) {
    }


    protected override MovieTexture convert(WWW data) {
        return data.movie;
    }

    protected override void onLoadCoroutineSuccess(MovieTexture returnedData) {
        video = returnedData;
    }
    protected override IEnumerator onUnloadCoroutine() {
        Object.DestroyImmediate(video, true);
        yield return null;
    }

    public void play() {
        video.Play();
    }
    public void stop() {
        video.Stop();
    }

    /*=======================================================**=======================================================*/
    /*============================================== ACCESSORS/MUTATORS ==============================================*/
    /*=======================================================**=======================================================*/
    public MovieTexture getVideo() {
        return video;
    }
}