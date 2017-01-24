using System;
using System.IO;
using UnityEngine;

public class WebTexture : WebResource<Texture2D> {
    private Texture2D texture;

    public WebTexture(string url) : base(url) {
        load();

        //byte[] byteData = texture.EncodeToPNG();
        //System.IO.File.WriteAllBytes("junk.png", byteData);
    }

    /*protected override Texture2D convert(byte[] byteData) {
        Texture2D texture = new Texture2D(4, 4);
        texture.LoadImage(byteData);

        return texture;
    }*/
    protected override Texture2D convert(WWW data) {
        return data.texture;
    }

    protected override void onLoad(Texture2D returnedData) {
        texture = returnedData;
    }
    protected override void onUnload() {
        if (texture != null)
            Texture2D.DestroyImmediate(texture, true);
    }

    public Texture2D getTexture() {
        return texture;
    }
}
