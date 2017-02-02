using System.Collections.Generic;
using UnityEngine;

public class WebStream : ByteStream {
    public IEnumerator<byte[]> loadBytes(string srcPath) {
        WWW www = new WWW(srcPath);
        yield return www.bytes;
    }
}