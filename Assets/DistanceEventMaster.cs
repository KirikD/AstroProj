using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DistanceEventMaster : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        allMarkers = GameObject.FindGameObjectsWithTag("MarkerTarg") ;
        foreach (GameObject lightuser in allMarkers)
        {
           // lightuser.GetComponent<light>().enabled = false;
        }
    }

    // Массив со всеми маркерами
    public GameObject[] allMarkers;
    int AdderCucle = 0;
    void Update()
    {
        if (AdderCucle > allMarkers.Length)
            AdderCucle = 0;
        AdderCucle += 1;
        float dist = Vector3.Distance(allMarkers[AdderCucle].transform.position, transform.position);
    }
}
