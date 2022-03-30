using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleKostil : MonoBehaviour
{
    GameObject planetScalObj;
    void Start()
    {

        planetScalObj = this.transform.GetChild(0).gameObject;
        Destroy(planetScalObj.GetComponent<ScaleSetterFix>());
    }


    
    int adder = 0;
    float scalMnoz = 1;
    void Update()
    {


        //  if (activ)
        //{
        if (adder == 1)
        {
            planetScalObj = this.transform.GetChild(0).gameObject;
            Destroy(planetScalObj.GetComponent<ScaleSetterFix>());
        }
            adder++;
        
        if (adder > 75)
                Destroy(this.gameObject.GetComponent<ScaleKostil> ());
        
        scalMnoz -= 0.01f;
        planetScalObj.transform.localScale = planetScalObj.transform.localScale * 0.99f;
      //  }
    }
}
