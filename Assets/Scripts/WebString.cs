using System;
using System.Collections;
using UnityEngine;

public class WebString : WebLoadable<string> {
    private string text;


    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public WebString(string url) : base(url) {
    }

    protected override string convert(WWW data) {
        return data.text;
    }

    protected override void onLoadCoroutineSuccess(string data) {
        text = data;
    }
    protected override IEnumerator onUnloadCoroutine() {
        yield return null;
    }

    public string getString() {
        return text;
    }

    /*=======================================================**=======================================================*/
    /*============================================== ACCESSORS/MUTATORS ==============================================*/
    /*=======================================================**=======================================================*/

}
