using System.Collections;
using UnityEngine;
using Vuforia;

public class VuforiaManager {
    private GameObject arCamera;
    private VuforiaBehaviour vuforiaBehaviour;
    //private ImageTargetBehaviour imageTargetBehaviour;

    public VuforiaManager(GameObject arCamera) {
        this.arCamera = arCamera;
        vuforiaBehaviour = arCamera.GetComponent<VuforiaBehaviour>();
    }

    public void activate(string id) {
        GameObject obj = AppRunner.get();

        vuforiaBehaviour.enabled = true;
    }

    public void deactivate() {
        GameObject obj = AppRunner.get();

        //Object.Destroy(obj.GetComponent<ImageTargetBehaviour>());

        vuforiaBehaviour.enabled = false;
    }
}