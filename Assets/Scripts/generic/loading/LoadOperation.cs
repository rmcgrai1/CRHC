using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class LoadOperation {
    private LoadType loadType;

    private WWW www;
    private ResourceRequest req;

    public LoadOperation(WWW www) {
        this.www = www;
        loadType = LoadType.WWW;
    }

    public LoadOperation(ResourceRequest req) {
        this.req = req;
        loadType = LoadType.RESOURCE;
    }

    public LoadType getLoadType() {
        return loadType;
    }

    public float getProgress() {
        switch (loadType) {
            case LoadType.WWW:
                return www.progress;
            case LoadType.RESOURCE:
                return req.progress;
            default:
                return 0;
        }
    }
}

public enum LoadType {
    WWW, RESOURCE
}