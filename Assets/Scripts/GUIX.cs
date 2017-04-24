using general.mobile;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public static class GUIX {
    private static IList<GUIAction> actionList = new List<GUIAction>();
    private static Stack<Rect> clipStack;
    private static Stack<Rect> localClipStack;
    private static Stack<Color> colorStack;

    private static Texture2D whiteTexture;
    private static GUIStyle whiteTextureStyle, standardTextureStyle;

    private static Color glColor;

    // TODO: Outline drawn after frame gone.
    // TODO: White box in camera view????

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
        if (color == CrhcConstants.COLOR_TRANSPARENT) {
            return;
        }

        beginColor(color);
        strokeRect(position, thickness);
        endColor();
    }

    // TODO: Fix so it actually clears the screen (i.e. transparent actually does something).
    public static void clear() { clear(Color.black); }
    public static void clear(Color color) {
        float b = 10000;
        fillRect(new Rect(-b/2, -b/2, b, b), color);
    }

    /*public static void fillRect(Rect region) {
        float sW = AppRunner.getScreenWidth(), sH = AppRunner.getScreenHeight();
        float cX = 0, cY = 0, cW = sW, cH = sH, d = 0;

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

        AppRunner.getMaterial().SetPass(0);

        GL.LoadOrtho();
        GL.Begin(GL.QUADS);

        GL.Color(glColor);
        GL.Vertex3(x, y, d);
        GL.Vertex3(x + w, y, d);
        GL.Vertex3(x + w, y + h, d);
        GL.Vertex3(x, y + h, d);
        GL.End();
    }

    public static void fillRect(Rect position, Color color) {
        if (color == null || color == CrhcConstants.COLOR_TRANSPARENT) {
            return;
        }

        beginColor(color);
        fillRect(position);
        endColor();
    }

    private static Rect standardTexCoord = new Rect(0, 0, 1, 1);
    public static void drawTexture(Rect region, Texture2D tex) {
        drawTexture(region, tex, standardTexCoord);
    }

    public static void drawTexture(Rect region, Texture2D tex, Rect texCoord) {
        float sW = AppRunner.getScreenWidth(), sH = AppRunner.getScreenHeight();
        float cX = 0, cY = 0, cW = sW, cH = sH, d = 0;

        float u = texCoord.x, v = texCoord.y, uw = texCoord.width, vh = texCoord.height;

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

        Material mat = AppRunner.getMaterial();
        mat.mainTexture = tex;
        mat.SetPass(0);

        GL.LoadOrtho();
        GL.Begin(GL.QUADS);

        GL.Color(glColor);
        GL.TexCoord2(u, v + vh);
        GL.Vertex3(x, y, d);
        GL.TexCoord2(u + uw, v + vh);
        GL.Vertex3(x + w, y, d);
        GL.TexCoord2(u + uw, v);
        GL.Vertex3(x + w, y + h, d);
        GL.TexCoord2(u, v);
        GL.Vertex3(x, y + h, d);
        GL.End();
    }

    public static void drawTexture(Vector2 position, Texture2D tex) {
        drawTexture(new Rect(position, new Vector2(tex.width, tex.height)), tex);
    }*/

    private static void setColor(Color color) {
        GUIX.glColor = GUI.backgroundColor = color;
    }

    public static void beginColor(Color toColor) {
        Color fromColor;

        if (colorStack.Count == 0) {
            fromColor = Color.white;
        }
        else {
            fromColor = colorStack.Peek();
        }

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

        Color newColor = new Color(toColor.r, toColor.g, toColor.b, toColor.a * fromColor.a);
        setColor(newColor);
        colorStack.Push(newColor);
    }

    public static void endColor() {
        if (colorStack.Count > 0) {
            colorStack.Pop();
        }

        if (colorStack.Count > 0) {
            setColor(colorStack.Peek());
        }
        else {
            setColor(Color.white);
        }
    }

    public static void beginOpacity(float opacity) {
        Color opColor;

        if (colorStack.Count == 0) {
            opColor = Color.white;
        }
        else {
            opColor = colorStack.Peek();
        }

        Color newColor = new Color(opColor.r, opColor.g, opColor.b, opColor.a * opacity);
        setColor(newColor);
        colorStack.Push(newColor);
    }

    public static void endOpacity() {
        endColor();
    }


    public static void fillRect(Rect region) {
        GUI.Box(region, GUIContent.none, whiteTextureStyle);
    }

    public static void fillRect(Rect position, Color color) {
        if (color == null || color == CrhcConstants.COLOR_TRANSPARENT) {
            return;
        }

        beginColor(color);
        fillRect(position);
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

        Rect currentClipRect = getClipRect();

        newClipRect = fixRect(newClipRect);
        newClipRect.position += scrollPosition;

        float cW = currentClipRect.width, cH = currentClipRect.height,
            nX = newClipRect.x, nY = newClipRect.y,
            nW = newClipRect.width, nH = newClipRect.height,
            dX = (nX + nW) - cW, dY = (nY + nH) - cH;

        newClipRect.position += currentClipRect.position;

        if (dX > 0) {
            nW -= dX;
        }
        if (dY > 0) {
            nH -= dY;
        }

        newClipRect.width = nW;
        newClipRect.height = nH;

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
        if (clipStack.Count > 0) {
            return clipStack.Peek();
        }
        else {
            return new Rect(0, 0, AppRunner.getScreenWidth(), AppRunner.getScreenHeight());
        }
    }

    public static Rect getLocalClipRect() {
        return (localClipStack.Count > 0) ? localClipStack.Peek() : default(Rect);
    }

    public static int getActionListSize() {
        return actionList.Count;
    }

    public static int getClipStackSize() {
        return clipStack.Count;
    }

    public static int getLocalClipStackSize() {
        return localClipStack.Count;
    }

    public static int getColorStackSize() {
        return colorStack.Count;
    }
}
