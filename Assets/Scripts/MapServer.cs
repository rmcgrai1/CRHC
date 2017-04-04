using UnityEngine;

public class MapServer {
    public static string BASE_URL = CachedLoader.SERVER_PATH + "map/index.html";

	public static void showRoute(Landmark landmark) {
		string url = BASE_URL + "?lng=" + landmark.getLongitude() + "&lat=" + landmark.getLatitude() + "&targetLandmark="+landmark.getId();
        Application.OpenURL(url);
    }
}