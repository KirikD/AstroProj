using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public class DistanceEventMaster : MonoBehaviour
{
    // Start is called before the first frame update
    public Transform AnimPoint;
    void Start()
    {
        allMarkers = GameObject.FindGameObjectsWithTag("MarkerTarg") ;
        foreach (GameObject lightuser in allMarkers)
        {
           // lightuser.GetComponent<light>().enabled = false;
        }
        //  this.Invoke("OpenScreen", transform, 2f); //    this.Invoke("SetParent", 5.34f, 2f); // 
       
    }

    // ������ �� ����� ���������
    public GameObject[] allMarkers;
    int AdderCucle = 0;
    string oldName  ="";
    void Update()
    {
        if (AdderCucle > allMarkers.Length-2)
            AdderCucle = -1;
        AdderCucle += 1;
        float dist = Vector3.Distance(allMarkers[AdderCucle].transform.position, transform.position);
       
        // ���� ������������ ������� ���
        if (dist < 2 && allMarkers[AdderCucle].name != transform.gameObject.name)
        {
            

            if (oldName.Length < 3)
            {            // �������� ��������
                if (oldName != allMarkers[AdderCucle].name)
                {
                    Debug.Log("<color=green>CollisionWidth: </color>" + allMarkers[AdderCucle].name);
                    this.Invoke("SetParentObject", allMarkers[AdderCucle].transform, 1f); // 
                }
                oldName = allMarkers[AdderCucle].name;
            }
        }
        // ���� ���������� �� � ����� ������� ������� ���
        if (dist > 2 && allMarkers[AdderCucle].name != transform.gameObject.name)
        {
            if (oldName == allMarkers[AdderCucle].name)
            {
                oldName = " ";
                Debug.Log("<color=yellow>CollisionWidth: </color>" + allMarkers[AdderCucle].name);
               // this.Invoke("DeParent", allMarkers[AdderCucle].transform, 2f); // 
            }
        }

     }
    [SerializeField]
    public List<ActionsWhenCollision> AllVariantsActionsBase = new List<ActionsWhenCollision>();
    [System.Serializable]
    public class ActionsWhenCollision
    {
        [SerializeField]
        [Header("��� ������ �� ������� �� ���������� �����������")]
        public string name; // ��� ������ �� ������� �� ���������� �����������
        [Header("���� ��������� �� � ���� ������� ���� ��������� ��������������")]
        public string thisName; //

        [Header("������� ������� �� ��������� � �������� �������� � ����� ����� (������)")]
        public string FirstFuncInvoke = "NullFunc"; public float delayA = 0.01f;      
        [Header("������ ������� ������� �� ��������� � �������� �������� � ����� ����� (������ ��������)")]
        public string SecondFuncInvoke = "NullFunc"; public float delayB = 0.01f;
        [Header("������ ������� ������� �� ��������� � �������� �������� � ����� ����� (��� ��������)")]
        public string ThirdFuncInvoke = "NullFunc"; public float delay� = 0.01f;
        // ����������� ��� ��������������: 1 ������ �������� 2 ���������� ����� ���� ������ ������� ����� ������ ������ ������� �����
        public int ID;

      

    }


    public void NullFunc(float isOpenClose) {    } // ������ ������� ��������

    public void SetParentObject(Transform MainObj) // �������� �
    {
        Debug.Log( "<color=red>CollisionWidth: </color>" + MainObj.gameObject.name);

        MainObj.GetChild(0).SetParent(this.transform.GetChild(1), true); // �� ����� � ������� ������ ������� ������ � �������� 0  � �������� ��� � �������������� ������ ������� ������ ����� 1 �����

    }
    public void PlayAnimation(GameObject MainObj) // �������� �
    {
        Debug.Log("<color=blue>CollisionWidth: </color>" + MainObj.gameObject.name);

    }
    public void PlayAnimator(GameObject MainObj) // �������� �
    {
        Debug.Log("<color=black>PlayAnimator: </color>" + MainObj.gameObject.name);
        AnimPoint.GetComponent<Animator>().speed = 1.0f;

    }
    // c����� ������� ��� ������ � ������ ������� ������
    public void DeParent(Transform poss) // ������� ������
    {  //  ����� ���� ���� ����
        Debug.Log("<color=red>CollisionWidth: </color>" + poss.gameObject.name);
        poss.SetParent(null);
    }
}

namespace UnityEngine
{
    public static class ExtensionMethods
    {

        public static void Invoke(this MonoBehaviour behaviour, string method, object options, float delay)
        {
            behaviour.StartCoroutine(_invoke(behaviour, method, delay, options));
        }

        private static IEnumerator _invoke(this MonoBehaviour behaviour, string method, float delay, object options)
        {
            if (delay > 0f)
            {
                yield return new WaitForSeconds(delay);
            }

            Type instance = behaviour.GetType();
            MethodInfo mthd = instance.GetMethod(method);
            mthd.Invoke(behaviour, new object[] { options });

            yield return null;
        }

    }
}