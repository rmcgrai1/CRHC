using general.mobile;
using general.number;
using System;
using System.Collections;
using UnityEngine;

public class AudioPlayerRow : IRow {
    private readonly DistanceMeasure AUDIO_PLAYER_HEIGHT = new DistanceMeasure(.5f, NumberType.INCHES);
    private Reference<AudioClip> audioClip;
    private AudioSource audioSource;
    private Texture2D waveformTexture;
    private bool hasWaveformTexture = false;
    private float progress = 0;
    private int stepsPerFrame = 60;
    private bool wasHeld = false, isScrubbing = false;

    private PlayState playState = PlayState.STOPPED;

    private enum PlayState {
        STOPPED, PLAYING, PAUSED
    }

    public AudioPlayerRow(string audioURL) {
        ILoader iLoader = ServiceLocator.getILoader();
        audioClip = iLoader.getReference<AudioClip>(audioURL);
        //audioClip.onLoad += AudioClip_onLoad;
        iLoader.load(audioClip);

        setTouchable(true);
    }

    private void AudioClip_onLoad() {
        int iW, iH;
        iW = (int)(Screen.width - 2 * CrhcConstants.PADDING_H.getAs(NumberType.PIXELS));
        iH = (int)getPixelHeight(0);

        CoroutineManager.startCoroutine(createTextureCoroutine(iW, iH));
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

            /*for (int i = 0; i < waveForm.Length; i++) {
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
           
            // Generate texture.
            for (int x = 0; x < iW; x++) {
                float amp = waveForm[x] / maxAmp;

                for (int y = 0; y < iH; y++) {
                    float relAmp = 2 * (1f * y / iH - .5f);

                    if (Math.Abs(relAmp) <= Math.Abs(amp)) {
                        waveformTexture.SetPixel(x, y, CrhcConstants.COLOR_GRAY_DARK);
                    }
                    else {
                        waveformTexture.SetPixel(x, y, CrhcConstants.COLOR_TRANSPARENT);
                    }
                }

                if (steps++ % stepsPerFrame == 0) {
                    progress = .5f + .5f * x / iW;
                    yield return null;
                }
            }

            waveformTexture.Apply();
            hasWaveformTexture = true;*/

            int dither = 80;
            float desolution = resolution / dither;

            for (int i = 0; i < waveForm.Length; i++) {
                waveForm[i] = 0;

                /*for (int ii = 0; ii < resolution; ii++) {
                    waveForm[i] += Mathf.Abs(samples[(int)((i * resolution) + ii)]);
                }

                waveForm[i] /= resolution;*/

                for (int ii = 0; ii < resolution; ii += dither) {
                    waveForm[i] += Mathf.Abs(samples[(int)((i * resolution) + ii)]);
                }

                waveForm[i] /= desolution;

                maxAmp = Math.Max(maxAmp, Math.Abs(waveForm[i]));

                /*if (steps++ % stepsPerFrame == 0) {
                    progress = .5f * i / waveForm.Length;
                    yield return null;
                }*/
            }

            RenderTexture rotateTexture = new RenderTexture(iW, iH, 0);
            RenderTexture.active = rotateTexture;

            AppRunner.getMaterial().SetPass(0);

            GL.Clear(true, true, CrhcConstants.COLOR_TRANSPARENT);

            GUIX.undoAllActions();
            GL.PushMatrix();
            GL.LoadOrtho();
            GL.LoadPixelMatrix(0, iW, iH, 0);

            float y = iH / 2f, d = 0;

            GL.Begin(GL.LINES);
            GL.Color(CrhcConstants.COLOR_GRAY_DARK);
            for (int x = 0; x < iW; x++) {
                float amp = waveForm[x] / maxAmp;
                GL.Vertex3(x, y - amp * y, d);
                GL.Vertex3(x, y + amp * y, d);
            }
            GL.End();

            GL.PopMatrix();

            waveformTexture.ReadPixels(new Rect(0, 0, iW, iH), 0, 0);
            waveformTexture.Apply();
            GUIX.redoAllActions();

            RenderTexture.active = null;

            rotateTexture.Release();
            GameObject.Destroy(rotateTexture);

            hasWaveformTexture = true;
        }

        yield return null;
    }

    public override bool draw(float w) {
        // Create player.

        float padding = CrhcConstants.PADDING_H.getAs(NumberType.PIXELS);

        w -= 2 * padding;
        float h = getPixelHeight(w);

        Rect region = new Rect(0, 0, w, h), paddingRegion = new Rect(padding, 0, w, h);
        GUIX.beginClip(paddingRegion);

        if (hasWaveformTexture) {
            GUIX.drawTexture(region, waveformTexture);

            ITouch iTouch = ServiceLocator.getITouch();
            if (GUIX.isTouchInsideRect(region)) {
                if (iTouch.checkTap()) {
                    onClick();
                    togglePlayPause();
                }
                else if (!wasHeld && iTouch.isHeld()) {
                    if (!isScrubbing) {
                        onClick();
                        isScrubbing = true;
                        pause();
                    }
                }
            }
            wasHeld = iTouch.isHeld();

            if (iTouch.isDown()) {
                if (isScrubbing) {
                    float len = audioClip.getResource().length;

                    audioSource.time = Math.Max(0, Math.Min(len * (iTouch.getTouchPosition().x - padding) / w, len));
                    iTouch.clearDragVector();
                }
            }
            else {
                if (isScrubbing) {
                    isScrubbing = false;
                    play();
                }
            }

            if (!audioSource.isPlaying && playState == PlayState.PLAYING) {
                stop();
            }

            if (playState != PlayState.STOPPED) {
                Color color = (playState == PlayState.PLAYING) ? CrhcConstants.COLOR_RED : CrhcConstants.COLOR_BLUE_DARK;
                float frac = audioSource.time / audioSource.clip.length, bx = w * frac, bw = 5;
                GUIX.fillRect(new Rect(bx - bw / 2, 0, bw, h), color);
            }

            drawTouchRing(region);
        }
        else {
            if (audioClip.isLoaded() && waveformTexture == null) {
                AudioClip_onLoad();
            }

            GUIX.strokeRect(region, CrhcConstants.COLOR_GRAY_DARK, 1);
            GUIX.fillRect(new Rect(0, 0, w * progress, h), CrhcConstants.COLOR_GRAY_DARK);
        }

        GUIX.endClip();

        return false;
    }

    protected override float calcPixelHeight(float w) {
        return AUDIO_PLAYER_HEIGHT.getAs(NumberType.PIXELS);
    }

    public override void onDispose() {
        base.onDispose();

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
        if (playState == PlayState.PAUSED || playState == PlayState.STOPPED) { play(); }
        else if (playState == PlayState.PLAYING) { pause(); }
    }

    public override bool enter() {
        return true;
    }

    public override bool exit(bool isClosing) {
        stop();
        return true;
    }
}
