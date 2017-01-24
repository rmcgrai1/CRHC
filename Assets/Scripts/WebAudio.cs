using System;
using UnityEngine;

public class WebAudio : WebResource<AudioClip> {
    private AudioClip audio;

    public WebAudio(string url) : base(url) {
        load();
    }

    /*protected override AudioClip convert(byte[] byteData) {
        // TODO: Verify this works??
        // TODO: Get # of channels/frequency??

        //http://stackoverflow.com/questions/16078254/create-audioclip-from-byte
        float[] data = new float[byteData.Length / 4];
        for (int i = 0; i < data.Length; i++) {
            if (BitConverter.IsLittleEndian)
                Array.Reverse(byteData, i * 4, 4);
            data[i] = BitConverter.ToSingle(byteData, i * 4);
        }

        AudioClip audio = AudioClip.Create(getUrl(), data.Length, 1, 44100, false, false);
        audio.SetData(data, 0);

        return audio;
    }*/

    protected override AudioClip convert(WWW data) {
        return data.audioClip;
    }

    protected override void onLoad(AudioClip returnedData) {
        audio = returnedData;
    }
    protected override void onUnload() {
        if (audio != null)
            AudioClip.DestroyImmediate(audio, true);
    }

    public AudioClip getAudio() {
        return audio;
    }
}
