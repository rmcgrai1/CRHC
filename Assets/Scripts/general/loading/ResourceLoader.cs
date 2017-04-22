using System;
using System.Collections;
using UnityEngine;

public class ResourceLoader : ILoader {
	public override IEnumerator loadCoroutine<T>(Reference<T> reference, string path, LoadType loadType) {
		ServiceLocator.getILog().println(LogType.IO, "Loading " + typeof(T) + " from \"" + path + "\"...");

		Type type = typeof(T), assetType = type;
		bool isText = false;
		if(type == typeof(byte[]) || type == typeof(string)) {
			assetType = typeof(TextAsset);
			isText = true;
		}

		ResourceRequest req = Resources.LoadAsync(path, assetType);
		reference.setLoadOperation(new LoadOperation(req));
		yield return req;

		UnityEngine.Object asset = req.asset;

		if(isText) {
			TextAsset t = (TextAsset) asset;

			if (type == typeof(byte[])) {
				ServiceLocator.getILog().print(LogType.IO, "Getting byte[] from www...");
				reference.setResource(t.bytes as T, null);
				ServiceLocator.getILog().println(LogType.IO, "OK!");
			}
			else if (type == typeof(string)) {
				ServiceLocator.getILog().print(LogType.IO, "Getting string from www...");
				reference.setResource(t.text as T, null);
				ServiceLocator.getILog().println(LogType.IO, "OK!");
			}
		}
		else {
			ServiceLocator.getILog().print(LogType.IO, "Getting texture from www...");            
			reference.setResource(asset as T, null);
			ServiceLocator.getILog().println(LogType.IO, "OK!");
		}        
	}
}