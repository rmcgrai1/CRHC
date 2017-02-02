using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;

public class Server : Loadable {
    private string url;

    private WebString jsonInfo;
    private List<Tour> tourList;

    private LoadableCollection collection;


    /*=======================================================**=======================================================*/
    /*=========================================== CONSTRUCTOR/DECONSTRUCTOR ==========================================*/
    /*=======================================================**=======================================================*/
    public Server(string url) {
        this.url = url;

        jsonInfo = new WebString(url + "list.json");
        tourList = new List<Tour>();
    }

    protected override IEnumerator onLoadCoroutine() {
        yield return jsonInfo.loadCoroutine();

        string returnedString = jsonInfo.getString();

        JsonChildList childList = new JsonChildList(returnedString);
        foreach (JsonChildList.JsonChild child in childList) {
            Tour tour = new Tour(this, child["id"], child["name"], child["description"], child["imagePath"]);
            tourList.Add(tour);
        }
    }

    protected override IEnumerator onUnloadCoroutine() {
        yield return jsonInfo.unloadCoroutine();

        foreach (Tour child in tourList) {
            yield return child.unloadCoroutine();
        }
        tourList.Clear();
    }


    /*=======================================================**=======================================================*/
    /*============================================== ACCESSORS/MUTATORS ==============================================*/
    /*=======================================================**=======================================================*/
    public string getUrl() {
        return url;
    }

    public List<Tour> getTourList() {
        return tourList;
    }
}
