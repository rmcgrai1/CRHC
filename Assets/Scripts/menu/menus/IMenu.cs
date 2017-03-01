using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public abstract class IMenu : IDisposable {
    public abstract void reset();
    public abstract void addRow(IRow row);
    public abstract void draw(float w, float h);
    public abstract float getHeight(float w);
    public abstract void setColor(Color color);

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
    /*~IMenu() {
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
