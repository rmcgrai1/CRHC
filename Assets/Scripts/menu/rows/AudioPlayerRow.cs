﻿using generic.mobile;
using generic.number;
using System;
using System.Collections;
using UnityEngine;

public class AudioPlayerRow : IRow {
    private readonly float AUDIO_PLAYER_HEIGHT = 45;
    private Reference<AudioClip> audioClip;
    private AudioSource audioSource;
    private Texture2D waveformTexture;
    private bool hasWaveformTexture = false;
    private float progress = 0;
    private int stepsPerFrame = 10;

    private PlayState playState = PlayState.STOPPED;

    private enum PlayState {
        STOPPED, PLAYING, PAUSED
    }

    public AudioPlayerRow(string audioURL) {
        audioClip = ServiceLocator.getILoader().load<AudioClip>(audioURL);
    }

    private IEnumerator createTextureCoroutine(int iW, int iH) {
        if (waveformTexture == null) {
            waveformTexture = new Texture2D(iW, iH);

            AudioClip clip;
            audioSource = AppRunner.get().AddComponent<AudioSource>();
            audioSource.clip = clip = audioClip.getResource();

            float[] samples = new float[clip.samples * clip.channels];
            clip.GetData(samples, 0);

            float resolution = samples.Length / iW;

            float[] waveForm = new float[iW];

            float maxAmp = 0;

            int steps = 0;

            for (int i = 0; i < waveForm.Length; i++) {
                waveForm[i] = 0;

                for (int ii = 0; ii < resolution; ii++) {
                    waveForm[i] += Mathf.Abs(samples[(int)((i * resolution) + ii)]);
                }

                waveForm[i] /= resolution;

                maxAmp = Math.Max(maxAmp, Math.Abs(waveForm[i]));

                if (steps++ % stepsPerFrame == 0) {
                    progress = .5f * i / waveForm.Length;
                    yield return null;
                }
            }

            Debug.Log(maxAmp);

            // Generate texture.
            for (int x = 0; x < iW; x++) {
                float amp = waveForm[x] / maxAmp;

                for (int y = 0; y < iH; y++) {
                    float relAmp = 2 * (1f * y / iH - .5f);

                    if (Math.Abs(relAmp) <= Math.Abs(amp)) {
                        waveformTexture.SetPixel(x, y, CRHC.COLOR_GRAY_DARK);
                    }
                    else {
                        waveformTexture.SetPixel(x, y, CRHC.COLOR_TRANSPARENT);
                    }
                }

                if (steps++ % stepsPerFrame == 0) {
                    progress = .5f + .5f * x / iW;
                    yield return null;
                }
            }

            waveformTexture.Apply();
            hasWaveformTexture = true;
        }
    }

    public override bool draw(float w) {
        // Create player.

        float padding = CRHC.PADDING_H.getAs(NumberType.PIXELS);
        w -= 2 * padding;
        float h = getPixelHeight(w);

        if (audioClip.isLoaded()) {
            CoroutineManager.startCoroutine(createTextureCoroutine((int)w, (int)h));
        }

        if (hasWaveformTexture) {
            Rect region = new Rect(padding, 0, w, h);
            GUIX.Texture(region, waveformTexture);

            ITouch iTouch = ServiceLocator.getITouch();
            if(GUIX.isTouchInsideRect(region)) {
                if(iTouch.checkTap()) {
                    togglePlayPause();
                }
            }


            if(playState != PlayState.STOPPED) {
                Color color = (playState == PlayState.PLAYING) ? CRHC.COLOR_RED : CRHC.COLOR_BLUE_DARK;
                float frac = audioSource.time / audioSource.clip.length, bx = w * frac, bw = 5;
                GUIX.fillRect(new Rect(padding + bx - bw/2, 0, bw, h), color);
            }
        }
        else {
            GUIX.fillRect(new Rect(padding, 0, w * progress, h), CRHC.COLOR_GRAY_DARK);
        }

        return false;
    }

    public override float getPixelHeight(float w) {
        return AUDIO_PLAYER_HEIGHT;
    }

    public override void onDispose() {
        audioClip.removeOwner();
        audioClip = null;
    }

    private void stop() {
        playState = PlayState.STOPPED;
        audioSource.Stop();
        audioSource.time = 0;
    }

    private void pause() {
        playState = PlayState.PAUSED;
        audioSource.Pause();
    }

    private void play() {
        playState = PlayState.PLAYING;
        audioSource.Play();
    }

    private void togglePlayPause() {
        if (playState == PlayState.PAUSED || playState == PlayState.STOPPED) {
            play();
        }
        else if (playState == PlayState.PLAYING) {
            pause();
        }
    }
}