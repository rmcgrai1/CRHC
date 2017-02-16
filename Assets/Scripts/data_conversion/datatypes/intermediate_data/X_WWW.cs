using System;
using System.Collections;
using UnityEngine;

public class X_WWW : IConvertible<WWW> {
    public override IEnumerator convertCoroutine<INPUT_TYPE>(INPUT_TYPE input) {
        Type type = typeof(INPUT_TYPE);

        if (type == typeof(string)) {
            setOutput(new WWW(input as string));
            yield return null;
        }
        else {
            throw new NotImplementedException();
        }
    }

    public override void save(string relativePath) {
        throw new NotImplementedException();
    }
}
