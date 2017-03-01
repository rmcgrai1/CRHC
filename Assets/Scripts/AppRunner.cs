using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.Profiling;
using generic;

public class AppRunner : MonoBehaviour {
    // TODO: Use orientation of screen.
    // TODO: Use screen size in inches.

    [SerializeField]
    private Shader shader;

    [SerializeField]
    private bool doClearCacheOnLaunch;

    [SerializeField]
    private bool doDrawLog;

    [SerializeField]
    private bool _doUseLocalCache;

    public static bool doUseLocalCache {
        get {
            return instance._doUseLocalCache;
        }
    }

    private static AppRunner instance;
    private VuforiaManager manager;

    private Vector2 resolution;

    private Stack<IMenu> menuStack = new Stack<IMenu>();
    private Server server;

    private bool _exitMenu = false;

    // Use this for initialization
    IEnumerator Start() {
        instance = this;
        manager = new VuforiaManager(shader);

        resolution = new Vector2(Screen.width, Screen.height);

        //ILoader loader = ServiceLocator.getILoader().clearCache(true);

        // Yield until CoroutineManager is instantiated.
        yield return gameObject.AddComponent<CoroutineManager>();

        string URL = "http://www3.nd.edu/~rmcgrai1/CRHC/";
        server = new Server(URL);
        server.loadTarget("african_american_landmark_tour");
    }

    public void OnGUI() {
        // TODO: REMOVE ME
        ServiceLocator.getITouch().OnGUI();

        if(_exitMenu) {
            _exitMenu = false;

            IMenu menu = instance.menuStack.Pop();
            menu.Dispose();
            menuStack.Peek().reset();
        }

        if (menuStack.Count > 0) {
            IMenu menu = menuStack.Peek();
            if (menu != null) {
                menu.draw(Screen.width, Screen.height);
            }
            manager.OnGUI();
        }

        /*Rect topBar = new Rect(0, 0, Screen.width, 20);
        GUIX.fillRect(topBar, new Color32(0,0,0, 128));

        long allocMemory = Profiler.GetTotalAllocatedMemory(), totalMemory = Profiler.GetTotalReservedMemory();

        GUI.Label(topBar, "Memory: " + (allocMemory / (Math.Pow(10, 6))) + "/" + (totalMemory / (Math.Pow(10, 6))) + " MB");*/

        ILog log = ServiceLocator.getILog();
        if(doDrawLog && log is OnScreenLog) {
            (log as OnScreenLog).OnGUI();
        }
    }

    public static float getScreenWidth() {
        return instance.resolution.x;
    }

    public static float getScreenHeight() {
        return instance.resolution.y;
    }

    public static float getScreenWidthInches() {
        return getScreenWidth() / Screen.dpi;
    }

    public static float getScreenHeightInches() {
        return getScreenHeight() / Screen.dpi;
    }

    public static void enterMenu(IMenu menu) {
        instance.menuStack.Push(menu);
        instance.menuStack.Peek().reset();
    }

    public static void exitMenu() {
        instance._exitMenu = true;
    }

    public static GameObject get() {
        return instance.gameObject;
    }

    public static VuforiaManager getVuforiaManager() {
        return instance.manager;
    }
}
