using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.Profiling;
using Newtonsoft.Json.Linq;
using general.number;

public class AppRunner : MonoBehaviour {
    // TODO: Use orientation of screen.
    // TODO: Use screen size in inches.

    [SerializeField]
    private Shader shader;
    private Material material;

    public static readonly bool doDrawLog;
    public static readonly bool doHandleOffscreen = true;

    private static AppRunner instance;
    private VuforiaManager manager;

    private Stack<IMenu> menuStack = new Stack<IMenu>();
    private Server server;

    // TODO: Prevent messy stuff from happening w/ race conditions.
    private bool _enterMenu = false, _exitMenu = false;
    private IMenu nextMenu;

    private Orientation orientation = Orientation.PORTRAIT_UP;
    //private Orientation orientation = Orientation.LANDSCAPE_LEFT;
    //private Orientation orientation = Orientation.LANDSCAPE_RIGHT;

    // Use this for initialization
    IEnumerator Start() {
        instance = this;
        manager = new VuforiaManager(shader);
        material = new Material(shader);

        // Yield until CoroutineManager is instantiated.
        yield return gameObject.AddComponent<CoroutineManager>();

        // Load styles.

        // TODO: Handle a lack of wifi gracefully.
        // TODO: Speed up app loading overall (compress files?).
        // TODO: FORCE RELOAD!!
        ILoader iLoader = ServiceLocator.getILoader();
        Reference<JObject> styleText = iLoader.getReference<JObject>(CachedLoader.SERVER_PATH + "style.json");
        yield return iLoader.reloadCoroutine(styleText);

        JObject json = styleText.getResource();

        ServiceLocator.getILog().print(LogType.IO, "Setting styles... ");
        CrhcConstants.FONT_HEIGHT_NORMAL.set(json.Value<float>("FONT_NORMAL_HEIGHT"), NumberType.INCHES);
        CrhcConstants.FONT_HEIGHT_TITLE.set(json.Value<float>("FONT_TITLE_HEIGHT"), NumberType.INCHES);
        CrhcConstants.FONT_HEIGHT_SUBTITLE.set(json.Value<float>("FONT_SUBTITLE_HEIGHT"), NumberType.INCHES);
        CrhcConstants.FONT_HEIGHT_SOURCE.set(json.Value<float>("FONT_SOURCE_HEIGHT"), NumberType.INCHES);

        CrhcConstants.SIZE_BACK_BUTTON.set(json.Value<float>("BACK_BUTTON_SIZE"), NumberType.INCHES);
        CrhcConstants.SIZE_HOME_BUTTON.set(json.Value<float>("MAIN_BUTTON_SIZE"), NumberType.INCHES);

        CrhcConstants.SIZE_VUFORIA_FRAME.set(json.Value<float>("VUFORIA_FRAME_SIZE"), NumberType.INCHES);
        ServiceLocator.getILog().println(LogType.IO, "OK!");

        styleText.removeOwner();

        server = new Server(CachedLoader.SERVER_PATH);
        server.loadTarget("african_american_landmark_tour");
    }

    public void OnGUI() {
        // TODO: REMOVE ME
        ServiceLocator.getITouch().OnGUI();

        float scrW, scrH;
        scrW = getScreenWidth();
        scrH = getScreenHeight();

        if (menuStack.Count > 0) {
            IMenu menu = menuStack.Peek();

            if (menu != null) {
                if (_enterMenu) {
                    if (menu.exit(false)) {
                        instance.menuStack.Push(nextMenu);
                        _enterMenu = false;
                    }
                }
                else if (_exitMenu) {
                    if (menu.exit(true)) {
                        menu.Dispose();
                        menuStack.Pop();

                        menu = menuStack.Peek();
                        _exitMenu = false;
                    }
                }
                else {
                    menu.enter();
                }

                float angle = 0, xOffset = 0, yOffset = 0;
                Vector2 pivot = Vector2.zero;

                if (orientation == Orientation.PORTRAIT_DOWN) {
                    angle = 180;
                    xOffset = -scrW;
                    yOffset = -scrH;
                }
                else if (orientation == Orientation.LANDSCAPE_LEFT) {
                    angle = 90;
                    yOffset = -scrH;
                }
                else if (orientation == Orientation.LANDSCAPE_RIGHT) {
                    angle = 270;
                    xOffset = -scrW;
                }

                GUIX.clear(menu.getColor());

                GUIX.beginRotate(pivot, angle);
                GUI.BeginClip(new Rect(xOffset, yOffset, scrW, scrH));
                menu.draw(scrW, scrH);
                GUI.EndClip();
                GUIX.endRotate();
            }
            manager.OnGUI();
        }

        Rect topBar = new Rect(0, 0, Screen.width, 20);

        if (CrhcSettings.debugShowTouchPosition) {
            GUIX.fillRect(topBar, CrhcConstants.COLOR_BLACK_TRANSPARENT);

            Vector2 pos = ServiceLocator.getITouch().getTouchPosition();
            int x, y;
            x = (int)pos.x;
            y = (int)pos.y;

            GUI.Label(topBar, "Touch Position: (" + x + ", " + y + ") / (" + (int)(100f * x / scrW) + " %, " + (int)(100f * y / scrH) + " %)");
            topBar.y += 20;
        }

        if (CrhcSettings.debugShowMemory) {
            long allocMemory = Profiler.GetTotalAllocatedMemory(), totalMemory = Profiler.GetTotalReservedMemory();
            GUIX.fillRect(topBar, CrhcConstants.COLOR_BLACK_TRANSPARENT);
            GUI.Label(topBar, "Memory: " + (allocMemory / (Math.Pow(10, 6))) + "/" + (totalMemory / (Math.Pow(10, 6))) + " MB");
            topBar.y += 20;
        }

        if (CrhcSettings.debugShowFps) {
            GUIX.fillRect(topBar, CrhcConstants.COLOR_BLACK_TRANSPARENT);
            GUI.Label(topBar, "FPS: " + m_lastFramerate);
            topBar.y += 20;
        }

        if (CrhcSettings.debugShowMenuElementCount) {
            GUIX.fillRect(topBar, CrhcConstants.COLOR_BLACK_TRANSPARENT);
            GUI.Label(topBar, "Menu Element Count: " + IMenuThing.menuElementCount);
            topBar.y += 20;
        }

        if (CrhcSettings.debugShowReferenceCount) {
            GUIX.fillRect(topBar, CrhcConstants.COLOR_BLACK_TRANSPARENT);
            GUI.Label(topBar, "Reference Count: " + ServiceLocator.getILoader().getReferenceCount());
            topBar.y += 20;
        }

        if (CrhcSettings.debugShowGuixStackCounts) {
            GUIX.fillRect(topBar, CrhcConstants.COLOR_BLACK_TRANSPARENT);
            GUI.Label(topBar, "Clip Stack Count: " + GUIX.getClipStackSize());
            topBar.y += 20;
            GUIX.fillRect(topBar, CrhcConstants.COLOR_BLACK_TRANSPARENT);
            GUI.Label(topBar, "Local Clip Stack Count: " + GUIX.getLocalClipStackSize());
            topBar.y += 20;
            GUIX.fillRect(topBar, CrhcConstants.COLOR_BLACK_TRANSPARENT);
            GUI.Label(topBar, "Color Stack Count: " + GUIX.getColorStackSize());
            topBar.y += 20;
            GUIX.fillRect(topBar, CrhcConstants.COLOR_BLACK_TRANSPARENT);
            GUI.Label(topBar, "Action List Count: " + GUIX.getActionListSize());
            topBar.y += 20;
        }

        if (CrhcSettings.debugShowFileManagerStackCount) {
            GUIX.fillRect(topBar, CrhcConstants.COLOR_BLACK_TRANSPARENT);
            GUI.Label(topBar, "Directory Stack Count: " + ServiceLocator.getIFileManager().getDirectoryStackSize());
            topBar.y += 20;
        }

        ILog log = ServiceLocator.getILog();
        if (doDrawLog && log is OnScreenLog) {
            (log as OnScreenLog).OnGUI();
        }
    }

    public static Orientation getOrientation() {
        return instance.orientation;
    }

    public static float getScreenWidth() {
        return (instance.orientation == Orientation.PORTRAIT_UP || instance.orientation == Orientation.PORTRAIT_DOWN) ? Screen.width : Screen.height;
    }

    public static float getScreenHeight() {
        return (instance.orientation == Orientation.PORTRAIT_UP || instance.orientation == Orientation.PORTRAIT_DOWN) ? Screen.height : Screen.width;
    }

    public static float getScreenWidthInches() {
        return getScreenWidth() / Screen.dpi;
    }

    public static float getScreenHeightInches() {
        return getScreenHeight() / Screen.dpi;
    }

    public static bool inTransition() {
        return instance._enterMenu == true || instance._exitMenu == true;
    }

    public static void enterMenu(IMenu menu) {
        if (instance.menuStack.Count == 0) {
            instance.menuStack.Push(menu);
        }
        else if (!inTransition()) {
            instance._enterMenu = true;
            instance.nextMenu = menu;
        }
    }

    public static void exitMenu() {
        if (!inTransition()) {
            instance._exitMenu = true;
        }
    }

    public static GameObject get() {
        return instance.gameObject;
    }

    public static VuforiaManager getVuforiaManager() {
        return instance.manager;
    }

    public static Material getMaterial() {
        return instance.material;
    }

    //Declare these in your class
    int m_frameCounter = 0;
    float m_timeCounter = 0.0f;
    float m_lastFramerate = 0.0f;
    public float m_refreshTime = 0.5f;

    void Update() {
        if (m_timeCounter < m_refreshTime) {
            m_timeCounter += Time.deltaTime;
            m_frameCounter++;
        }
        else {
            //This code will break if you set your m_refreshTime to 0, which makes no sense.
            m_lastFramerate = (float)m_frameCounter / m_timeCounter;
            m_frameCounter = 0;
            m_timeCounter = 0.0f;
        }

        if(CrhcSettings.autoRotate) {
            if (Input.deviceOrientation == DeviceOrientation.Portrait) {
                orientation = Orientation.PORTRAIT_UP;
            }
            else if (Input.deviceOrientation == DeviceOrientation.PortraitUpsideDown) {
                orientation = Orientation.PORTRAIT_DOWN;
            }
            else if (Input.deviceOrientation == DeviceOrientation.LandscapeLeft) {
                orientation = Orientation.LANDSCAPE_LEFT;
            }
            else if (Input.deviceOrientation == DeviceOrientation.LandscapeRight) {
                orientation = Orientation.LANDSCAPE_RIGHT;
            }
        }
    }
}

public enum Orientation {
    PORTRAIT_UP, PORTRAIT_DOWN, LANDSCAPE_LEFT, LANDSCAPE_RIGHT
}
