using UnityEngine;

public abstract class IMenu : IMenuThing {
    public abstract void reset();
    public abstract void addRow(IRow row);
    public abstract void draw(float w, float h);
    public abstract void setColor(Color color);

    public abstract bool enter();
    public abstract bool exit(bool isClosing);
}
