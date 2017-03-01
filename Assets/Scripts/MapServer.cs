using UnityEngine;

public class MapServer {
    public static string BASE_URL = "http://www3.nd.edu/~rmcgrai1/CRHC/map"; //https://www.google.com/maps/@";
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
            //string url = "http://maps.google.com/maps?saddr=" + ("Current%20Location") + "&daddr=" + (latitude + "," + longitude);
            string url = BASE_URL + "?lng=" + longitude + "&lat=" + latitude;

            Application.OpenURL(url);
        }
    }
}