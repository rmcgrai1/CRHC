using Newtonsoft.Json.Linq;
using System.Collections.Generic;
using UnityEngine;

public class Tour : WebString {

    private Server parent;
    private string id;
    private string name;
    private string description;
    private WebTexture image;
    private List<Landmark> landmarkList;

    public Tour(Server parent, string id, string name, string description, string imagePath) : base(parent.getUrl() + id + "/") {
        this.parent = parent;
        this.id = id;
        this.name = name;
        this.description = description;

        image = new WebTexture(getUrl() + imagePath);

        load("list.json");
    }

    public Server getParent() {
        return parent;
    }

    public string getId() {
        return id;
    }

    public string getName() {
        return name;
    }

    public string getDescription() {
        return description;
    }

    public WebTexture getImage() {
        return image;
    }

    public List<Landmark> getLandmarkList() {
        return landmarkList;
    }

    protected override void onLoad(string returnedString) {
        //Debug.Log(returnedString);

        JArray jsonLandmarkList = JArray.Parse(returnedString);
        landmarkList = new List<Landmark>();

        int i = 0;
        foreach (JObject jsonLandmark in jsonLandmarkList.Children<JObject>()) {
            string id = "", name = "", description = "";
            double latitude = 0, longitude = 0;

            foreach (JProperty jsonVar in jsonLandmark.Properties()) {
                string varValue = jsonVar.Value.ToString();
                string varName = jsonVar.Name.ToString();

                switch (varName) {
                    case "id": id = varValue; break;
                    case "name": name = varValue; break;
                    case "description": description = varValue; break;
                    case "latitude": latitude = double.Parse(varValue); break;
                    case "longitude": longitude = double.Parse(varValue); break;
                }
            }

            landmarkList.Add(new Landmark(this, id, name, description, latitude, longitude));
        }
    }

    protected override void onUnload() {
        //TODO: Remove from parent's list.

        foreach(Landmark child in landmarkList) {
            child.unload();
        }

        image.unload();
    }
}
