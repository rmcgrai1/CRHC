using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using UnityEngine;

namespace generic.rendering {
    public static class TextureUtility {
        public static Rect getUseRect(Rect drawRect, Texture2D texture, AspectType aspectType) {
            float x = drawRect.x, y = drawRect.y, w = drawRect.width, h = drawRect.height;
            float texAspect, regionAspect;

            if (texture != null) {
                texAspect = 1f * texture.width / texture.height;
            }
            else {
                texAspect = 1;
            }

            if (h == 0) {
                regionAspect = 1;
            }
            else {
                regionAspect = w / h;
            }

            if (aspectType == AspectType.FIT_IN_REGION) {
                if (texAspect < regionAspect) {
                    x += w / 2;
                    w = h * texAspect;
                    x -= w / 2;
                }
                else {
                    y += h / 2;
                    h = w / texAspect;
                    y -= h / 2;
                }
            }
            else if (aspectType == AspectType.CROP_IN_REGION) {
                if (texAspect > regionAspect) {
                    x += w / 2;
                    w = h * texAspect;
                    x -= w / 2;
                }
                else {
                    y += h / 2;
                    h = w / texAspect;
                    y -= h / 2;
                }
            }
            else if (aspectType == AspectType.HEIGHT_DEPENDENT_ON_WIDTH) {
                h = w / texAspect;
            }

            return new Rect(x, y, w, h);
        }

        public static Rect drawTexture(Rect drawRect, Texture2D texture, AspectType aspectType) {
            Rect useRect = getUseRect(drawRect, texture, aspectType);

            if (texture != null) {
                GUIX.drawTexture(useRect, texture);
            }

            return useRect;
        }

        private static IDictionary<Texture2D, Texture2D> targetTextures = new Dictionary<Texture2D, Texture2D>();

        private static int INDEX_COUNT = 16;
        private static int angleToIndex(float angle) {
            return (int)Math.Round(angle / 90 * (INDEX_COUNT - 1));
        }

        private static float indexToAngle(int index) {
            return (1f * index) / (INDEX_COUNT - 1) * 90;
        }

        public static Rect drawTexture(Rect drawRect, Texture2D texture, AspectType aspectType, float angle) {
            angle %= 360;

            if (angle == 0) {
                return drawTexture(drawRect, texture, aspectType);
            }
            else {
                int w = texture.width,
                    h = texture.height,
                    s = (int)(Math.Sqrt(w * w + h * h)),
                    sf = Math.Max(w, h);

                Texture2D targetTexture;
                Rect useRect = getUseRect(drawRect, texture, aspectType);

                if (targetTextures.ContainsKey(texture)) {
                    targetTexture = targetTextures[texture];

                    float pad = (s - sf) / 2;
                    float xO = pad, yO = pad, f = (1f * sf) / s, xF = f / INDEX_COUNT, yF = f;
                    if (angle > 270) {
                        yF *= -1;
                        angle = 360 - angle;
                    }
                    else if (angle > 180) {
                        xF *= -1;
                        yF *= -1;
                        angle -= 180;
                    }
                    else if (angle > 90) {
                        xF *= -1;
                        angle = 180 - angle;
                    }

                    if (xF < 0) {
                        xO += sf;
                    }
                    if (yF < 0) {
                        yO += sf;
                    }

                    xO += angleToIndex(angle) * s;

                    Rect coords;
                    coords = new Rect((1f * xO) / (s * INDEX_COUNT), (1f * yO) / s, xF, yF);

                    GUIX.drawTexture(useRect, targetTexture, coords);
                }
                else {
                    RenderTexture rotateTexture = new RenderTexture(s * INDEX_COUNT, s, 0);
                    targetTextures[texture] = targetTexture = new Texture2D(s * INDEX_COUNT, s);

                    RenderTexture.active = rotateTexture;

                    GL.Clear(true, true, CRHC.COLOR_TRANSPARENT);

                    GUIX.undoAllActions();

                    GL.PushMatrix();
                    GL.LoadOrtho();
                    GL.LoadPixelMatrix(0, s * INDEX_COUNT, s, 0);

                    for (int i = 0; i < INDEX_COUNT; i++) {
                        Rect rect = new Rect(new Vector2(-sf / 2, -sf / 2), new Vector2(sf, sf));

                        float ang = indexToAngle(i);

                        GL.PushMatrix();
                        GL.MultMatrix(Matrix4x4.TRS(new Vector3(s * i + s / 2, s / 2, 0), Quaternion.Euler(0, 0, ang), Vector3.one));
                        Graphics.DrawTexture(rect, texture);
                        GL.PopMatrix();
                    }

                    GL.PopMatrix();

                    targetTexture.ReadPixels(new Rect(0, 0, s * INDEX_COUNT, s), 0, 0);
                    targetTexture.Apply();
                    GUIX.redoAllActions();

                    RenderTexture.active = null;

                    rotateTexture.Release();
                    GameObject.Destroy(rotateTexture);

                    File.WriteAllBytes("temp.png", targetTexture.EncodeToPNG());
                }

                return useRect;
            }
        }

        public static Rect drawTexture(Rect drawRect, Texture2D texture, Color color, AspectType aspectType) {
            GUIX.beginColor(color);
            Rect useRect = drawTexture(drawRect, texture, aspectType);
            GUIX.endColor();

            return useRect;
        }

        public static Rect drawTexture(Rect drawRect, Reference<Texture2D> textureReference, AspectType aspectType) {
            return drawTexture(drawRect, textureReference, aspectType, 0);
        }

        public static Rect drawTexture(Rect drawRect, Reference<Texture2D> textureReference, AspectType aspectType, float angle) {
            if (textureReference.isLoaded()) {
                return drawTexture(drawRect, textureReference.getResource(), aspectType, angle);
            }
            else {
                Rect useRect = getUseRect(drawRect, textureReference.getResource(), aspectType);

                GUIX.beginOpacity(.5f);
                GUIX.strokeRect(useRect, 1);
                GUIX.fillRect(new Rect(useRect.x, useRect.y, useRect.width * textureReference.getLoadFraction(), useRect.height));
                GUIX.endOpacity();

                return useRect;
            }
        }

        public static Rect drawTexture(Rect drawRect, Reference<Texture2D> textureReference, Color color, AspectType aspectType) {
            return drawTexture(drawRect, textureReference, color, aspectType, 0);
        }

        public static Rect drawTexture(Rect drawRect, Reference<Texture2D> textureReference, Color color, AspectType aspectType, float angle) {
            GUIX.beginColor(color);
            Rect useRect = drawTexture(drawRect, textureReference, aspectType, angle);
            GUIX.endColor();

            return useRect;
        }
    }
}
