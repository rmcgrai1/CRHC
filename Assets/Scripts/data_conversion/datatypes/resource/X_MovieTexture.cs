using System;
using System.Collections;
using UnityEngine;

public class X_MovieTexture : IConvertible<MovieTexture> {
    public override IEnumerator convertCoroutine<INPUT_TYPE>(INPUT_TYPE input) {
        Type type = typeof(INPUT_TYPE);

        if (type == typeof(WWW)) {
            WWW www = input as WWW;
            yield return www;
            setOutput(www.movie);
        }
        else {
            throw new NotSupportedException();
        }
    }

    public override void save(string relativePath) {
        throw new NotImplementedException();
    }
}