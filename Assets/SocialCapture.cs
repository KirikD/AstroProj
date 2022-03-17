using System;
using System.Linq;
using GetSocialSdk.Capture.Scripts;
using GetSocialSdk.Core;

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SocialCapture : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private GetSocialCapture capture;
    public GetSocialCapturePreview capturePreview;

    // start recording if something interesting happens in the game
    public void RecordAction()
    {
        capture.StartCapture();
    }

    // stop recording
    public void ActionFinished()
    {
        capture.StopCapture();
        capturePreview.Play();
        // generate gif
        capture.GenerateCapture(result =>
        {
            // use gif, like send it to your friends by using GetSocial Sdk
        });
    }
    // stop recording

}
