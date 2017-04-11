using generic;
using generic.mobile;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;
using UnityEngine.Rendering;

public static class GUIX {
    private static IList<GUIAction> actionList = new List<GUIAction>();
    private static Stack<Rect> clipStack;
    private static Stack<Rect> localClipStack;
    private static Stack<Color> colorStack;

    private static Texture2D whiteTexture;
    private static GUIStyle whiteTextureStyle, standardTextureStyle;

    private static Color color;

    private abstract class GUIAction {
        public abstract void undo();
        public abstract void redo();
    }

    private class GUIClipAction : GUIAction {
        private Rect clipRect;
        private Vector2 scrollPosition;

        public GUIClipAction(Rect clipRect, Vector2 scrollPosition) {
            this.clipRect = clipRect;
            this.scrollPosition = scrollPosition;
        }

        public override void undo() {
            GUI.EndClip();
        }
        public override void redo() {
            GUI.BeginClip(clipRect, scrollPosition, Vector2.zero, false);
        }
    }

    private class GUIRotateAction : GUIAction {
        private Vector2 pivot;
        private float angle;

        public GUIRotateAction(Vector2 pivot, float angle) {
            this.pivot = pivot;
            this.angle = angle;
        }

        public override void undo() {
            GUIUtility.RotateAroundPivot(-angle, pivot);
        }
        public override void redo() {
            GUIUtility.RotateAroundPivot(angle, pivot);
        }
    }

    public static void undoAllActions() {
        for (int i = actionList.Count - 1; i >= 0; i--) {
            actionList[i].undo();
        }
    }

    public static void redoAllActions() {
        for (int i = 0; i < actionList.Count; i++) {
            actionList[i].redo();
        }
    }

    static GUIX() {
        clipStack = new Stack<Rect>();
        localClipStack = new Stack<Rect>();

        whiteTexture = new Texture2D(1, 1);
        whiteTexture.SetPixel(0, 0, Color.white);
        whiteTexture.Apply();

        whiteTextureStyle = new GUIStyle();
        whiteTextureStyle.normal.background = whiteTexture;

        standardTextureStyle = new GUIStyle();

        colorStack = new Stack<Color>();
        colorStack.Push(Color.white);
    }

    // Note that this function is only meant to be called from OnGUI() functions.
    public static void strokeRect(Rect position, float thickness) {
        thickness /= 2;

        float x = position.x, y = position.y, w = position.width, h = position.height;

        fillRect(new Rect(x - thickness, y - thickness, w + 2 * thickness, 2 * thickness));
        fillRect(new Rect(x - thickness, y + h - thickness, w + 2 * thickness, 2 * thickness));
        fillRect(new Rect(x - thickness, y - thickness, 2 * thickness, h + 2 * thickness));
        fillRect(new Rect(x + w - thickness, y - thickness, 2 * thickness, h + 2 * thickness));
    }
    public static void strokeRect(Rect position, Color color, float thickness) {
        if (color == CRHC.COLOR_TRANSPARENT) {
            return;
        }

        beginColor(color);
        strokeRect(position, thickness);
        endColor();
    }

    public static void _fillRect(Rect region) {
        GUI.Box(region, GUIContent.none, whiteTextureStyle);
    }

    public static void _fillRect(Rect position, Color color) {
        if (color == CRHC.COLOR_TRANSPARENT) {
            return;
        }

        beginColor(color);
        _fillRect(position);
        endColor();
    }

    public static void fillRect(Rect region) {
        _fillRect(region);
        return;

        float sW = AppRunner.getScreenWidth(), sH = AppRunner.getScreenHeight();
        float cX = 0, cY = 0, cW = sW, cH = sH, d = GUI.depth;

        if (clipStack.Count > 0) {
            Rect clipRect = clipStack.Peek();
            cX = clipRect.x;
            cY = clipRect.y;
            cW = clipRect.width;
            cH = clipRect.height;
        }


        float
            x = cX + region.x,
            y = cY + region.y,
            w = region.width,
            h = region.height;

        x /= sW;
        y = 1 - y / sH;
        w /= sW;
        h /= -sH;

        GL.LoadOrtho();
        GL.Begin(GL.QUADS);

        float f = 8;

        GL.Color(new Color(color.r * f, color.g * f, color.b * f));
        GL.Vertex3(x, y, d);
        GL.Vertex3(x + w, y, d);
        GL.Vertex3(x + w, y + h, d);
        GL.Vertex3(x, y + h, d);
        GL.End();
    }
    public static void fillRect(Rect position, Color color) {
        if (color == CRHC.COLOR_TRANSPARENT) {
            return;
        }

        beginColor(color);
        _fillRect(position);
        endColor();
    }

    private static void setColor(Color color) {
        GUIX.color = GUI.backgroundColor = color;
    }

    public static void beginColor(Color toColor) {
        Color fromColor = colorStack.Peek();

        /*float nf = 1 - f;

        float fr = fromColor.r, fg = fromColor.g, fb = fromColor.b, fa = fromColor.a;
        float tr = toColor.r, tg = toColor.g, tb = toColor.b, ta = toColor.a;
        float
            r = (float)Math.Sqrt(fr * fr * nf + tr * tr * f),
            g = (float)Math.Sqrt(fg * fg * nf + tg * tg * f),
            b = (float)Math.Sqrt(fb * fb * nf + tb * tb * f),
            a = (float)Math.Sqrt(fa * fa * nf + ta * ta * f);

        colorStack.Push(new Color(r, g, b, a));*/

        /*float f, nf;
        f = .5f;
        nf = 1 - f;

        float fr = fromColor.r, fg = fromColor.g, fb = fromColor.b, fa = fromColor.a;
        float tr = toColor.r, tg = toColor.g, tb = toColor.b, ta = toColor.a;
        float r, g, b, a;
            r = (float)Math.Sqrt(fr * fr * nf + tr * tr * f),
            g = (float)Math.Sqrt(fg * fg * nf + tg * tg * f),
            b = (float)Math.Sqrt(fb * fb * nf + tb * tb * f),
            a = (float)Math.Sqrt(fa * fa * nf + ta * ta * f);
        r = fr * nf + tr * f;
        g = fg * nf + tg * f;
        b = fb * nf + tb * f;
        a = fa * nf + ta * f;

        colorStack.Push(new Color(r, g, b, a));*/

        toColor.a *= fromColor.a;

        setColor(toColor);
        colorStack.Push(toColor);
    }

    public static void endColor() {
        if (colorStack.Count > 1) {
            colorStack.Pop();
            setColor(colorStack.Peek());
        }
    }

    public static void beginOpacity(float opacity) {
        Color opColor = colorStack.Peek();
        opColor.a *= opacity;

        setColor(opColor);
        colorStack.Push(opColor);
    }

    public static void endOpacity() {
        endColor();
    }

    public static void drawTexture(Rect region, Texture2D tex) {
        standardTextureStyle.normal.background = tex;
        GUI.Box(region, GUIContent.none, standardTextureStyle);
    }

    public static void drawTexture(Rect region, Texture2D tex, Rect texCoord) {
        float
            tW = tex.width, tH = tex.height,
            rW = region.width, rH = region.height,
            tCW = texCoord.width, tCH = texCoord.height,
            bRW = rW / tCW, bRH = rH / tCH,
            xS = bRW / rW, yS = bRH / rH;
        Rect bigRegion = new Rect(-texCoord.x * bRW, -texCoord.y * bRH, bRW, bRH);

        beginClip(region);
        drawTexture(bigRegion, tex);
        endClip();
    }

    public static void drawTexture(Vector2 position, Texture2D tex) {
        drawTexture(new Rect(position, new Vector2(tex.width, tex.height)), tex);
    }

    public static void drawLabel(Rect position, GUIContent content, GUIStyle style) {
        GUI.Label(position, content, style);
    }


    public static bool isTouchInsideRect(Rect position) {

        ITouch iTouch = ServiceLocator.getITouch();

        Rect acc = new Rect(getClipRect().position + position.position, position.size);
        return acc.Contains(iTouch.getTouchPosition());
    }

    public static bool didTapInsideRect(Rect position) {

        ITouch iTouch = ServiceLocator.getITouch();

        if (iTouch.checkTap()) {
            return isTouchInsideRect(position);
        }
        else {
            return false;
        }
    }

    private static Rect fixRect(Rect inRect) {
        float x, y, width, height;
        x = inRect.x;
        y = inRect.y;
        width = inRect.width;
        height = inRect.height;

        if (width < 0) {
            x += width;
            width = -width;
        }
        if (height < 0) {
            y += height;
            height = -height;
        }

        return new Rect(x, y, width, height);
    }

    public static void beginClip(Rect position) {
        beginClip(position, Vector2.zero);
    }

    public static void beginClip(Rect newClipRect, Vector2 scrollPosition) {
        GUIAction action = new GUIClipAction(newClipRect, scrollPosition);
        action.redo();
        actionList.Add(action);

        localClipStack.Push(newClipRect);

        newClipRect = fixRect(newClipRect);

        Rect currentClipRect = getClipRect();
        if (currentClipRect == null) {
            currentClipRect = new Rect(0, 0, Screen.width, Screen.height);
        }

        newClipRect.position += currentClipRect.position;
        newClipRect.position += scrollPosition;

        float cW = currentClipRect.width, cH = currentClipRect.height,
            nX = newClipRect.x, nY = newClipRect.y,
            nW = newClipRect.width, nH = newClipRect.height,
            dX = (nX + nW) - cW, dY = (nY + nH) - cH;

        if (dX > 0) {
            nW -= dX;
        }
        if (dY > 0) {
            nH -= dY;
        }

        clipStack.Push(newClipRect);
    }

    public static void endClip() {
        int lastI = actionList.Count - 1;

        GUIAction action = actionList[lastI];
        action.undo();
        actionList.RemoveAt(lastI);

        if (clipStack.Count > 0) {
            clipStack.Pop();
            localClipStack.Pop();
        }
    }

    public static void beginRotate(Vector2 pivot, float angle) {
        GUIAction action = new GUIRotateAction(pivot, angle);
        action.redo();
        actionList.Add(action);
    }

    public static void endRotate() {
        int lastI = actionList.Count - 1;

        GUIAction action = actionList[lastI];
        action.undo();
        actionList.RemoveAt(lastI);
    }

    public static Rect getClipRect() {
        return (clipStack.Count > 0) ? clipStack.Peek() : default(Rect);
    }

    public static Rect getLocalClipRect() {
        return (localClipStack.Count > 0) ? localClipStack.Peek() : default(Rect);
    }
}
