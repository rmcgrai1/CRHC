using System.Collections;
using UnityEngine;

public class CoroutineManager : MonoBehaviour {
    private static CoroutineManager instance;
    
    void Start() {
        Debug.Log("Coroutinemanager created!");

        instance = this;
    }

    void Update() {
    }

    public static void startCoroutine(IEnumerator routine) {
        instance.StartCoroutine(routine);
    }
}
