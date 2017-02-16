using UnityEngine;

public class LoadableAudio : LoadableResource<AudioClip> {
    private GameObject obj;
    private AudioSource audioSource;
    private enum PlayState {
        STOPPED, PLAYING, PAUSED
    };
    private PlayState state;

    public LoadableAudio(string url) : base(url) {
        obj = new GameObject("Audio source");
        audioSource = obj.gameObject.AddComponent<AudioSource>();
    }

    public void play() {
        if (state == PlayState.STOPPED) {
            audioSource.clip = getResource();
            audioSource.Play();
            state = PlayState.PLAYING;
        }
        else if(state == PlayState.PAUSED) {
            audioSource.UnPause();
            state = PlayState.PLAYING;
        }
    }

    public void stop() {
        if (state == PlayState.PLAYING || state == PlayState.PAUSED) {
            audioSource.Stop();
            state = PlayState.STOPPED;
        }
    }

    public void pause() {
        if (state == PlayState.PLAYING) {
            audioSource.Pause();
            state = PlayState.PAUSED;
        }
    }
}
