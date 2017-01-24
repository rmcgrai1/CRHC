using Newtonsoft.Json.Linq;
using System.Collections.Generic;

public class Server : WebString {
    private List<Tour> tourList;

    public Server(string url) : base(url) {
        load("list.json");
    }

    protected override void onLoad(string returnedString) {
        //Debug.Log(returnedString);
        JArray jsonTourList = JArray.Parse(returnedString);
        tourList = new List<Tour>(jsonTourList.Count);

        foreach (JObject jsonTour in jsonTourList.Children<JObject>()) {
            string id = "", name = "", description = "", imagePath = "";

            foreach (JProperty jsonVar in jsonTour.Properties()) {
                string varValue = jsonVar.Value.ToString();
                string varName = jsonVar.Name.ToString();

                switch(varName) {
                    case "id": id = varValue; break;
                    case "name": name = varValue; break;
                    case "description": description = varValue; break;
                    case "imagePath": imagePath = varValue; break;
                }
            }

            tourList.Add(new Tour(this, id, name, description, imagePath));
        }
    }
    protected override void onUnload() {
        foreach (Tour child in tourList) {
            child.unload();
        }
    }

    public List<Tour> getTourList() {
        return tourList;
    }
}
