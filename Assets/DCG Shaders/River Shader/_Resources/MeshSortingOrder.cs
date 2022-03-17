using UnityEngine;
using System.Collections;

public class MeshSortingOrder : MonoBehaviour {

	public int MeshOrder = 1000;

	// Use this for initialization
	void Awake () {
		GetComponent<Renderer>().sortingOrder = MeshOrder;
	}
	
	// Update is called once per frame
	void OnEnable () {
		GetComponent<Renderer>().sortingOrder = MeshOrder;
	}
}
