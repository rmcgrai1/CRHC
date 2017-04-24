using general;
using general.number;
using general.rendering;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;
using general.unity;

public class VuforiaManager {
    private static VuforiaManager instance;
    private Shader shader;

    private GameObject planeGroup, overlayPlane;
    private bool isSetup, isMatching, didMatch;
    private float alphaAngle, frameAlpha = 1;

    private Experience exp;

    private string debugMessage;

    private DefaultTrackableEventThing defaultTracker;
    private ObjectTracker t;
    private DataSet ds;

    private IDictionary<Landmark, DataSet> dataSets = new Dictionary<Landmark, DataSet>();

    public VuforiaManager(Shader shader) {
        instance = this;
        this.shader = shader;

        VuforiaBehaviour vb = VuforiaBehaviour.Instance;
        vb.StartEvent += Vb_StartEvent;
        vb.OnEnableEvent += Vb_OnEnableEvent;
        vb.OnDisableEvent += Vb_OnDisableEvent;
    }

    private void Vb_OnDisableEvent() {
        CoroutineManager.startCoroutine(unloadDatasetCoroutine());
    }

    private void Vb_OnEnableEvent() {
        CoroutineManager.startCoroutine(loadDatasetCoroutine());
    }

    private void Vb_StartEvent() {
        isSetup = true;
    }

    public IEnumerator loadDatasetCoroutine() {
        Landmark landmark = exp.getLandmark();

        while (!isSetup || !landmark.getDat().isLoaded() || !landmark.getXML().isLoaded()) {
            yield return null;
        }

        t = TrackerManager.Instance.GetTracker<ObjectTracker>();

        if (dataSets.ContainsKey(landmark)) {
            ds = dataSets[landmark];
        }
        else {
            ds = t.CreateDataSet();

            IFileManager iFileManager = ServiceLocator.getIFileManager();
            iFileManager.pushDirectory(iFileManager.getBaseDirectory());

            // TODO: FIX ISSUE w/ LOADING FROM RESOURCES
            if (ds.Load(CachedLoader.convertWebToLocalPath(landmark.getXML().getPath(), PathType.RELATIVE), VuforiaUnity.StorageType.STORAGE_ABSOLUTE)) {
                dataSets[landmark] = ds;
            }
            else {
                IFileManager fm = ServiceLocator.getIFileManager();

                string paXML = "tmp.xml", paDat = "tmp.dat";
                Reference<string> fileXML = landmark.getXML();
                Reference<byte[]> fileDat = landmark.getDat();

                fm.writeToFile(paXML, fileXML.getResource());
                fm.writeToFile(paDat, fileDat.getResource());

                if (ds.Load(paXML, VuforiaUnity.StorageType.STORAGE_ABSOLUTE)) {
                    dataSets[landmark] = ds;
                }
                else {
                    ds = null;
                }

                fm.deleteFile(paXML);
                fm.deleteFile(paDat);
            }

            iFileManager.popDirectory();
        }

        if (ds != null) {
            t.Stop();
            t.ActivateDataSet(ds);
            t.Start();

            IEnumerable<TrackableBehaviour> tbs = TrackerManager.Instance.GetStateManager().GetTrackableBehaviours();
            foreach (TrackableBehaviour tb in tbs) {
                // change general name to include trackable name
                GameObject tbg = tb.gameObject;

                DefaultTrackableEventThing dtet = GameObjectUtility.GetComponent<DefaultTrackableEventThing>(tbg);
                TurnOffThing tot = GameObjectUtility.GetComponent<TurnOffThing>(tbg);

                if (tb.TrackableName == exp.getId()) {
                    defaultTracker = dtet;
                    dtet.enabled = true;

                    if (tb.name != tb.TrackableName) {
                        tb.name = tb.TrackableName;

                        planeGroup = new GameObject("planeGroup");
                        planeGroup.transform.parent = tbg.transform;
                        planeGroup.transform.localPosition = new Vector3(0f, 0f, 0f);
                        planeGroup.transform.localRotation = Quaternion.identity;

                        overlayPlane = GameObject.CreatePrimitive(PrimitiveType.Plane);
                        overlayPlane.transform.parent = planeGroup.gameObject.transform;
                    }
                    else {
                        planeGroup = GameObjectUtility.GetChild(tbg, "planeGroup");
                        overlayPlane = GameObjectUtility.GetChild(tbg, "Plane");
                    }

                    planeGroup.SetActive(true);
                }
                else {
                    dtet.enabled = false;
                    GameObject planeGroup = GameObjectUtility.GetChild(tbg, "planeGroup");
                    if (planeGroup != null) {
                        planeGroup.SetActive(false);
                    }
                }
            }
        }
        else {
            debugMessage = "Failed to load Vuforia!";
        }
    }

    private IEnumerator unloadDatasetCoroutine() {
        didMatch = false;

        t.Stop();
        t.DeactivateDataSet(ds);
        t.Start();

        if (planeGroup != null) {
            planeGroup.SetActive(false);
            planeGroup = null;
        }
        if (defaultTracker != null) {
            defaultTracker.enabled = false;
            defaultTracker = null;
        }
        overlayPlane = null;
        yield return null;
    }

    private class DefaultTrackableEventThing : MonoBehaviour, ITrackableEventHandler {
        #region PRIVATE_MEMBER_VARIABLES

        private TrackableBehaviour mTrackableBehaviour;

        #endregion // PRIVATE_MEMBER_VARIABLES



        #region UNTIY_MONOBEHAVIOUR_METHODS

        void Start() {
            mTrackableBehaviour = GetComponent<TrackableBehaviour>();
            if (mTrackableBehaviour) {
                mTrackableBehaviour.RegisterTrackableEventHandler(this);
            }
        }

        #endregion // UNTIY_MONOBEHAVIOUR_METHODS



        #region PUBLIC_METHODS

        /// <summary>
        /// Implementation of the ITrackableEventHandler function called when the
        /// tracking state changes.
        /// </summary>
        public void OnTrackableStateChanged(
                                        TrackableBehaviour.Status previousStatus,
                                        TrackableBehaviour.Status newStatus) {
            if (newStatus == TrackableBehaviour.Status.DETECTED ||
                newStatus == TrackableBehaviour.Status.TRACKED ||
                newStatus == TrackableBehaviour.Status.EXTENDED_TRACKED) {
                OnTrackingFound();

                if (this == instance.defaultTracker) {
                    instance.isMatching = instance.didMatch = true;
                }
            }
            else {
                OnTrackingLost();

                if (this == instance.defaultTracker) {
                    instance.isMatching = false;
                }
            }
        }

        #endregion // PUBLIC_METHODS

        #region PRIVATE_METHODS


        private void OnTrackingFound() {
            Renderer[] rendererComponents = GetComponentsInChildren<Renderer>(true);
            Collider[] colliderComponents = GetComponentsInChildren<Collider>(true);

            // Enable rendering:
            foreach (Renderer component in rendererComponents) {
                component.enabled = true;
            }

            // Enable colliders:
            foreach (Collider component in colliderComponents) {
                component.enabled = true;
            }
        }


        private void OnTrackingLost() {
            Renderer[] rendererComponents = GetComponentsInChildren<Renderer>(true);
            Collider[] colliderComponents = GetComponentsInChildren<Collider>(true);

            // Disable rendering:
            foreach (Renderer component in rendererComponents) {
                component.enabled = false;
            }

            // Disable colliders:
            foreach (Collider component in colliderComponents) {
                component.enabled = false;
            }
        }

        #endregion // PRIVATE_METHODS
    }

    private class TurnOffThing : TurnOffAbstractBehaviour {
        public TurnOffThing() {
        }

        public void Awake() {
            if (VuforiaRuntimeUtilities.IsVuforiaEnabled()) {
                // We remove the mesh components at run-time only, but keep them for
                // visualization when running in the editor:
                MeshRenderer targetMeshRenderer = this.GetComponent<MeshRenderer>();
                Destroy(targetMeshRenderer);
                MeshFilter targetMesh = this.GetComponent<MeshFilter>();
                Destroy(targetMesh);
            }
        }
    }

    public void activate(Experience exp) {
        if (!VuforiaBehaviour.Instance.enabled) {
            this.exp = exp;

            VuforiaBehaviour.Instance.enabled = true;

            alphaAngle = 0;
        }
    }

    public void deactivate() {
        VuforiaBehaviour.Instance.enabled = false;
        //AppRunner.setUpright(true);
    }

    public void OnGUI() {
        if (!VuforiaBehaviour.Instance.enabled) {
            return;
        }

        if (exp == null) {
            return;
        }

        Reference<Texture2D> img, overlay, outline;
        img = exp.getImg();
        overlay = exp.getOverlay();
        outline = exp.getOutline();

        if (!img.isLoaded()) {
            return;
        }

        Texture2D imgTex = img.getResource();

        float scrW = AppRunner.getScreenWidth(), scrH = AppRunner.getScreenHeight(), angle = 0, xOffset = 0, yOffset = 0;
        float s = CrhcConstants.SIZE_VUFORIA_FRAME.getAs(NumberType.PIXELS), p = 30;

        Orientation orientation = AppRunner.getOrientation();

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


        Rect region = TextureUtility.getUseRect(new Rect(xOffset + scrW - s - p, yOffset + p, s, s), imgTex, AspectType.FIT_IN_REGION);

        if (didMatch) {
            frameAlpha += (0 - frameAlpha) / 10;
        }

        alphaAngle += .5f * Time.deltaTime;

        float a = .5f + .5f * Mathf.Sin(alphaAngle);

        Vector2 pivot = Vector2.zero;
        GUIX.beginRotate(pivot, angle);

        GUIX.beginOpacity(frameAlpha);

        if (img != null) {
            if (img.isLoaded()) {
                GUIX.beginColor(Color.white);
                GUIX.drawTexture(region, img.getResource());
                GUIX.endColor();
            }
        }

        GUIX.beginOpacity(a);

        GUIX.beginOpacity(.75f);
        GUIX.fillRect(region, Color.black);
        GUIX.endOpacity();

        if (outline != null) {
            if (outline.isLoaded()) {
                GUIX.beginColor(Color.white);
                GUIX.drawTexture(region, outline.getResource());
                GUIX.endColor();
            }
        }
        GUIX.endOpacity();

        GUIX.beginOpacity(1 - a);
        if (overlay != null) {
            if (overlay.isLoaded()) {
                Texture2D tex = overlay.getResource();
                GUIX.drawTexture(region, tex);

                if (overlayPlane != null) {
                    MeshRenderer renderer = overlayPlane.GetComponent<MeshRenderer>();
                    renderer.material.shader = shader;
                    renderer.material.mainTexture = tex;

                    float tw = tex.width, th = tex.height, f = tw / th, nf = th / tw;
                    float ss = .1f;
                    float xv = -ss, yv = ss, zv = -ss;

                    zv *= nf;

                    overlayPlane.transform.localScale = new Vector3(xv, yv, zv);
                }
            }
        }
        GUIX.endOpacity();

        GUIStyle style = new GUIStyle();
        GUIX.strokeRect(region, Color.white, 3);
        GUIX.endOpacity();

        if (!isMatching) {
            //TODO: Draw on screen too.
            GUIX.beginColor(Color.white);
            TextureUtility.drawTexture(new Rect(xOffset, yOffset, scrW, scrH), outline, AspectType.FIT_IN_REGION);
            GUIX.endColor();
        }

        if (debugMessage != null && debugMessage != "") {
            float x, y, w, h;
            w = scrW;
            h = 20;
            x = xOffset;
            y = yOffset + scrH - h;

            GUIX.fillRect(new Rect(x, y, w, h), Color.black);
            GUI.Label(new Rect(x, y, w, h), debugMessage);
        }

        GUIX.endRotate();
    }
}