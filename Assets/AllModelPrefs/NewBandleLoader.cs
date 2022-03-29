using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;

public class NewBandleLoader : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(downloadAsset("http://kirikd.ru/AstroProject/cosmos"));
        // StartCoroutine(LoadObject("Application.persistentDataPath + WaterVehicles.unity3d"));
    }
    IEnumerator downloadAsset(string URLpath)
    {
        string url = URLpath;

        UnityWebRequest www = UnityWebRequest.Get(url);
        DownloadHandler handle = www.downloadHandler;

        //Send Request and wait
        yield return www.Send();

        if (www.isNetworkError)
        {

            UnityEngine.Debug.Log("Error while Downloading Data: " + www.error);
        }
        else
        {
            UnityEngine.Debug.Log("Success   " + Application.persistentDataPath);

            //handle.data

            //Construct path to save it
            string dataFileName = "WaterVehicles";
            string tempPath = Path.Combine(Application.persistentDataPath, "AssetData");
            tempPath = Path.Combine(tempPath, dataFileName + ".unity3d");

            //Save
            save(handle.data, tempPath);
        }
    }

    void save(byte[] data, string path)
    {
        //Create the Directory if it does not exist
        if (!Directory.Exists(Path.GetDirectoryName(path)))
        {
            Directory.CreateDirectory(Path.GetDirectoryName(path));
        }

        try
        {
            File.WriteAllBytes(path, data);
            Debug.Log("Saved Data to: " + path.Replace("/", "\\"));
        }
        catch (Exception e)
        {
            Debug.LogWarning("Failed To Save Data to: " + path.Replace("/", "\\"));
            Debug.LogWarning("Error: " + e.Message);
        }
    }


    //   void Update()   {       }

    IEnumerable LoadObject(string path)
    {
        AssetBundleCreateRequest bundle = AssetBundle.LoadFromFileAsync(path);
        yield return bundle;

        AssetBundle myLoadedAssetBundle = bundle.assetBundle;
        if (myLoadedAssetBundle == null)
        {
            Debug.Log("Failed to load AssetBundle!");
            yield break;
        }
       
        AssetBundleRequest request = myLoadedAssetBundle.LoadAssetAsync<GameObject>("asteroids");
        yield return request;

        GameObject obj = request.asset as GameObject;
        obj.transform.position = new Vector3(0.08f, -2.345f, 297.54f);
        obj.transform.Rotate(350.41f, 400f, 20f);
        obj.transform.localScale = new Vector3(1.0518f, 0.998f, 1.1793f);

        Instantiate(obj);

        myLoadedAssetBundle.Unload(false);
    }
}
