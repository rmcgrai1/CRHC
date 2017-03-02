using generic;
using generic.number;
using generic.rendering;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class VuforiaManager {
    //private ImageTargetBehaviour imageTargetBehaviour;

    private static VuforiaManager instance;
    private Shader shader;

    private Reference<Texture2D> img, outline, overlay;
    private GameObject planeGroup, outlinePlane, overlayPlane;
    private bool isSetup, isMatching, didMatch;
    private float alphaAngle, frameAlpha = 1;
    private Experience exp;

    private string debugMessage;

    private ObjectTracker t;
    private DataSet ds;

    private IDictionary<Experience, DataSet> dataSets = new Dictionary<Experience, DataSet>();

    public VuforiaManager(Shader shader) {
        instance = this;
        this.shader = shader;

        VuforiaBehaviour vb = VuforiaBehaviour.Instance;
        vb.StartEvent += Vb_StartEvent;
        vb.OnEnableEvent += Vb_OnEnableEvent;
        vb.OnDisableEvent += Vb_OnDisableEvent;
    }

    private void Vb_OnDisableEvent() {
    }

    private void Vb_OnEnableEvent() {
    }

    private void Vb_StartEvent() {
        CoroutineManager.startCoroutine(loadDatasetCoroutine());
    }

    public IEnumerator loadDatasetCoroutine() {
        while (!exp.getLandmark().getDat().isLoaded() || !exp.getLandmark().getXML().isLoaded()) {
            yield return null;
        }

        t = TrackerManager.Instance.GetTracker<ObjectTracker>();

        if (dataSets.ContainsKey(exp)) {
            ds = dataSets[exp];
            debugMessage = "Loaded successfully!";
        }
        else {
            ds = t.CreateDataSet();

            IFileManager iFileManager = ServiceLocator.getIFileManager();
            iFileManager.pushDirectory(iFileManager.getBaseDirectory());
            if (ds.Load(CachedLoader.convertWebToLocalPath(exp.getLandmark().getXML().getPath(), PathType.RELATIVE), VuforiaUnity.StorageType.STORAGE_ABSOLUTE)) {
                t.Stop();

                t.ActivateDataSet(ds);
                t.Start();

                IEnumerable<TrackableBehaviour> tbs = TrackerManager.Instance.GetStateManager().GetTrackableBehaviours();
                foreach (TrackableBehaviour tb in tbs) {
                    // change generic name to include trackable name
                    if (tb.TrackableName == exp.getId()) {
                        //TODO: Activate.

                        tb.gameObject.AddComponent<DefaultTrackableEventThing>();
                        tb.gameObject.AddComponent<TurnOffThing>();

                        GameObject planeGroup = new GameObject("planeGroup");
                        planeGroup.transform.parent = tb.gameObject.transform;
                        planeGroup.transform.localPosition = new Vector3(0f, 0f, 0f);
                        planeGroup.transform.localRotation = Quaternion.identity;
                        planeGroup.gameObject.SetActive(true);

                        overlayPlane = GameObject.CreatePrimitive(PrimitiveType.Plane);
                        overlayPlane.transform.parent = planeGroup.gameObject.transform;

                        tb.name = tb.TrackableName;
                    }
                    else {
                        // TODO: Deactivate.
                    }
                }

                debugMessage = "Loaded successfully!";
            }
            else {
                debugMessage = "Failed to load Vuforia!";
            }
            iFileManager.popDirectory();
        }
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

                instance.isMatching = instance.didMatch = true;
            }
            else {
                OnTrackingLost();

                instance.isMatching = false;
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

            Debug.Log("Trackable " + mTrackableBehaviour.TrackableName + " found");
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

            Debug.Log("Trackable " + mTrackableBehaviour.TrackableName + " lost");
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
        this.exp = exp;

        VuforiaBehaviour.Instance.enabled = true;

        ILoader loader = ServiceLocator.getILoader();
        img = loader.load<Texture2D>(exp.getUrl() + "img.jpg");
        outline = loader.load<Texture2D>(exp.getUrl() + "outlineResized.png");
        overlay = loader.load<Texture2D>(exp.getUrl() + "overlayResized.png");

        alphaAngle = 0;
    }

    public void deactivate() {
        VuforiaBehaviour.Instance.enabled = false;

        img.removeOwner();
        outline.removeOwner();
        overlay.removeOwner();
        img = outline = overlay = null;
    }

    public void OnGUI() {
        if (!VuforiaBehaviour.Instance.enabled || !img.isLoaded()) {
            return;
        }

        Texture2D imgTex = img.getResource();

        // TODO: Tilt screen.
        float aspect, scrW, scrH, angle, xOffset, yOffset;
        float s = CRHC.SIZE_VUFORIA_FRAME.getAs(NumberType.PIXELS), p = 30;
        aspect = 1f * imgTex.width / imgTex.height;

        if (aspect < 1) {
            scrW = Screen.width;
            scrH = Screen.height;

            xOffset = yOffset = angle = 0;
        }
        else {
            scrW = Screen.height;
            scrH = Screen.width;

            angle = 90;
            xOffset = 0;
            yOffset = -scrH;
        }

        Rect region = TextureUtility.getUseRect(new Rect(xOffset + scrW - s - p, yOffset + p, s, s), imgTex, AspectType.FIT_IN_REGION);

        if (didMatch) {
            frameAlpha += (0 - frameAlpha) / 10;
        }

        alphaAngle += .5f * Time.deltaTime;

        float a = .5f + .5f * Mathf.Sin(alphaAngle);

        Vector2 pivot = Vector2.zero;
        GUIUtility.RotateAroundPivot(angle, pivot);
        GUIX.beginOpacity(frameAlpha);

        if (img != null) {
            if (img.isLoaded()) {
                GUIX.Texture(region, img.getResource());
            }
        }

        GUIX.beginOpacity(a);

        GUIX.beginOpacity(.75f);
        GUIX.fillRect(region, Color.black);
        GUIX.endOpacity();

        if (outline != null) {
            if (outline.isLoaded()) {
                GUIX.Texture(region, outline.getResource());
            }
        }
        GUIX.endOpacity();

        GUIX.beginOpacity(1 - a);
        if (overlay != null) {
            if (overlay.isLoaded()) {
                GUIX.Texture(region, overlay.getResource());
                if (!isSetup && overlayPlane != null) {
                    Texture2D tex = overlay.getResource();

                    MeshRenderer renderer = overlayPlane.GetComponent<MeshRenderer>();
                    renderer.material.mainTexture = tex;
                    renderer.material.shader = shader;

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
            TextureUtility.drawTexture(new Rect(xOffset, yOffset, scrW, scrH), outline, AspectType.FIT_IN_REGION);
        }

        float x, y, w, h;
        w = Screen.width;
        h = 30;
        x = xOffset;
        y = yOffset + Screen.height - h;

        GUIX.fillRect(new Rect(x, y, w, h), Color.black);
        GUI.Label(new Rect(x, y, w, h), debugMessage);
        GUIUtility.RotateAroundPivot(-angle, pivot);
    }
}