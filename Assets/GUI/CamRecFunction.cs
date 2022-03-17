using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using VoxelBusters.ReplayKit;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
public class CamRecFunction : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        rkd.Initialise();
        Screen.orientation = ScreenOrientation.Portrait;
    }
    //public UIController uIController;
    public ReplayKitDemo rkd;
    public bool IsActive = false;

    public GameObject recordIco,stopIco;

    public void RecordBtt()
    {
            IsActive = !IsActive;               //if inventory is already True it will set it to false And the other way around.
                                             //all with the same key press that can be changed in the inspector.

        //-----------------------------------------------
        if (IsActive == true)
        {
            recordIco.SetActive(false);    //if the boolean is true
            stopIco.SetActive(true);
            rkd.StartRecording();
            // uIController.OnClickStartRecord();
        }                                       //You can add her also more things like stopping the time With (Time.timeScale = 0;)
        else                                  //and turn it back with(Time.timeScale = 1;)
        {
            recordIco.SetActive(true);    //if the boolean is true
            stopIco.SetActive(false);
            rkd.StopRecording();
            //uIController.StopRecording();
            Invoke("ReloadARSc",2.9f);
        }

        try {
            GameObject par1 = GameObject.FindWithTag("PlaneDebDel");  //PlaneDebDel
            Destroy(par1);
            GameObject.FindWithTag("ArPlace").transform.GetChild(0).GetComponent<MeshRenderer>().enabled = false;
        } catch { }
        for (int i = 0; i < 19; i++)
        {
            try  {
                GameObject par2 = GameObject.FindWithTag("PlaneDebDel");   //PlaneDebDel
                Destroy(par2);
            }  catch { }
        }
    }
    void ReloadARSc()
    {
        GameObject gg = GameObject.Find("AR Session");
        ARSession arSession = gg.GetComponent<ARSession>();
        arSession.Reset();
    }
}
