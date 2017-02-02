using UnityEngine;
using System.Collections.Generic;
using System.Collections;

public class Landmark : Loadable {
	private Tour parent;
    private string url;

	private string id;
	private string landmarkName;    
	private string description;
	private double latitude, longitude;
	private List<Experience> experienceList;

    
    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public Landmark(Tour parent, string id, string landmarkName, string description, double latitude, double longitude) {
        this.parent = parent;
        url = parent.getUrl() + id + "/";

        this.id = id;
        this.landmarkName = landmarkName;
        this.description = description;
        this.latitude = latitude;
        this.longitude = longitude;

        showMapRoute();
    }

    public void showMap() {
        MapServer.show(latitude, longitude);
    }
    public void showMapRoute() {
        MapServer.showRoute(latitude, longitude);
    }

    protected override IEnumerator onLoadCoroutine() {
        yield return null;
    }
    protected override IEnumerator onUnloadCoroutine() {
        foreach (Experience child in experienceList) {
            yield return child.unloadCoroutine();
        }
    }

    /*=======================================================**=======================================================*/
    /*============================================== ACCESSORS/MUTATORS ==============================================*/
    /*=======================================================**=======================================================*/
    public string getUrl() {
        return url;
    }
}
