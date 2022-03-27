using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class AutoFocusMod : MonoBehaviour
{
    void Start()
    {
        Invoke("Poststart", 8);
        var vuforia = VuforiaARController.Instance;
        vuforia.RegisterVuforiaStartedCallback(OnVuforiaStarted);
        vuforia.RegisterOnPauseCallback(OnPaused);

    }
    void Poststart()
    {
        CameraDevice.Instance.SetFocusMode(FocusMode.FOCUS_MODE_MACRO);
  
    }
    private void OnVuforiaStarted()
    {
        CameraDevice.Instance.SetFocusMode(FocusMode.FOCUS_MODE_MACRO);
    }

    private void OnPaused(bool paused)
    {
        if (!paused) // resumed
        {
            CameraDevice.Instance.SetFocusMode(FocusMode.FOCUS_MODE_MACRO);
        }
    }
    public void AutoFocOnces()
    {
        Debug.Log("FOCUS_MODE_TRIGGERAUTO");
        CameraDevice.Instance.SetFocusMode(FocusMode.FOCUS_MODE_TRIGGERAUTO);

    }
}
