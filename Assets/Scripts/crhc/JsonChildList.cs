using Newtonsoft.Json.Linq;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class JsonChildList : IDisposable {
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

            children.Add(child);
        }
    }

    public class JsonChild : IDisposable {
        private Dictionary<string, string> dict;

        public JsonChild() {
            dict = new Dictionary<string, string>();
        }

        public bool contains(string key) {
            return dict.ContainsKey(key);
        }

        public string this[string key] {
            get {
                if (contains(key)) {
                    return dict[key];
                }
                else {
                    return null;
                }
            }
            set {
                dict[key] = value;
            }
        }

        #region IDisposable Support
        private bool disposedValue = false; // To detect redundant calls

        protected virtual void Dispose(bool disposing) {
            if (!disposedValue) {
                if (disposing) {
                    // TODO: dispose managed state (managed objects).
                }

                // TODO: free unmanaged resources (unmanaged objects) and override a finalizer below.
                // TODO: set large fields to null.
                dict.Clear();
                dict = null;

                disposedValue = true;
            }
        }

        // TODO: override a finalizer only if Dispose(bool disposing) above has code to free unmanaged resources.
        // ~JsonChild() {
        //   // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
        //   Dispose(false);
        // }

        // This code added to correctly implement the disposable pattern.
        public void Dispose() {
            // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
            Dispose(true);
            // TODO: uncomment the following line if the finalizer is overridden above.
            // GC.SuppressFinalize(this);
        }
        #endregion
    }

    public IEnumerator GetEnumerator() {
        foreach (JsonChild child in children) {
            yield return child;
        }
    }

    #region IDisposable Support
    private bool disposedValue = false; // To detect redundant calls

    protected virtual void Dispose(bool disposing) {
        if (!disposedValue) {
            if (disposing) {
                // TODO: dispose managed state (managed objects).
            }

            // TODO: free unmanaged resources (unmanaged objects) and override a finalizer below.
            // TODO: set large fields to null.
            foreach(JsonChild child in children) {
                child.Dispose();
            }
            children.Clear();
            children = null;

            disposedValue = true;
        }
    }

    // TODO: override a finalizer only if Dispose(bool disposing) above has code to free unmanaged resources.
    // ~JsonChildList() {
    //   // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
    //   Dispose(false);
    // }

    // This code added to correctly implement the disposable pattern.
    public void Dispose() {
        // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
        Dispose(true);
        // TODO: uncomment the following line if the finalizer is overridden above.
        // GC.SuppressFinalize(this);
    }
    #endregion
}
