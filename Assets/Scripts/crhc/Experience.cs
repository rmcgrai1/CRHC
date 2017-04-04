using Newtonsoft.Json.Linq;
using System.Collections;
using UnityEngine;

public class Experience : CrhcItem {
    private Reference<Texture2D> img, outline, overlay;

    public Experience(CrhcItem parent, JObject data) : base(parent, data) {
    }

    public override void onDispose() {
    }

    public void onLandmarkLoad() {
        ILoader loader = ServiceLocator.getILoader();
        img = loader.load<Texture2D>(getUrl() + "img.jpg");
        outline = loader.load<Texture2D>(getUrl() + "outlineResized.png");
        overlay = loader.load<Texture2D>(getUrl() + "overlayResized.png");
    }

    public void onLandmarkUnload() {
        img.removeOwner();
        outline.removeOwner();
        overlay.removeOwner();
        img = outline = overlay = null;
    }

    public Reference<Texture2D> getImg() {
        return img;
    }
    public Reference<Texture2D> getOutline() {
        return outline;
    }
    public Reference<Texture2D> getOverlay() {
        return overlay;
    }

    public Landmark getLandmark() {
        return getParent() as Landmark;
    }

    public string getTargetId() {
        return getData<string>("targetId");
    }

    public string getSource() {
        return getData<string>("source");
    }

    protected override IEnumerator tryLoad() {
        AppRunner.getVuforiaManager().activate(this);

        Menu menu = new Menu();

        Row backRow = new Row();
        backRow.addItem(new Landmark.BackButton(this), 1);
        menu.addRow(backRow);

        AppRunner.enterMenu(menu);
        yield return null;
    }

    protected override IEnumerator tryUnload() {
        AppRunner.getVuforiaManager().deactivate();
        AppRunner.exitMenu();

        yield return null;
    }
}