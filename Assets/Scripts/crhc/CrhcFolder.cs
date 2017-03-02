using generic;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public abstract class CrhcItem : Loadable, IDisposable {
    private CrhcItem parent;
    private JsonChildList.JsonChild data;

    public CrhcItem(CrhcItem parent, JsonChildList.JsonChild data) {
        this.parent = parent;
        this.data = data;
    }

    public CrhcItem getParent() {
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

    public abstract void onDispose();

    #region IDisposable Support
    private bool disposedValue = false; // To detect redundant calls

    protected virtual void Dispose(bool disposing) {
        if (!disposedValue) {
            if (disposing) {
                // TODO: dispose managed state (managed objects).
            }

            // TODO: free unmanaged resources (unmanaged objects) and override a finalizer below.
            // TODO: set large fields to null.
            onDispose();

            data.Dispose();
            parent = null;
            data = null;

            disposedValue = true;
        }
    }

    // TODO: override a finalizer only if Dispose(bool disposing) above has code to free unmanaged resources.
    // ~CrchFolder() {
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

public abstract class CrhcFolder<CHILD_TYPE> : CrhcItem, IEnumerable where CHILD_TYPE : CrhcItem {
    private List<CHILD_TYPE> children;
    private Reference<string> childInfo;
    private string targetId;

    public CrhcFolder(CrhcItem parent, JsonChildList.JsonChild data) : base(parent, data) {
        children = new List<CHILD_TYPE>();
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
        ILoader loader = ServiceLocator.getILoader();

        ServiceLocator.getILog().println(LogType.JUNK, "Loading info...");
        childInfo = loader.getReference<string>(getUrl() + "list.json");
        yield return loader.loadCoroutine(childInfo);

        string returnedString = childInfo.getResource();

        // TODO: Change this to a cleaner method.
        ConstructorInfo constr = typeof(CHILD_TYPE).GetConstructor(new Type[] { typeof(CrhcItem), typeof(JsonChildList.JsonChild) });

        JsonChildList dataList = new JsonChildList(returnedString);
        foreach (JsonChildList.JsonChild data in dataList) {
            CHILD_TYPE child;

            ServiceLocator.getILog().println(LogType.JUNK, "  Adding child...");
            child = constr.Invoke(new object[] { this, data }) as CHILD_TYPE;
            children.Add(child);
        }

        if (targetId == null) {
            ServiceLocator.getILog().println(LogType.JUNK, "Building menu...");
            IMenu menu = buildMenu();
            AppRunner.enterMenu(menu);
        }
        else {
            ServiceLocator.getILog().println(LogType.JUNK, "Entering child menu: " + targetId);
            getChild(targetId).load();
        }
    }

    protected override IEnumerator tryUnload() {
        // TODO: Implement.
        AppRunner.exitMenu();

        children.Clear();

        yield return null;
    }

    public CHILD_TYPE getChild(string id) {
        foreach (CHILD_TYPE poss in this) {
            if (poss.getId().Equals(id)) {
                return poss;
            }
        }

        return null;
    }

    public override string ToString() {
        return "CrchFolder<" + typeof(CHILD_TYPE) + ">";
    }

    public abstract IMenu buildMenu();

    public override void onDispose() {
        foreach (CHILD_TYPE child in children) {
            child.Dispose();
        }
        children.Clear();

        childInfo.removeOwner();
        childInfo = null;
        children = null;
    }

    public void sort() {
        children.Sort();
    }
}
