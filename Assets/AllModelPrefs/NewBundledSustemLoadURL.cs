using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class NewBundledSustemLoadURL : MonoBehaviour
{
    public string assetName = "sdfsdf"; // ��� �������
    public string bundleName = "neptun"; // ��� ������ �� ����� ������� ����� ���


    // Start is called before the first frame update
    void Start()
    {
      /*  AssetBundle localAssetBundle = AssetBundle.LoadFromFile(Path.Combine(Application.streamingAssetsPath, bundleName));

        if (localAssetBundle == null)
        {
            Debug.LogError("Failed to load AssetBundle!");
            return;
        }

        GameObject asset = localAssetBundle.LoadAsset<GameObject>(assetName);
        Instantiate(asset);
        localAssetBundle.Unload(false);*/
        StartCoroutine(LoadBundleFromDiskAsunc());
    }
    IEnumerator LoadBundleFromDiskAsunc()
    {
        var bundleLoadRequest = AssetBundle.LoadFromFileAsync(Path.Combine(Application.streamingAssetsPath, "neptun"));
        yield return bundleLoadRequest;

        var myLoadedAssetBundle = bundleLoadRequest.assetBundle;
        if (myLoadedAssetBundle == null)
        {
            Debug.Log("Failed to load AssetBundle!");
            yield break;
        }

        var assetLoadRequest = myLoadedAssetBundle.LoadAssetAsync<GameObject>("Neptune");
        yield return assetLoadRequest;

        GameObject prefab = assetLoadRequest.asset as GameObject;
        Instantiate(prefab);

        myLoadedAssetBundle.Unload(false);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
