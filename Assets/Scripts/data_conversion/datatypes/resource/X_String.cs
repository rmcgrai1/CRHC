using System;
using System.Collections;
using System.IO;
using UnityEngine;

public class X_String : IConvertible<string> {
    public override IEnumerator convertCoroutine<INPUT_TYPE>(INPUT_TYPE input) {
        Type type = typeof(INPUT_TYPE);

        if (type == typeof(WWW)) {
            WWW www = input as WWW;
            yield return www;
            setOutput(www.text);
        }
        else {
            setOutput(input.ToString());
        }
        yield return null;
        //throw new NotImplementedException();
    }

    public override void save(string relativePath) {
        File.WriteAllText(relativePath, getOutput());
    }
}
