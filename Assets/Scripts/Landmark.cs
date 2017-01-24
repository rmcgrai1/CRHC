using UnityEngine;
using System.Collections.Generic;

public class Landmark : WebString {

	private Tour parent;
	private string id;
	private string name;
	private string description;
	private double latitude, longitude;
	private List<Experience> experienceList;

    public Landmark(Tour parent, string id, string name, string description, double latitude, double longitude) : base(parent.getUrl() + id + "/") {        

        this.parent = parent;
        this.id = id;
        this.name = name;
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

    protected override void onLoad(string returnedString) {
        Debug.Log(returnedString);
    }
    protected override void onUnload() {
        foreach (Experience child in experienceList) {
            child.unload();
        }
    }
}
