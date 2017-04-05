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

    [SerializeField]
    private bool doDrawMemory;

    private static AppRunner instance;
    private VuforiaManager manager;

    private Stack<IMenu> menuStack = new Stack<IMenu>();
    private Server server;

    // TODO: Prevent messy stuff from happening w/ race conditions.
    private bool _enterMenu = false, _exitMenu = false;
    private IMenu nextMenu;

    private bool isUpright = true;

    // Use this for initialization
    IEnumerator Start() {
        instance = this;
        manager = new VuforiaManager(shader);

        // Yield until CoroutineManager is instantiated.
        yield return gameObject.AddComponent<CoroutineManager>();

        // Load styles.

        // TODO: Handle a lack of wifi gracefully.
        // TODO: Speed up app loading overall (compress files?).
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

        if (menuStack.Count > 0) {
            IMenu menu = menuStack.Peek();

            if (menu != null) {
                if (_enterMenu) {
                    if (menu.exit(false)) {
                        instance.menuStack.Push(nextMenu);
                        instance.menuStack.Peek().reset();
                        _enterMenu = false;
                    }
                }
                else if (_exitMenu) {
                    if (menu.exit(true)) {
                        menu.Dispose();
                        menuStack.Pop();

                        menu = menuStack.Peek();
                        menu.reset();
                        _exitMenu = false;
                    }
                }
                else {
                    menu.enter();
                }

                float angle = 0, scrW, scrH, xOffset = 0, yOffset = 0;
                Vector2 pivot = Vector2.zero;

                scrW = getScreenWidth();
                scrH = getScreenHeight();

                if (!isUpright) {
                    angle = 90;
                    yOffset = -scrH;
                }

                GUIUtility.RotateAroundPivot(angle, pivot);
                GUI.BeginClip(new Rect(xOffset, yOffset, scrW, scrH));
                menu.draw(scrW, scrH);
                GUI.EndClip();
                GUIUtility.RotateAroundPivot(-angle, pivot);
            }
            manager.OnGUI();
        }

        if (doDrawMemory) {
            Rect topBar = new Rect(0, 0, Screen.width, 20);
            GUIX.fillRect(topBar, new Color32(0, 0, 0, 128));

            long allocMemory = Profiler.GetTotalAllocatedMemory(), totalMemory = Profiler.GetTotalReservedMemory();

            GUI.Label(topBar, "Memory: " + (allocMemory / (Math.Pow(10, 6))) + "/" + (totalMemory / (Math.Pow(10, 6))) + " MB");
        }

        ILog log = ServiceLocator.getILog();
        if (doDrawLog && log is OnScreenLog) {
            (log as OnScreenLog).OnGUI();
        }
    }

    public static void setUpright(bool isUpright) {
        instance.isUpright = isUpright;
    }

    public static bool getIsUpright() {
        return instance.isUpright;
    }

    public static float getScreenWidth() {
        return (getIsUpright()) ? Screen.width : Screen.height;
    }

    public static float getScreenHeight() {
        return (getIsUpright()) ? Screen.height : Screen.width;
    }

    public static float getScreenWidthInches() {
        return getScreenWidth() / Screen.dpi;
    }

    public static float getScreenHeightInches() {
        return getScreenHeight() / Screen.dpi;
    }

    public static void enterMenu(IMenu menu) {
        if (instance.menuStack.Count == 0) {
            instance.menuStack.Push(menu);
            instance.menuStack.Peek().reset();
        }
        else {
            instance._enterMenu = true;
            instance.nextMenu = menu;
        }
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
