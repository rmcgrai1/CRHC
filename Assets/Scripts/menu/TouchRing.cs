using general.number.smooth;
using general.rendering;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class TouchRing : IDisposable {
    private Reference<Texture2D> tex;
    private float x, y;
    private ISmoothNumber number;

    public TouchRing() {
        tex = ServiceLocator.getILoader().load<Texture2D>(CachedLoader.SERVER_PATH + "icons/touchRing.png");
        number = new LinearNumber(0, 1, 1.2f);
        number.setFraction(1);
    }

    public void click() {
        Rect rect = GUIX.getClipRect();
        Vector2 pos = ServiceLocator.getITouch().getTouchPosition();

        x = pos.x - rect.x;
        y = pos.y - rect.y;

        number.setFraction(0);
    }

    public void draw() {
        if (!CrhcSettings.showAnimations || number.isDone()) {
            return;
        }

        number.update();

        float f = number.get(), s = CrhcConstants.SIZE_TOUCH_RING.getAs(general.number.NumberType.PIXELS) * f, b = 10000;
        GUIX.beginOpacity(1 - f);
        GUIX.drawTexture(new Rect(x - s / 2, y - s / 2, s, s), tex.getResource());
        GUIX.endOpacity();
        GUIX.beginOpacity(f*(1 - f));
        GUIX.fillRect(new Rect(Vector2.zero, GUIX.getClipRect().size), Color.white);
        GUIX.endOpacity();
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
        tex.removeOwner();
        tex = null;
    }
}
