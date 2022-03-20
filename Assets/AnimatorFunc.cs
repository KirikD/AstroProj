using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatorFunc : MonoBehaviour
{
    public Animator AnimatR;
    void Start()
    {
        AnimatR = GetComponent<Animator>();
        // GetComponent<Animator>().Play("StateName");
        AnimatR.speed = 0;
    }

    // Update is called once per frame
    public void PlayStopAnimator()
    {
        AnimatR.speed = 1;
    }
}
