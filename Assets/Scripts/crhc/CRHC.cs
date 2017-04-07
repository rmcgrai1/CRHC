using generic.number;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public static class CRHC {
    public static readonly Color
        COLOR_BLUE_DARK = new Color32(122, 192, 222, 255),
        COLOR_BLUE_MEDIUM = new Color32(188, 230, 251, 255),
        COLOR_BLUE_LIGHT = new Color32(221, 234, 241, 255),
        COLOR_RED = new Color32(158, 11, 15, 255),
        COLOR_TRANSPARENT = new Color32(0, 0, 0, 0),
        COLOR_GRAY_DARK = new Color32(57, 56, 57, 255);

    public static readonly float
		SPEED_FADE_IN = Time.fixedDeltaTime * 20; //20

    public static readonly Font
        FONT_TITLE = Resources.Load<Font>("Fonts/Roboto-Title"),
        FONT_SUBTITLE = Resources.Load<Font>("Fonts/Roboto-Subtitle"),
        FONT_NORMAL = Resources.Load<Font>("Fonts/Roboto-Regular"),
        FONT_SOURCE = Resources.Load<Font>("Fonts/Roboto-Italic");

    public static readonly Number
        FONT_HEIGHT_TITLE = new Number(),
        FONT_HEIGHT_SUBTITLE = new Number(),
        FONT_HEIGHT_NORMAL = new Number(),
        FONT_HEIGHT_SOURCE = new Number(),

        SIZE_BACK_BUTTON = new Number(),
        SIZE_HOME_BUTTON = new Number(),
        SIZE_VUFORIA_FRAME = new Number(),

        PADDING_H = new Number(.08f, NumberType.SCREEN_WIDTH_FRACTION),
        PADDING_V = new Number(15, NumberType.PIXELS);

    public static readonly SortOrder
        LANDMARK_SORTORDER = SortOrder.NUMBER;
}
