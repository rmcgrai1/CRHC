using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public abstract class CrchItem : Loadable {
    private CrchItem parent;
    private JsonChildList.JsonChild data;

    public CrchItem(CrchItem parent, JsonChildList.JsonChild data) {
        this.parent = parent;
        this.data = data;
    }

    public CrchItem getParent() {
        return parent;
    }

    public string getData(string key) {
        return data[key];
    }

    public virtual string getId() {
        return data["id"];
    }

    public virtual string getUrl() {
        return parent.getUrl() + getId() + "/";
    }
}

public abstract class CrchFolder<CHILD_TYPE> : CrchItem, IEnumerable where CHILD_TYPE : CrchItem {
    private ICollection<CHILD_TYPE> children;
    private LoadableString childInfo;
    private ChildInfoObserver obs;
    private string targetId;

    public CrchFolder(CrchItem parent, JsonChildList.JsonChild data) : base(parent, data) {
        obs = new ChildInfoObserver(this);
        children = new LinkedList<CHILD_TYPE>();
    }

    private class ChildInfoObserver : LoadableObserver {
        private CrchFolder<CHILD_TYPE> owner;

        public ChildInfoObserver(CrchFolder<CHILD_TYPE> owner) {
            this.owner = owner;
        }

        public void onLoadSuccess(Loadable obj) {
            string returnedString = owner.childInfo.getResource();

            // TODO: Change this to a cleaner method.
            ConstructorInfo constr = typeof(CHILD_TYPE).GetConstructor(new Type[] { typeof(CrchItem), typeof(JsonChildList.JsonChild) });

            JsonChildList dataList = new JsonChildList(returnedString);
            foreach (JsonChildList.JsonChild data in dataList) {
                CHILD_TYPE child;

                child = constr.Invoke(new object[] { owner, data }) as CHILD_TYPE;
                owner.children.Add(child);
            }

            if(owner.targetId == null) {
                IMenu menu = owner.buildMenu();
                AppRunner.enterMenu(menu);
            }
            else {
                owner.getChild(owner.targetId).load();
            }
        }

        public void onLoadFailure(Loadable obj) {
        }

        public void onUnloadSuccess(Loadable obj) {
        }

        public void onUnloadFailure(Loadable obj) {            
        }
    }

    public IEnumerator GetEnumerator() {
        foreach (CHILD_TYPE child in children) {
            yield return child;
        }
    }

    public void loadTarget(string targetId) {
        this.targetId = targetId;

        load();
    }

    protected override IEnumerator tryLoad() {
        childInfo = new LoadableString(getUrl() + "list.json");
        childInfo.registerObserver(obs);

        childInfo.load();
        yield return null;
    }

    protected override IEnumerator tryUnload() {
        // TODO: Implement.
        AppRunner.exitMenu();

        children.Clear();

        yield return null;
    }

    public CHILD_TYPE getChild(string id) {
        foreach(CHILD_TYPE poss in this) {
            if(poss.getId().Equals(id)) {
                return poss;
            }
        }

        return null;
    }

    public override string ToString() {
        return "CrchFolder<" + typeof(CHILD_TYPE) + ">";
    }

    public abstract IMenu buildMenu();
}
