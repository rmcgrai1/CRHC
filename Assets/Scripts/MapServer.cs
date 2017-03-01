using UnityEngine;

public class MapServer {
<<<<<<< HEAD
    public static string BASE_URL = CachedLoader.SERVER_PATH + "map";
=======
    public static string BASE_URL = "http://www3.nd.edu/~rmcgrai1/CRHC/map"; //https://www.google.com/maps/@";
>>>>>>> 7d8058b78fc3336b912526ca3bdad1b73a459737
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
<<<<<<< HEAD
=======
            //string url = "http://maps.google.com/maps?saddr=" + ("Current%20Location") + "&daddr=" + (latitude + "," + longitude);
>>>>>>> 7d8058b78fc3336b912526ca3bdad1b73a459737
            string url = BASE_URL + "?lng=" + longitude + "&lat=" + latitude;

            Application.OpenURL(url);
        }
    }
}