using System.Collections;
using System.Collections.Generic;

public class Resource {
    /*private enum ReturnCode {
        NA, SUCCESS, IN_OP, REDUNDANT
    }

    private string location;
    private List<ResourceEventListener> listeners;
    private bool hasLoaded, inOperation;
    private long byteCount;

    // Load results.
    private bool success;
    private ReturnCode returnCode;

    public Resource(string location) {
        this.location = location;
    }

    protected abstract bool tryLoad();
    protected abstract bool tryUnload();

    public IEnumerator load() {
        returnCode = ReturnCode.NA;

        if (!hasLoaded && !inOperation) {
            inOperation = true;
            yield return CoroutineManager.startCoroutine(loadCoroutine());
            hasLoaded = success;
            inOperation = false;
        }
        else {
            success = false;
            if(inOperation) {
                returnCode = ReturnCode.IN_OP;
            }
            else {
                returnCode = ReturnCode.REDUNDANT;
            }
        }

        yield return null;
    }
    private IEnumerator loadCoroutine() {
        // Load
        success = tryLoad();

        if (success) {
            foreach (ResourceEventListener listener in listeners) {
                yield return listener.onLoadSuccess(this);
            }
        }
        else {
            foreach (ResourceEventListener listener in listeners) {
                yield return listener.onLoadFailure(this);
            }
        }
    }

    public IEnumerator unload() {
        returnCode = ReturnCode.NA;

        if (hasLoaded && !inOperation) {
            inOperation = true;
            yield return CoroutineManager.startCoroutine(unloadCoroutine());
        }

        yield return null;
    }
    private IEnumerator unloadCoroutine() {
        // Unload

        if (success) {
            foreach (ResourceEventListener listener in listeners) {
                yield return listener.onUnloadSuccess(this);
            }
        }
        else {
            foreach (ResourceEventListener listener in listeners) {
                yield return listener.onUnloadFailure(this);
            }
        }

        hasLoaded = !success;
        inOperation = false;
    }

    public void addEventListener(ResourceEventListener listener) {
        listeners.Add(listener);
    }

    public bool isLoaded() {
        return hasLoaded;
    }
    public long getByteCount() {
        return byteCount;
    }*/
}
