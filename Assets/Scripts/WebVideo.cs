using UnityEngine;

public class WebVideo : WebResource<MovieTexture> {
    private MovieTexture video;

    public WebVideo(string url) : base(url) {
    }

    protected override MovieTexture convert(WWW data) {
        return data.movie;
    }

    protected override void onLoad(MovieTexture returnedData) {
        video = returnedData;
    }
    protected override void onUnload() {
        if (video != null)
            MovieTexture.DestroyImmediate(video, true);
    }

    public MovieTexture getVideo() {
        return video;
    }
}