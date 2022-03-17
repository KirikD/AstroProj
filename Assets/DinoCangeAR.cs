using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DinoCangeAR : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Invoke("DisabRamka", 2);
    }
    void DisabRamka(){ Destroy(GameObject.Find("CameraFakeFocus")); }
    public GameObject dinoOld;
    // Update is called once per frame
    public void SetDino(GameObject Dino)
    {
        Destroy(dinoOld);
        dinoOld = Instantiate(Dino, new Vector3(0, 0, 0), Quaternion.identity);
        dinoOld.SetActive(true);

        Transform par = GameObject.FindWithTag("ArPlace").transform;
        dinoOld.transform.SetParent(par, false);
        dinoOld.transform.localScale = new Vector3(0.15f,0.15f,0.15f);

        dinoOld.GetComponent<MeshRenderer>().enabled = false; // скрыли вуфоревский фрейм
    }
}
