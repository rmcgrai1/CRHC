using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.Profiling;

public class AppRunner : MonoBehaviour {
    [SerializeField]
    private GameObject arCamera;
    private static AppRunner instance;
    private VuforiaManager manager;

    private Stack<IMenu> menuStack = new Stack<IMenu>();
    private Server server;

    // Use this for initialization
    IEnumerator Start() {
        instance = this;
        manager = new VuforiaManager(arCamera);

        // Yield until CoroutineManager is instantiated.
        yield return gameObject.AddComponent<CoroutineManager>();

        /*Debug.Log("WORKING...!");
        ResourceLoader<string> downloader = new ResourceLoader<string>();
        yield return downloader.convertCoroutine("http://www3.nd.edu/~rmcgrai1/CRHC/list.json");
        Debug.Log(downloader.getOutput());
        Debug.Log("DONE!");*/

        //audioClip = new WebAudio("http://soundbible.com/grab.php?id=2151&type=wav");

        //string URL = "http://landmarktour.s3-website-us-west-2.amazonaws.com/Resources/";
        string URL = "http://www3.nd.edu/~rmcgrai1/CRHC/";
        //Debug.Log("Starting...!");
        server = new Server(URL);
        server.loadTarget("african_american_landmark_tour");
    }

    public void OnGUI() {
        if (menuStack.Count > 0) {
            IMenu menu = menuStack.Peek();
            if (menu != null) {
                menu.draw(Screen.width, Screen.height);
            }
        }

        Rect topBar = new Rect(0, 0, Screen.width, 20);
        GUIX.Rect(topBar, new Color32(0,0,0, 128));

        long allocMemory = Profiler.GetTotalAllocatedMemory(), totalMemory = Profiler.GetTotalReservedMemory();

        GUI.Label(topBar, "Memory: " + (allocMemory / (Math.Pow(10, 6))) + "/" + (totalMemory / (Math.Pow(10, 6))) + " MB");
    }

    public static void enterMenu(IMenu menu) {
        instance.menuStack.Push(menu);
    }

    public static void exitMenu() {
        instance.menuStack.Pop();
    }

    public static GameObject get() {
        return instance.gameObject;
    }

    public static VuforiaManager getVuforiaManager() {
        return instance.manager;
    }
}
