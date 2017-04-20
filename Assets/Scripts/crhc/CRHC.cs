using general.number;
using UnityEngine;

public static class CRHC {
	public static readonly Color
		COLOR_BLUE_DARK = new Color32(122, 192, 222, 255),
		COLOR_BLUE_MEDIUM = new Color32(188, 230, 251, 255),
		COLOR_BLUE_LIGHT = new Color32(221, 234, 241, 255),
		COLOR_RED = new Color32(158, 11, 15, 255),
		COLOR_TRANSPARENT = new Color32(0, 0, 0, 0),
		COLOR_GRAY_DARK = new Color32(57, 56, 57, 255);

	public static readonly Font
		FONT_TITLE = Resources.Load<Font>("Fonts/Roboto-Title"),
		FONT_SUBTITLE = Resources.Load<Font>("Fonts/Roboto-Subtitle"),
		FONT_NORMAL = Resources.Load<Font>("Fonts/Roboto-Regular"),
		FONT_SOURCE = Resources.Load<Font>("Fonts/Roboto-Italic");

	public static readonly DistanceMeasure
		FONT_HEIGHT_TITLE = new DistanceMeasure(),
		FONT_HEIGHT_SUBTITLE = new DistanceMeasure(),
		FONT_HEIGHT_NORMAL = new DistanceMeasure(),
		FONT_HEIGHT_SOURCE = new DistanceMeasure(),

		SIZE_BACK_BUTTON = new DistanceMeasure(),
		SIZE_HOME_BUTTON = new DistanceMeasure(),
		SIZE_VUFORIA_FRAME = new DistanceMeasure(),

		PADDING_H = new DistanceMeasure(.08f, NumberType.SCREEN_WIDTH_FRACTION),
		PADDING_V = new DistanceMeasure(15, NumberType.PIXELS);

	public static readonly SortOrder
		LANDMARK_SORTORDER = SortOrder.NUMBER;
}
