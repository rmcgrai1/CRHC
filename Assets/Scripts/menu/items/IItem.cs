using System;

public abstract class IItem : IMenuThing {

    public abstract bool draw(float w, float h);
    public virtual void onClick() {}
}