using Newtonsoft.Json.Linq;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class JsonChildList {
    private List<JsonChild> children;

    public JsonChildList(string json) {
        Debug.Log("Parsing json... ");
        Debug.Log(json);

        children = new List<JsonChild>();

        JArray jsonTourList = JArray.Parse(json);

        foreach (JObject jsonTour in jsonTourList.Children<JObject>()) {
            JsonChild child = new JsonChild();

            foreach (JProperty jsonVar in jsonTour.Properties()) {
                string varValue = jsonVar.Value.ToString();
                string varName = jsonVar.Name.ToString();

                child[varName] = varValue;
            }

            children.Add(child);
        }
    }

    public class JsonChild {
        private Dictionary<string, string> dict;

        public JsonChild() {
            dict = new Dictionary<string, string>();
        }

        public string this[string key] {
            get {
                return dict[key];
            }
            set {
                dict[key] = value;
            }
        }
    }

    public IEnumerator GetEnumerator() {
        foreach(JsonChild child in children) {
            yield return child;
        }
    }
}
