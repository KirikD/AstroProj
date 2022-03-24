using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationByButton : MonoBehaviour
{
    public Animation anim;
    void Start()
    {
        anim = gameObject.GetComponent<Animation>();
        //anim["Scene"].layer = 123; // Close
        anim.Stop();
       // anim["Open"].speed = 0.5f;
       // anim.Play("Open");
    }

    // Update is called once per frame
    public void PlayStopAnimation(bool isPlay)
    {
        if (isPlay)
        {
            //Debug.Log("PP");
            anim.Play();
            anim["Scene"].normalizedTime = 0;
            anim["Scene"].speed = 0.5f;

            anim.Play("Scene");
           
        }
        else
        {
            //Debug.Log("SS");
            anim["Scene"].normalizedTime = 0;
            anim.Stop();
            anim["Scene"].speed = 0.0f;
           
            anim.Stop("Scene");
            
        }
    }
}
