using System;
using System.Collections;
using System.IO;
using UnityEngine;

public class X_Texture2D : IConvertible<Texture2D> {
    public override IEnumerator convertCoroutine<INPUT_TYPE>(INPUT_TYPE input) {
        Type type = typeof(INPUT_TYPE);

        if (type == typeof(WWW)) {
            WWW www = input as WWW;
            yield return www;
            setOutput(www.texture);
        }
        else {
            throw new NotSupportedException();
        }
    }

    public override void save(string relativePath) {
        Texture2D resource = getOutput();

        byte[] data;
        if(relativePath.EndsWith(".jpg")) {
            data = resource.EncodeToJPG(100);
        }
        else if(relativePath.EndsWith(".png")) {
            data = resource.EncodeToPNG();
        }
        else {
            throw new NotImplementedException();
        }

        File.WriteAllBytes(relativePath, data);
    }
}