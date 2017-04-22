using System;
using UnityEngine;

public abstract class IMenuThing : IDisposable {
    public static int menuElementCount {
        get { return _menuElementCount; }
    }
    private static int _menuElementCount = 0;

    // Fix issues with height.
    private static bool doCache = true;

    private bool isCacheHValid = false;
    private float cacheHWidth, cacheHHeight;

    private TouchRing touchRing;

    public IMenuThing() {
        _menuElementCount++;
    }

    public void setTouchable(bool isTouchable) {
        if(isTouchable) {
            touchRing = new TouchRing();
        }
        else {
            touchRing.Dispose();
            touchRing = null;
        }
    }

    public virtual bool isPixelHeightValid() {
        return isCacheHValid;
    }
    protected abstract float calcPixelHeight(float w);
    public float getPixelHeight(float w) {
        if (!doCache || !isCacheHValid || cacheHWidth != w) {
            isCacheHValid = true;
            cacheHWidth = w;
            cacheHHeight = calcPixelHeight(w);
        }

        return cacheHHeight;
    }

    public void invalidateHeight() {
        isCacheHValid = false;
    }

    public virtual void onClick() {
        if (touchRing != null) {
            touchRing.click();
        }
    }

    public void drawTouchRing(Rect rect) {
        if (touchRing != null) {
            GUIX.beginClip(rect);
            touchRing.draw();
            GUIX.endClip();
        }
    }

    #region IDisposable Support
    private bool disposedValue = false; // To detect redundant calls

    protected virtual void Dispose(bool disposing) {
        if (!disposedValue) {
            if (disposing) {
                // TODO: dispose managed state (managed objects).
            }

            // TODO: free unmanaged resources (unmanaged objects) and override a finalizer below.
            // TODO: set large fields to null.
            onDispose();

            disposedValue = true;
        }
    }

    // TODO: override a finalizer only if Dispose(bool disposing) above has code to free unmanaged resources.
    /*~IItem() {
        // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
        Dispose(false);
    }*/

    // This code added to correctly implement the disposable pattern.
    public void Dispose() {
        // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
        Dispose(true);
        // TODO: uncomment the following line if the finalizer is overridden above.
        //GC.SuppressFinalize(this);
    }
    #endregion

    public virtual void onDispose() {
        _menuElementCount--;

        if (touchRing != null) {
            touchRing.Dispose();
            touchRing = null;
        }
    }
}
