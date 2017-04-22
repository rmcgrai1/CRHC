using System.Collections;
using UnityEngine;

public class CoroutineManager : MonoBehaviour {
    private static CoroutineManager instance;
    private static int mainThreadId;

    void Start() {
        ServiceLocator.getILog().println(LogType.JUNK, "Coroutinemanager created!");

        instance = this;
        mainThreadId = System.Threading.Thread.CurrentThread.ManagedThreadId;
    }

    void Update() { }

    public static bool isMainThread() {
        return System.Threading.Thread.CurrentThread.ManagedThreadId == mainThreadId;
    }

    public static void startCoroutine(IEnumerator routine) {
        instance.StartCoroutine(routine);
    }
}
