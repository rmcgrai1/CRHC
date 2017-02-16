public abstract class MenuItem {

    public abstract bool draw(float w);
    public abstract float getHeight(float w);
    public virtual void onClick() {}
}