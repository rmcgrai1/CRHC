using System.Collections.Generic;
using UnityEngine;

namespace general.unity {
    public static class GameObjectUtility {
        public static T GetComponent<T>(GameObject obj) where T : Component {
            // If has component, return it--otherwise, add the component automatically.
            T comp = obj.GetComponent<T>();

            if (comp == null) {
                comp = obj.AddComponent<T>();
            }

            return comp;
        }

        public static GameObject GetChild(GameObject obj, string name) {
            Queue<GameObject> searchQueue = new Queue<GameObject>();
            searchQueue.Enqueue(obj);

            while (searchQueue.Count > 0) {
                GameObject current = searchQueue.Dequeue();

                if (current.name.Equals(name)) {
                    searchQueue.Clear();
                    return current;
                }

                foreach (Transform childTransform in current.transform) {
                    searchQueue.Enqueue(childTransform.gameObject);
                }
            }

            searchQueue.Clear();
            return null;
        }
    }
}