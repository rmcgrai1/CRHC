using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public static class GUIX {
    private static Texture2D _staticRectTexture;
    private static GUIStyle _staticRectStyle;

    private static Stack<Rect> clipStack = new Stack<Rect>();
    private static Vector2 topLeft = Vector2.zero;

    // Note that this function is only meant to be called from OnGUI() functions.
    public static void Rect(Rect position, Color color) {
        if (_staticRectTexture == null) {
            _staticRectTexture = new Texture2D(1, 1);
        }

        if (_staticRectStyle == null) {
            _staticRectStyle = new GUIStyle();
        }

        _staticRectTexture.SetPixel(0, 0, color);
        _staticRectTexture.Apply();

        _staticRectStyle.normal.background = _staticRectTexture;

        //GUI.Box(position, GUIContent.none, _staticRectStyle);

        GUI.Box(position, GUIContent.none, _staticRectStyle);
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
        //Rect acc = new Rect(topLeft + position.position, position.size);

        return GUI.Button(position, GUIContent.none, GUIStyle.none);
        //return acc.Contains(Input.mousePosition);
    }

    public static void beginClip(Rect position) {
        topLeft += position.position;
        clipStack.Push(position);
        GUI.BeginClip(position);
    }

    public static void beginClip(Rect position, Vector2 scrollPosition, Vector2 zero, bool notsure) {
        // TODO: Fix scrollposition???
        topLeft += position.position;
        clipStack.Push(position);
        GUI.BeginClip(position, scrollPosition, zero, notsure);
    }

    public static void endClip() {
        topLeft -= clipStack.Peek().position;
        clipStack.Pop();
        GUI.EndClip();
    }
}
