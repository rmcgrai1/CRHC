public abstract class IButtonRow : Row {
    public IButtonRow() {
        setColor(CrhcConstants.COLOR_BLUE_MEDIUM);
        setPadding(true, true, true);
    }

    public override bool draw(float w) {
        if (base.draw(w)) {
            onClick();
        }

        return false;
    }

    public abstract void onClick();
}