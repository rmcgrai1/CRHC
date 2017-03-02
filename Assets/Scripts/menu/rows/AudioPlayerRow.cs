using System;
using UnityEngine;

public class AudioPlayerRow : IRow {
    private readonly float AUDIO_PLAYER_HEIGHT = 45;
    private Reference<AudioClip> audioClip;

    public AudioPlayerRow(string audioURL) {
        audioClip = ServiceLocator.getILoader().load<AudioClip>(audioURL);
    }

    public override bool draw(float w) {
        // Create player.

        return false;
    }

    public override float getPixelHeight(float w) {
        return AUDIO_PLAYER_HEIGHT;
    }

    public override void onDispose() {
        audioClip.removeOwner();
        audioClip = null;
    }
}
