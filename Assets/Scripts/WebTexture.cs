using System.Collections;
using UnityEngine;

public class WebTexture : WebLoadable<Texture2D> {
    private Texture2D texture;


    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public WebTexture(string url) : base(url) {
    }

    protected override Texture2D convert(WWW data) {
        return data.texture;
    }

    protected override void onLoadCoroutineSuccess(Texture2D returnedData) {
        texture = returnedData;
    }
    protected override IEnumerator onUnloadCoroutine() {
        Object.DestroyImmediate(texture, true);
        yield return null;
    }

    public Texture2D getTexture() {
        return texture;
    }
}
