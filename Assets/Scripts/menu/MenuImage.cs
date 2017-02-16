using System;
using UnityEngine;

public class MenuImage : MenuItem, IDisposable {
    private LoadableTexture texture;

    public MenuImage(string imageUrl) {
        texture = new LoadableTexture(imageUrl);
        texture.load();
    }

    public override bool draw(float w) {
        float h = getHeight(w);
        Rect rect = new Rect(0, 0, w, h);

        Texture2D tex = texture.getResource();
        if (tex != null) {
            GUIX.Texture(rect, tex);
            if (GUIX.isMouseInsideRect(rect)) {
                onClick();
                return true;
            }
            else {
                return false;
            }
        }

        return false;
    }

    public override float getHeight(float w) {
        Texture2D tex = texture.getResource();

        float h = 30;
        if (tex != null) {
            float texW, texH;
            texW = tex.width;
            texH = tex.height;

            h = w / texW * texH;
        }

        return h;
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

            disposedValue = true;
        }
    }

    // TODO: override a finalizer only if Dispose(bool disposing) above has code to free unmanaged resources.
    // ~MenuImage() {
    //   // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
    //   Dispose(false);
    // }

    // This code added to correctly implement the disposable pattern.
    public void Dispose() {
        // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
        Dispose(true);
        // TODO: uncomment the following line if the finalizer is overridden above.
        // GC.SuppressFinalize(this);
    }
    #endregion
}
