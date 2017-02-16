using System;
using System.Collections;

public abstract class IConvertible {
    public abstract IEnumerator convertCoroutine<INPUT_TYPE>(INPUT_TYPE input);
}

public abstract class IConvertible<OUTPUT_TYPE> : IConvertible, IDisposable {
    private OUTPUT_TYPE output;

    public IEnumerator convertFrom<INPUT_TYPE>(IConvertible<INPUT_TYPE> input) {
        yield return convertCoroutine(input.getOutput());
    }
    public IEnumerator convertFrom<INPUT_TYPE>(INPUT_TYPE input) {
        yield return convertCoroutine(input);
    }

    protected void setOutput(OUTPUT_TYPE output) {
        this.output = output;
    }

    public OUTPUT_TYPE getOutput() {
        return output;
    }

    public abstract void save(string relativePath);

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
    // ~IConvertible() {
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