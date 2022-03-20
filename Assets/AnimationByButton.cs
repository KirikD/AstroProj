using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationByButton : MonoBehaviour
{
    public Animation anim;
    void Start()
    {
        anim = gameObject.GetComponent<Animation>();
        anim["Open"].layer = 123; // Close
        anim.Stop();
       // anim["Open"].speed = 0.5f;
       // anim.Play("Open");
    }

    // Update is called once per frame
    public void PlayStopAnimation(bool isPlay)
    {
        if (isPlay)
        {
            anim["Open"].speed = 0.5f;
            anim.Play("Open");
        }
        else 
        {
            anim["Open"].speed = 0.0f;
            anim.Stop("Open");
            anim["Open"].normalizedTime = 0;
        }
    }
}
