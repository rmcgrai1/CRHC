using System.Collections;
using UnityEngine;

public class Experience : Loadable {
    private Landmark parent;
    private string url;

    private string id;
    private WebTexture thumbnail;
    private WebTexture vectorGuideline;
    private string vuforiaUrl;
    private Action action;

    public Experience(Landmark parent, string id, string vuforiaUrl) {
        this.parent = parent;
        url = parent.getUrl() + id + "/";

        this.id = id;
        this.vuforiaUrl = vuforiaUrl;
    }

    protected override IEnumerator onLoadCoroutine() {
        yield return null;
    }
    protected override IEnumerator onUnloadCoroutine() {
        yield return null;
    }
}
