using System;

public abstract class IMenuThing : IDisposable {
    // Fix issues with height.
    private static bool doCache = false;

    private bool isCacheHValid = false;
    private float cacheHWidth, cacheHHeight;

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

    public abstract void onDispose();
}
