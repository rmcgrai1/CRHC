using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.Profiling;
using generic;
using Newtonsoft.Json.Linq;
using generic.number;

public class AppRunner : MonoBehaviour {
    // TODO: Use orientation of screen.
    // TODO: Use screen size in inches.

    [SerializeField]
    private Shader shader;

    [SerializeField]
    private bool doDrawLog;

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

        // Yield until CoroutineManager is instantiated.
        yield return gameObject.AddComponent<CoroutineManager>();

        // Load styles.
        // TODO: FORCE RELOAD!!
        ILoader iLoader = ServiceLocator.getILoader();
        Reference<string> styleText = iLoader.getReference<string>(CachedLoader.SERVER_PATH + "style.json");
        yield return iLoader.reloadCoroutine(styleText);

        JObject json = JObject.Parse(styleText.getResource());

        ServiceLocator.getILog().print(LogType.IO, "Setting styles... ");
        CRHC.FONT_HEIGHT_NORMAL.set(json.Value<float>("FONT_NORMAL_HEIGHT"), NumberType.INCHES);
        CRHC.FONT_HEIGHT_TITLE.set(json.Value<float>("FONT_TITLE_HEIGHT"), NumberType.INCHES);
        CRHC.FONT_HEIGHT_SUBTITLE.set(json.Value<float>("FONT_SUBTITLE_HEIGHT"), NumberType.INCHES);
        CRHC.FONT_HEIGHT_SOURCE.set(json.Value<float>("FONT_SOURCE_HEIGHT"), NumberType.INCHES);

        CRHC.SIZE_BACK_BUTTON.set(json.Value<float>("BACK_BUTTON_SIZE"), NumberType.INCHES);
        CRHC.SIZE_HOME_BUTTON.set(json.Value<float>("MAIN_BUTTON_SIZE"), NumberType.INCHES);

        CRHC.SIZE_VUFORIA_FRAME.set(json.Value<float>("VUFORIA_FRAME_SIZE"), NumberType.INCHES);
        ServiceLocator.getILog().println(LogType.IO, "OK!");

        styleText.removeOwner();

        server = new Server(CachedLoader.SERVER_PATH);
        server.loadTarget("african_american_landmark_tour");
    }

    public void OnGUI() {
        // TODO: REMOVE ME
        ServiceLocator.getITouch().OnGUI();

        if (_exitMenu) {
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
        if (doDrawLog && log is OnScreenLog) {
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
