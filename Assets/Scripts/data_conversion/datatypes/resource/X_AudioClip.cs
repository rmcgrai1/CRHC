using System;
using System.Collections;
using UnityEngine;

public class X_AudioClip : IConvertible<AudioClip> {
    public override IEnumerator convertCoroutine<INPUT_TYPE>(INPUT_TYPE input) {
        Type type = typeof(INPUT_TYPE);

        if (type == typeof(WWW)) {
            WWW www = input as WWW;
            yield return www;

            AudioType atype;
            string url = www.url;
            if(url.EndsWith(".wav")) {
                atype = AudioType.WAV;
            }
            else if(url.EndsWith(".ogg")) {
                atype = AudioType.OGGVORBIS;
            }
            else if(url.EndsWith(".mp3")) {
                atype = AudioType.MPEG;
            }
            else {
                throw new NotSupportedException();
            }

            setOutput(www.GetAudioClip(false, true, atype));
        }
        else {
            throw new NotSupportedException();
        }
    }

    public override void save(string relativePath) {
        AudioClip resource = getOutput();
        //resource.
    }
}