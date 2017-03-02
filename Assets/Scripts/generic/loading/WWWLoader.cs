using System;
using System.Collections;
using UnityEngine;

public class WWWLoader : ILoader {
    public override IEnumerator loadCoroutine<T>(Reference<T> reference, string path) {
        ServiceLocator.getILog().println(LogType.JUNK, "Loading " + typeof(T) + " from \"" + path + "\"...");
        WWW www = new WWW(path);

        reference.setWWW(www);
        yield return www;

        Type type = typeof(T);
        if(type == typeof(byte[])) {
            ServiceLocator.getILog().println(LogType.JUNK, "Getting byte[] from www...");
            reference.setResource(www.bytes as T, www.bytes);
        }
        if (type == typeof(string)) {
            ServiceLocator.getILog().println(LogType.JUNK, "Getting string from www...");
            reference.setResource(www.text as T, www.bytes);
        }
        else if (type == typeof(Texture2D)) {
            ServiceLocator.getILog().println(LogType.JUNK, "Getting texture from www...");
            reference.setResource(www.texture as T, www.bytes);
        }
        else if(type == typeof(AudioClip)) {
            AudioType atype;
            string url = www.url;
            if (url.EndsWith(".wav")) {
                atype = AudioType.WAV;
            }
            else if (url.EndsWith(".ogg")) {
                atype = AudioType.OGGVORBIS;
            }
            else if (url.EndsWith(".mp3")) {
                atype = AudioType.MPEG;
            }
            else {
                throw new NotSupportedException();
            }

            ServiceLocator.getILog().println(LogType.JUNK, "Getting audio from www...");
            reference.setResource(www.GetAudioClip(false, false, atype) as T, www.bytes);
        }
    }
}