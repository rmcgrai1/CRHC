using generic;
using generic.rendering;
using System;
using UnityEngine;

public class ImageItem : IItem {
    private Reference<Texture2D> texture;
    private AspectType aspectType;
    private Color color = Color.white;

    public ImageItem(string imageUrl) {
        texture = ServiceLocator.getILoader().load<Texture2D>(imageUrl);
        aspectType = AspectType.CROP_IN_REGION;
    }

    public override bool draw(float w, float h) {
        Rect rect = TextureUtility.drawTexture(new Rect(0,0, w,h), texture, color, aspectType);

        if (GUIX.isMouseInsideRect(rect)) {
            onClick();
            return true;
        }
        else {
            return false;
        }
    }

    public override float getHeight(float w) {
        Texture2D tex = texture.getResource();

        if (aspectType == AspectType.HEIGHT_DEPENDENT_ON_WIDTH) {
            float h = w;
            if (tex != null) {
                float texW, texH;
                texW = tex.width;
                texH = tex.height;

                h = w / texW * texH;
            }

            return h;
        }
        else {
            return w;
        }
    }

    public override void onDispose() {
        texture.removeOwner();
    }

    public void setColor(Color color) {
        this.color = color;
    }

    public void setAspectType(AspectType aspectType) {
        this.aspectType = aspectType;
    }
}

public enum AspectType {
    HEIGHT_DEPENDENT_ON_WIDTH, PERFECT_SQUARE, FIT_IN_REGION, CROP_IN_REGION
}
