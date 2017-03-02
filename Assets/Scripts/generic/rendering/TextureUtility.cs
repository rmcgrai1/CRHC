using System;
using System.Collections.Generic;
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
                GUIX.Texture(useRect, texture);
            }

            return useRect;
        }

        public static Rect drawTexture(Rect drawRect, Texture2D texture, Color color, AspectType aspectType) {
            GUIX.beginColor(color);
            Rect useRect = drawTexture(drawRect, texture, aspectType);
            GUIX.endColor();

            return useRect;
        }

        public static Rect drawTexture(Rect drawRect, Reference<Texture2D> textureReference, AspectType aspectType) {
            Rect useRect = getUseRect(drawRect, textureReference.getResource(), aspectType);

            if (textureReference.isLoaded()) {
                GUIX.Texture(useRect, textureReference.getResource());
            }
            else {
                GUIX.beginOpacity(.5f);
                GUIX.strokeRect(useRect, 1);
                GUIX.fillRect(new Rect(useRect.x, useRect.y, useRect.width * textureReference.getLoadFraction(), useRect.height));
                GUIX.endOpacity();
            }

            return useRect;
        }

        public static Rect drawTexture(Rect drawRect, Reference<Texture2D> textureReference, Color color, AspectType aspectType) {
            GUIX.beginColor(color);
            Rect useRect = drawTexture(drawRect, textureReference, aspectType);
            GUIX.endColor();

            return useRect;
        }
    }
}
