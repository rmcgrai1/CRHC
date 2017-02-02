using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tour : Loadable {
    private Server parent;
    private string url;

    private string id;
    private string name;
    private string description;
    private WebTexture image;

    private WebString jsonInfo;
    private List<Landmark> landmarkList;


    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public Tour(Server parent, string id, string name, string description, string imagePath) {
        this.parent = parent;
        this.id = id;
        this.name = name;
        this.description = description;

        url = parent.getUrl() + id + "/";
        image = new WebTexture(getUrl() + imagePath);
        jsonInfo = new WebString(getUrl() + "list.json");
    }


    protected override IEnumerator onLoadCoroutine() {
        yield return jsonInfo.loadCoroutine();
        string returnedString = jsonInfo.getString();

        JArray jsonLandmarkList = JArray.Parse(returnedString);
        landmarkList = new List<Landmark>();

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

            Landmark child = new Landmark(this, id, name, description, latitude, longitude);
            landmarkList.Add(child);
        }
    }

    protected override IEnumerator onUnloadCoroutine() {
        //TODO: Remove from parent's list.

        foreach (Landmark child in landmarkList) {
            yield return child.unloadCoroutine();
        }
        landmarkList.Clear();

        yield return image.unloadCoroutine();
    }


    /*=======================================================**=======================================================*/
    /*============================================== ACCESSORS/MUTATORS ==============================================*/
    /*=======================================================**=======================================================*/
    public Server getParent() {
        return parent;
    }

    public string getUrl() {
        return url;
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
}
