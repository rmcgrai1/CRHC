using UnityEngine;

public class MapServer {
    public static string BASE_URL = CachedLoader.SERVER_PATH + "map/";

	public static void showRoute(Landmark landmark) {
		string url = BASE_URL + "index.html?lng=" + landmark.getLongitude() + "&lat=" + landmark.getLatitude() + "&targetLandmark="+landmark.getId();
        Application.OpenURL(url);
    }
}