using UnityEngine;

public class Experience : WebString {
    private Landmark parent;
	private string id;
	private WebTexture thumbnail;
	private WebTexture vectorGuideline;
	private string vuforiaUrl;
	private Action action;

    public Experience(Landmark parent, string id, string vuforiaUrl) : base(parent.getUrl() + id + "/") {
        this.parent = parent;
        this.id = id;
        this.vuforiaUrl = vuforiaUrl;
    }

    protected override void onLoad(string returnedString) {

        Debug.Log(returnedString);
    }
    protected override void onUnload() {
    }
}
