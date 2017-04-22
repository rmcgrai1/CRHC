using UnityEngine;

public class LoadOperation {
    private StoreType storeType;

    private WWW www;
    private ResourceRequest req;

    public LoadOperation(WWW www) {
        this.www = www;
        storeType = StoreType.WWW;
    }

    public LoadOperation(ResourceRequest req) {
        this.req = req;
        storeType = StoreType.RESOURCE;
    }

    public StoreType getStoreType() {
        return storeType;
    }

    public float getProgress() {
        switch (storeType) {
            case StoreType.WWW:
                return www.progress;
            case StoreType.RESOURCE:
                return req.progress;
            default:
                return 0;
        }
    }
}

public enum StoreType {
    WWW, RESOURCE
}