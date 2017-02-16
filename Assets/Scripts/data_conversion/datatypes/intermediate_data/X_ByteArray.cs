using System;
using System.Collections;
using System.IO;
using UnityEngine;

public class X_ByteArray : IConvertible<byte[]> {
    public override IEnumerator convertCoroutine<INPUT_TYPE>(INPUT_TYPE input) {
        Type type = typeof(INPUT_TYPE);

        if (type == typeof(WWW)) {
            WWW www = input as WWW;
            yield return www;
            setOutput(www.bytes);
        }
        else {
            throw new NotImplementedException();
        }
    }

    public override void save(string relativePath) {
        File.WriteAllBytes(relativePath, getOutput());
    }
}
