using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class MenuButton : MenuItem {
    private WebTexture texture;

    public MenuButton(string imageUrl) {
        texture = new WebTexture(imageUrl);
        texture.load();
    }

    public void draw(float x, float y, float w) {
        float h = getHeight(w);
        Rect rect = new Rect(x, y, w, h);

        GUI.Box(rect, texture.getTexture());
    }

    public float getHeight(float w) {
        Texture2D tex = texture.getTexture();

        float h = 30;
        if (tex != null) {
            float texW, texH;
            texW = tex.width;
            texH = tex.height;

            h = w / texW * texH;
        }

        return h;
    }
}
