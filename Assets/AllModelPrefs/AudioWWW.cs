using UnityEngine;
using System.Collections;

public class AudioWWW : MonoBehaviour
{
    public string url;
    public AudioSource source;

    IEnumerator Start()
    {
        source = GetComponent<AudioSource>();
        using (var www = new WWW(url))
        {
            yield return www;
            source.clip = www.GetAudioClip();
        }
    }

    void Update()
    {
        if (!source.isPlaying && source.clip.isReadyToPlay)
            source.Play();
    }
}