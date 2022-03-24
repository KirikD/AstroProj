using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.IO;

public class TextureLoadURL : MonoBehaviour
{
    public string url;
    public RawImage YourRawImage;
    public Text UrlT, PathT, permissionT;
    void Start()
    {
        StartCoroutine(DownloadImage(url));

    }
    public Texture2D tex2D;
    IEnumerator DownloadImage(string MediaUrl)
    {
        UnityWebRequest request = UnityWebRequestTexture.GetTexture(MediaUrl);
        yield return request.SendWebRequest();
        if (request.isNetworkError || request.isHttpError)
            Debug.Log(request.error);
        else
        {
            tex2D = ((DownloadHandlerTexture)request.downloadHandler).texture;
            // Application.persistentDataPath
            YourRawImage.texture = tex2D;

            UrlT.text = url;
            SaveImg();
            // сохранили текстуру куда то
            byte[] bytes = tex2D.EncodeToJPG();
            System.IO.File.WriteAllBytes(Application.persistentDataPath + "/" + "PrTex.png", bytes);
            permissionT.text = pathh = "" + Application.persistentDataPath + "/" + "PrTex.png";
            tex2D.Compress(true);

            OlnlyLoadImg();
        }
    }
    public string pathh;
    void SaveImg()
    {

        NativeGallery.Permission permission = NativeGallery.SaveImageToGallery(YourRawImage.texture as Texture2D, "GalleryTest", "TextureA.jpg", (success, path) => pathh = path);
        Debug.Log("Permission result: " + permission);
        PathT.text = pathh;
       
    }
    public void OlnlyLoadImg()
    {
        StartCoroutine(LoadTextureFromCache(pathh));
    }
    public Texture2D tex2DOlnly;
    IEnumerator LoadTextureFromCache(string filePath)
    {
        if (!File.Exists(filePath))
        {
            yield break;
        }
        var www = UnityWebRequestTexture.GetTexture("file://" + filePath);
        yield return www.SendWebRequest();
        //texture loaded
        tex2DOlnly = DownloadHandlerTexture.GetContent(www);

    }

}
