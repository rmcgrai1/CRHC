using UnityEngine;
using System.Collections;

public class Action : Loadable {
    private WebTexture image;
    private WebAudio audio;
    private WebVideo video;

    public Action(string imageUrl, string audioUrl, string videoUrl) {
        image = new WebTexture(imageUrl);
        audio = new WebAudio(audioUrl);
        video = new WebVideo(videoUrl);
    }

    protected override IEnumerator onLoadCoroutine() {
        yield return image.loadCoroutine();
        yield return audio.loadCoroutine();
        yield return video.loadCoroutine();
    }

    protected override IEnumerator onUnloadCoroutine() {
        yield return image.unloadCoroutine();
        yield return audio.unloadCoroutine();
        yield return video.unloadCoroutine();
    }


    public void activate() {
        // When action activates, start playing/showing the attributes that aren't null.
        // TODO: image

        audio.play();
        video.play();
    }

    public void deactivate() {
        // When action deactivates, stop playing/showing the attributes that aren't null.
        // TODO: image

        audio.stop();
        video.stop();
    }
}
