using UnityEngine;

public abstract class WebString : WebResource<string> {
    public WebString(string url) : base(url) {
    }

    /*protected override string convert(byte[] srcData) {
        return System.Text.Encoding.UTF8.GetString(srcData);
    }*/

    protected override string convert(WWW data) {
        return data.text;
    }
}
