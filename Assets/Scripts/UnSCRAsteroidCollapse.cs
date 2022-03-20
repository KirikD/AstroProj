using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnSCRAsteroidCollapse : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "Earth")
        //Object name is the name of the GameObject you want to check for collisions with.
        {
            Debug.Log("CollapsErtgh!!");
            //Destroy(this.gameObject);
            this.gameObject.SetActive(false);
        }
    }
    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.name == "Earth")
        //Object name is the name of the GameObject you want to check for collisions with.
        {
            //What you want to do on trigger enter
        }
    }


}
