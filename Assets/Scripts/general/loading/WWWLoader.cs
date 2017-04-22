using Newtonsoft.Json.Linq;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WWWLoader : ILoader {
    private IEnumerator loadWWW(WWW www) {
        yield return www;
    }

    public override IEnumerator loadCoroutine<T>(Reference<T> reference, string path, LoadType loadType) {
        ServiceLocator.getILog().println(LogType.IO, "Loading " + typeof(T) + " from \"" + path + "\"...");
        WWW www = new WWW(path);

        reference.setLoadOperation(new LoadOperation(www));

        yield return www;

        if (www.error != null && www.error.Length > 0) {
            yield break;
        }
        // If returned size is 0, failed to load!
        if (www.size == 0) {
            yield break;
        }

        Type type = typeof(T);
        if (type == typeof(byte[])) {
            ServiceLocator.getILog().print(LogType.IO, "Getting byte[] from www...");
            reference.setResource(www.bytes as T, www.bytes);
            ServiceLocator.getILog().println(LogType.IO, "OK!");
        }
        else if (type == typeof(string)) {
            ServiceLocator.getILog().print(LogType.IO, "Getting string from www...");
            reference.setResource(www.text as T, www.bytes);
            ServiceLocator.getILog().println(LogType.IO, "OK!");
        }
        else if (type == typeof(JArray)) {
            try {
                JArray jArray = JArray.Parse(www.text);
                ServiceLocator.getILog().print(LogType.IO, "Getting JArray from www...");
                reference.setResource(jArray as T, www.bytes);
                ServiceLocator.getILog().println(LogType.IO, "OK!");
            }
            catch (Exception e) {

            }
        }
        else if (type == typeof(JObject)) {
            try {
                JObject jObject = JObject.Parse(www.text);
                ServiceLocator.getILog().print(LogType.IO, "Getting JObject from www...");
                reference.setResource(jObject as T, www.bytes);
                ServiceLocator.getILog().println(LogType.IO, "OK!");
            }
            catch (Exception e) {

            }
        }
        else if (type == typeof(Texture2D)) {
            ServiceLocator.getILog().print(LogType.IO, "Getting texture from www...");
            reference.setResource(www.texture as T, www.bytes);
            ServiceLocator.getILog().println(LogType.IO, "OK!");
        }
        else if (type == typeof(AudioClip)) {
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

            ServiceLocator.getILog().print(LogType.IO, "Getting audio from www...");
            reference.setResource(www.GetAudioClip(false, false, atype) as T, www.bytes);
            ServiceLocator.getILog().println(LogType.IO, "OK!");
        }
    }
}