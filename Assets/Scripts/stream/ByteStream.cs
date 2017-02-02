using System.Collections.Generic;

public interface ByteStream {
    IEnumerator<byte[]> loadBytes(string srcPath);
}