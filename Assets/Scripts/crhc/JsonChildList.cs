using Newtonsoft.Json.Linq;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class JsonChildList {
    private List<JsonChild> children;

    public JsonChildList(string json) {
        children = new List<JsonChild>();

        JArray jsonTourList = JArray.Parse(json);

        foreach (JObject jsonTour in jsonTourList.Children<JObject>()) {
            JsonChild child = new JsonChild();

            foreach (JProperty jsonVar in jsonTour.Properties()) {
                string varValue = jsonVar.Value.ToString();
                string varName = jsonVar.Name.ToString();

                child[varName] = varValue;
            }
        }
    }

    public class JsonChild {
        private Dictionary<string, string> dict;

        public JsonChild() {}

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
