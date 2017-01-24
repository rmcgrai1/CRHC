using UnityEngine;
using System.Collections;

public class AppRunner : MonoBehaviour {

	// Use this for initialization
	void Start () {
        string URL = "http://www3.nd.edu/~rmcgrai1/CHRC/";

        Debug.Log("Starting...!");

        new Server(URL);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
