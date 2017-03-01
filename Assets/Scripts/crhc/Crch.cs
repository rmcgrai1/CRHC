using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public static class Crch {
    public static readonly Color COLOR_BLUE_DARK = new Color32(122, 192, 222, 255);
    public static readonly Color COLOR_BLUE_MEDIUM = new Color32(188, 230, 251, 255);
    public static readonly Color COLOR_BLUE_LIGHT = new Color32(221, 234, 241, 255);
    public static readonly Color COLOR_RED = new Color32(158, 11, 15, 255);
    public static readonly Color COLOR_TRANSPARENT = new Color32(0, 0, 0, 0);
    public static readonly Color COLOR_GRAY_DARK = new Color32(57, 56, 57, 255);

    public static readonly float H_PADDING = .08f;
    public static readonly float V_PADDING = 15;
    public static readonly float FADE_IN_SPEED = 30;

    public static readonly Font FONT_TITLE = Resources.Load<Font>("Fonts/Roboto-Title");
    public static readonly Font FONT_SUBTITLE = Resources.Load<Font>("Fonts/Roboto-Subtitle");
    public static readonly Font FONT_NORMAL = Resources.Load<Font>("Fonts/Roboto-Regular");
    public static readonly Font FONT_SOURCE = Resources.Load<Font>("Fonts/Roboto-Italic");
}
