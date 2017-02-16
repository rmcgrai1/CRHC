using System;
using System.Collections;
using UnityEngine;

public abstract class LoadableResource<RESOURCE_TYPE> : Loadable, IDisposable {
    private CachedLoader<RESOURCE_TYPE> resource;
    private string url;    

    public LoadableResource(string url) {
        Debug.Log("Instantiated " + this);

        this.url = url;
        resource = CachedLoader<RESOURCE_TYPE>.getReference(url);
    }

    protected override IEnumerator tryLoad() {
        yield return resource.loadC
    }

    protected override IEnumerator tryUnload() {
        resource.Dispose();
        resource = null;

        yield return null;
    }

    public RESOURCE_TYPE getResource() {
        return resource.getOutput();
    }

    public override string ToString() {
        return "LoadableResource<" + typeof(RESOURCE_TYPE) + ">[" + url + "]";
    }

    #region IDisposable Support
    private bool disposedValue = false; // To detect redundant calls

    protected virtual void Dispose(bool disposing) {
        if (!disposedValue) {
            if (disposing) {
                // TODO: dispose managed state (managed objects).
            }

            // TODO: free unmanaged resources (unmanaged objects) and override a finalizer below.
            resource.removeReference();

            // TODO: set large fields to null.

            disposedValue = true;
        }
    }

    // TODO: override a finalizer only if Dispose(bool disposing) above has code to free unmanaged resources.
    // ~LoadableResource() {
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
