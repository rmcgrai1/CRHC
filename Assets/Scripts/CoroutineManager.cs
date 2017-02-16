using System.Collections;
using UnityEngine;

public class CoroutineManager : MonoBehaviour {
    private static CoroutineManager instance;
    private static int mainThreadId;

    void Start() {
        Debug.Log("Coroutinemanager created!");

        instance = this;
        mainThreadId = System.Threading.Thread.CurrentThread.ManagedThreadId;
    }

    void Update() {
    }

    public static bool isMainThread() {
        return System.Threading.Thread.CurrentThread.ManagedThreadId == mainThreadId;
    }

    /*public static IEnumerator startCoroutine(IEnumerator routine) {
        Debug.Log("CoroutineManager.startCoroutine()");
        if (isMainThread()) {
            Debug.Log("Starting routine in new thread...");
            instance.StartCoroutine(routine);
            yield return null;
        }
        else {
            Debug.Log("Running routine on current thread...");
            yield return routine;
        }
    }*/

    public static void startCoroutine(IEnumerator routine) {
        instance.StartCoroutine(routine);
    }
}
