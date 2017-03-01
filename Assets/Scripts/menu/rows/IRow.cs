using System;
using UnityEngine;

public abstract class IRow : IDisposable {
    public abstract bool draw(float w);
<<<<<<< HEAD
    public abstract float getPixelHeight(float w);
=======
    public abstract float getHeight(float w);
>>>>>>> 7d8058b78fc3336b912526ca3bdad1b73a459737

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
    /*~IRow() {
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
