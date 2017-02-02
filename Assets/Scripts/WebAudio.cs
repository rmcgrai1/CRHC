using System;
using System.Collections;
using UnityEngine;

public class WebAudio : WebLoadable<AudioClip> {
    private AudioClip audioClip;

    private GameObject obj;
    private AudioSource audioSource;


    public WebAudio(string url) : base(url) {
        load();
    }

    protected override AudioClip convert(WWW data) {
        return data.GetAudioClip(false, true, AudioType.WAV);
    }

    protected override void onLoadCoroutineSuccess(AudioClip returnedData) {
        obj = new GameObject("Audio source");
        audioSource = obj.gameObject.AddComponent<AudioSource>();
        audioSource.clip = audioClip = returnedData;

        play();
    }
    protected override IEnumerator onUnloadCoroutine() {
        if (audioClip != null)
            AudioClip.DestroyImmediate(audioClip, true);
        yield return null;
    }

    public AudioClip getAudio() {
        return audioClip;
    }

    public void play() {
        audioSource.Play();
    }

    public void stop() {
        audioSource.Stop();
    }

    public override string ToString() {
        return "Audio[" + getUrl() + "]";
    }
}
