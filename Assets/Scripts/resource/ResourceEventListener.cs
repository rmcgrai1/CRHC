using System.Collections;

public interface ResourceEventListener {

    // Load events.
    IEnumerator onLoadSuccess(Resource src);
    IEnumerator onLoadFailure(Resource src);

    // Unload events.
    IEnumerator onUnloadSuccess(Resource src);
    IEnumerator onUnloadFailure(Resource src);
}
