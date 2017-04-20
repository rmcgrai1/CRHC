using general.number.smooth;
using UnityEngine;

public class FadeInMenu : IMenu {
	private IMenu menu;
	private ISmoothNumber fadeAmount = new PolynomialNumber(0, 1, .5f, 3);
	private Color color;
	private float fadeDis;
	private bool hasEntered = false, isClosing = false;

	public FadeInMenu(IMenu menu) {
		this.menu = menu;
	}

	public override bool enter() {
		if(fadeDis == 0) {
			return menu.enter();
		}

		fadeAmount.setDirection(true);
		fadeAmount.update();

		bool output = fadeAmount.isDone();
		hasEntered |= output;


		return menu.enter() && output;
	}

	public override bool exit(bool isClosing) {
		this.isClosing = isClosing;

		if (fadeDis == 0) {
			return menu.exit(isClosing);
		}

		fadeAmount.setDirection(false);
		fadeAmount.update();

		return menu.enter() && fadeAmount.isDone();
	}

	public override void addRow(IRow row) {
		menu.addRow(row);
	}

	public override void draw(float w, float h) {
		// TODO: Update outside of draw.
		// TODO: Incorporate deltaTime.
		// TODO: Make smooth deltaTime variables.

		//float fadeDis = menu.getHeight(w);
		fadeDis = w;

		float fadeAmount = this.fadeAmount.get();

		GUIX.fillRect(new Rect(0, 0, w, h), color);
		GUIX.beginOpacity(fadeAmount);


		/*float fadeY, menuH;
		fadeY = -fadeDis * (1 - fadeInAmount);
		menuH = h - fadeY;
		Rect menuRect = new Rect(0, fadeY, w, menuH);*/
		float fadeX, menuH;
		menuH = h;

		Rect menuRect;

		if(!hasEntered || isClosing) {
			fadeX = -fadeDis * (1 - fadeAmount);
			menuRect = new Rect(fadeX, 0, w, menuH);
		}
		else {
			fadeX = fadeDis * (1 - fadeAmount);
			menuRect = new Rect(fadeX, 0, w, menuH);
		}

		GUIX.beginClip(menuRect);
		menu.draw(w, menuH);
		GUIX.endClip();
		GUIX.endOpacity();
	}

	protected override float calcPixelHeight(float w) {
		return menu.getPixelHeight(w);
	}

	public override void reset() {
		menu.reset();
	}

	public override void setColor(Color color) {
		this.color = color;
	}

	public override void onDispose() {
		menu.Dispose();
		menu = null;
	}
}