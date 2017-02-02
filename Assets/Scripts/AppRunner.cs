using UnityEngine;
using System.Collections;

public class AppRunner : MonoBehaviour {
    private static AppRunner instance;
    private Menu menu;
    private WebAudio audioClip;

    // Use this for initialization
    IEnumerator Start() {
        instance = this;

        // Yield until CoroutineManager is instantiated.
        yield return gameObject.AddComponent<CoroutineManager>();

        //audioClip = new WebAudio("http://soundbible.com/grab.php?id=2151&type=wav");

        /*menu = new Menu();
        menu.addRow(new MenuText("whoa"), new MenuText("the the the the the the the the the the the the the the the the the the"));
        menu.addRow(new MenuText("this is a long paragraph test let's hope this works ok this is a long paragraph test let's hope this works ok this is a long paragraph test let's hope this works ok this is a long paragraph test let's hope this works ok this is a long paragraph test let's hope this works ok"));
        menu.addRow(new MenuText("this is cool"));

        menu.addRow(new MenuButton("https://3.bp.blogspot.com/-W__wiaHUjwI/Vt3Grd8df0I/AAAAAAAAA78/7xqUNj8ujtY/s1600/image02.png"));*/

        string URL = "http://landmarktour.s3-website-us-west-2.amazonaws.com/Resources/"; //"http://www3.nd.edu/~rmcgrai1/CHRC/";

        Debug.Log("Starting...!");

        new Server(URL);
    }

    public void OnGUI() {
        if (menu != null) {
            menu.draw();
        }
    }

    public static GameObject get() {
        return instance.gameObject;
    }
}
