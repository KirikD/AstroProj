using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonStartAnim : MonoBehaviour
{
    public GameObject[] allMarkers;
    void Start()
    {
        allMarkers = GameObject.FindGameObjectsWithTag("MarkerTarg");
        foreach (GameObject lightuser in allMarkers)
        {
            // lightuser.GetComponent<light>().enabled = false;
        }
        //  this.Invoke("OpenScreen", transform, 2f); //    this.Invoke("SetParent", 5.34f, 2f); // 

    }
    public bool IsActive = false;
    public void AnimPlay()
    {
        IsActive = !IsActive;               //if inventory is already True it will set it to false And the other way around.
                                            //all with the same key press that can be changed in the inspector. AnimationByButton

        //-----------------------------------------------
        if (IsActive == true)
        { //Play
            for (int i = 0; i < allMarkers.Length; i++)
            {
                GetComponent<AnimationByButton>().PlayStopAnimation(true);
            }
        }
        else
        { //  Stop
            for (int i = 0; i < allMarkers.Length; i++)
            {
                GetComponent<AnimationByButton>().PlayStopAnimation(false);
            }
        }
    }
}
