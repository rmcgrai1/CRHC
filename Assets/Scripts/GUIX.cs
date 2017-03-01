using generic;
using generic.mobile;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.Rendering;

public static class GUIX {
    private static Stack<Rect> clipStack = new Stack<Rect>();
    private static Vector2 topLeft = Vector2.zero;

    private static Stack<Color> colorStack;

    private static IDictionary<Color, Texture2D> colorTextureDict = new Dictionary<Color, Texture2D>();
    private static IDictionary<Color, GUIStyle> colorStyleDict = new Dictionary<Color, GUIStyle>();

    static GUIX() {
        colorStack = new Stack<Color>();
        colorStack.Push(Color.white);
    }

    // Note that this function is only meant to be called from OnGUI() functions.
    public static void strokeRect(Rect position, Color color, float thickness) {

        thickness /= 2;

        float x = position.x, y = position.y, w = position.width, h = position.height;

        fillRect(new Rect(x - thickness, y - thickness, w + 2 * thickness, 2 * thickness), color);
        fillRect(new Rect(x - thickness, y + h - thickness, w + 2 * thickness, 2 * thickness), color);
        fillRect(new Rect(x - thickness, y - thickness, 2 * thickness, h + 2 * thickness), color);
        fillRect(new Rect(x + w - thickness, y - thickness, 2 * thickness, h + 2 * thickness), color);
    }
    public static void fillRect(Rect position, Color color) {
        if (color == Crch.COLOR_TRANSPARENT) {
            return;
        }

        GUIStyle style;

        if (colorStyleDict.ContainsKey(color)) {
            style = colorStyleDict[color];
        }
        else {
            Texture2D tex = colorTextureDict[color] = new Texture2D(1, 1);
            tex.SetPixel(0, 0, color);
            tex.Apply();

            style = colorStyleDict[color] = new GUIStyle();
            style.normal.background = tex;
        }

        GUI.Box(position, GUIContent.none, style);
    }

    public static void beginColor(Color toColor) {
        /*Color fromColor = colorStack.Peek();

        float nf = 1 - f;

        float fr = fromColor.r, fg = fromColor.g, fb = fromColor.b, fa = fromColor.a;
        float tr = toColor.r, tg = toColor.g, tb = toColor.b, ta = toColor.a;
        float
            r = (float)Math.Sqrt(fr * fr * nf + tr * tr * f),
            g = (float)Math.Sqrt(fg * fg * nf + tg * tg * f),
            b = (float)Math.Sqrt(fb * fb * nf + tb * tb * f),
            a = (float)Math.Sqrt(fa * fa * nf + ta * ta * f);

        colorStack.Push(new Color(r, g, b, a));*/

        colorStack.Push(GUI.color = toColor);
    }

    public static void endColor() {
        if (colorStack.Count > 1) {
            colorStack.Pop();
            GUI.color = colorStack.Peek();
        }
    }

    public static void beginOpacity(float opacity) {
        Color opColor = colorStack.Peek();
        opColor.a *= opacity;

        colorStack.Push(GUI.color = opColor);
    }

    public static void endOpacity() {
        endColor();
    }

    public static void Button(Rect position, GUIContent content) {
        GUI.Button(position, content);
    }

    public static void Texture(Rect position, Texture2D tex) {
        GUI.DrawTexture(position, tex);
    }

    public static void Label(Rect position, GUIContent content, GUIStyle style) {
        GUI.Label(position, content, style);
    }

    public static bool isMouseInsideRect(Rect position) {

        ITouch iTouch = ServiceLocator.getITouch();

        if(iTouch.checkTap()) {
            Rect acc = new Rect(topLeft + position.position, position.size);
            return acc.Contains(iTouch.getTouchPosition());
        }
        else {
            return false;
        }
    }

    public static void beginClip(Rect position) {
        topLeft += position.position;
        clipStack.Push(position);
        GUI.BeginClip(position);
    }

    public static void beginClip(Rect position, Vector2 scrollPosition, Vector2 zero, bool notsure) {
        Rect tweakPosition = new Rect(position.position + scrollPosition, position.size);
        clipStack.Push(tweakPosition);
        topLeft += clipStack.Peek().position;

        GUI.BeginClip(position, scrollPosition, zero, notsure);
    }

    public static void endClip() {
        topLeft -= clipStack.Peek().position;
        clipStack.Pop();
        GUI.EndClip();
    }
}
