using UnityEngine;

public class MapServer {
    public static string BASE_URL = CachedLoader.SERVER_PATH + "map";
    public static bool isOpen = false;

    public static void show(double latitude, double longitude) {
        if (!isOpen) {
            isOpen = true;
            string url = BASE_URL + (latitude + "," + longitude);

            Application.OpenURL(url);
        }
    }

    public static void showRoute(double latitude, double longitude) {
        if (!isOpen) {
            isOpen = true;
            string url = BASE_URL + "?lng=" + longitude + "&lat=" + latitude;

            Application.OpenURL(url);
        }
    }
}