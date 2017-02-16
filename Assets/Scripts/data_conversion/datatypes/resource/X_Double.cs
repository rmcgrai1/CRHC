using System;
using System.Collections;

public class X_Double : IConvertible<double> {
    public override IEnumerator convertCoroutine<INPUT_TYPE>(INPUT_TYPE input) {
        Type type = typeof(INPUT_TYPE);

        if (type == typeof(string)) {
            setOutput(double.Parse(input as string));
        }
        else {
            throw new NotSupportedException();
        }
        yield return null;
    }

    public override void save(string relativePath) {
        throw new NotImplementedException();
    }
}