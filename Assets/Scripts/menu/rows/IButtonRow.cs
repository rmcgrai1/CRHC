using UnityEngine;

public abstract class IButtonRow : Row {
    public IButtonRow() {
        setSupercedeChildClick(true);
        setColor(CrhcConstants.COLOR_BLUE_MEDIUM);
        setPadding(true, true, true);
        setTouchable(true);
    }

    public override bool draw(float w) {
        if (base.draw(w)) {
            onClick();
        }
 
        return false;
    }
}