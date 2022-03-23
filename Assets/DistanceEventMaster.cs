using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using UnityEngine.UI;
public class DistanceEventMaster : MonoBehaviour
{
    public Text[] DebugTXT;
    // Start is called before the first frame update
    [Header("����� ������ �������� � ������� �������� �������� ������")]
    public Transform[] AnimPoint; public int AnimIndex;
    void Start()
    {
        allMarkers = GameObject.FindGameObjectsWithTag("MarkerTarg") ;
        foreach (GameObject lightuser in allMarkers)
        {
           // lightuser.GetComponent<light>().enabled = false;
        }
        //  this.Invoke("OpenScreen", transform, 2f); //    this.Invoke("SetParent", 5.34f, 2f); // 
        DebugTXT[0].text ="" + allMarkers.Length;
    }

    // ������ �� ����� ���������
    public GameObject[] allMarkers;
    int AdderCucle = 0;
    string oldName  =""; GameObject oldObjGeom ;

    [Header("��������� � ������� �������� �����������������")]
    public float DistanceAction = 3;
    void Update()
    {
        if (AdderCucle > allMarkers.Length-2)
            AdderCucle = -1;
        AdderCucle += 1;
        float dist = Vector3.Distance(allMarkers[AdderCucle].transform.position, transform.position);
       
        // ���� ������������ ������� ���
        if (dist < DistanceAction && allMarkers[AdderCucle].name != transform.gameObject.name)
        {
            

            if (oldName.Length < 3)
            {            // �������� ��������
                if (oldName != allMarkers[AdderCucle].name)
                {
                    if (oldObjGeom != null)
                        Destroy(oldObjGeom);
                    oldName = allMarkers[AdderCucle].name;

                    Debug.Log("<color=green>CollisionWidth: </color>" + allMarkers[AdderCucle].name);
                    AllVariantsActionsBaseNameSort(allMarkers[AdderCucle].gameObject.name); // �������� ��������������� � ���������� ����� ���� ��� ���������
                    DebugTXT[0].text = "" + allMarkers[AdderCucle].name;

                    oldObjGeom = allMarkers[AdderCucle].transform.GetChild(0).gameObject;
                }
              
            }
        }
        // ���� ���������� �� � ����� ������� ������� ���
        if (dist > DistanceAction && allMarkers[AdderCucle].name != transform.gameObject.name)
        {
            if (oldName == allMarkers[AdderCucle].name)
            {
                if (oldObjGeom != null)
                    Destroy(oldObjGeom);

                oldName = " ";
                Debug.Log("<color=yellow>CollisionWidth: </color>" + allMarkers[AdderCucle].name);
               // this.Invoke("DeParent", allMarkers[AdderCucle].transform, 2f); // 
            }
        }

     }
    // ��������� ������ �� �����
    void AllVariantsActionsBaseNameSort(string nam)
    {
        for (int i = 0; i < AllVariantsActionsBase.Count; i++)
        {
            if (AllVariantsActionsBase[i].name == nam)
            {
                DebugTXT[1].text = "AllVar " + nam; DebugTXT[2].text = "AllVar " + AllVariantsActionsBase[i].name;
                AnimIndex = AllVariantsActionsBase[i].AnimIndexID;
                this.Invoke(AllVariantsActionsBase[i].ParentObjFunc, allMarkers[AdderCucle].transform, AllVariantsActionsBase[i].delayA); // ������ ����
                this.Invoke(AllVariantsActionsBase[i].AnimPlayFunc, allMarkers[AdderCucle].transform, AllVariantsActionsBase[i].delayB); // ���� ����
                this.Invoke(AllVariantsActionsBase[i].BaseFunc, allMarkers[AdderCucle].transform, AllVariantsActionsBase[i].delay�); // �������� ����
                this.Invoke(AllVariantsActionsBase[i].ThirdFuncInvoke, allMarkers[AdderCucle].transform, AllVariantsActionsBase[i].delayD); // ���� ����
              
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
        public string ParentObjFunc = "NullFunc"; public float delayA = 0.01f;
        [Header("������������� ������ ������ � ���������")]
        public int AnimIndexID;
        [Header("������ ������� ������� �� ��������� � �������� �������� � ����� ����� (������ ��������)")]
        public string AnimPlayFunc = "NullFunc"; public float delayB = 0.01f;
        [Header("������� ������� ������� �� ��������� � �������� �������� � ����� ����� (�������� ����� ����)")]
        public string BaseFunc = "NullFunc"; public float delay� = 0.01f;
        [Header("������ ������� ������� �� ��������� � �������� �������� � ����� ����� (��� ��������)")]
        public string ThirdFuncInvoke = "NullFunc"; public float delayD = 0.01f;
        // ����������� ��� ��������������: 1 ������ �������� 2 ���������� ����� ���� ������ ������� ����� ������ ������ ������� �����
       

      

    }


    public void NullFunc(Transform isOpenClose) {    } // ������ ������� ��������

    public void SetParentObject(Transform MainObj) // �������� �
    {
        Debug.Log("<color=red>SetParentObject: </color>" + MainObj.gameObject.name);
        DebugTXT[3].text = "Parent  " + MainObj.gameObject.name;
      MainObj.GetChild(0).SetParent(this.transform.GetChild(AnimIndex), true); // �� ����� � ������� ������ ������� ������ � �������� 0  � �������� ��� � �������������� ������ ������� ������ ����� 1 �����

    }
    public void PlayAnimation(Transform MainObj) // �������� �
    {
        Debug.Log("<color=blue>PlayAnimation: </color>" + MainObj.gameObject.name);

    }
    public void PlayAnimator(Transform MainObj) // �������� �
    {
        DebugTXT[4].text = "PlayAnim  " + MainObj.gameObject.name;
        Debug.Log("<color=black>PlayAnimator: </color>" + MainObj.gameObject.name);

        transform.GetChild(AnimIndex).GetComponent<Animator>().Rebind();
        transform.GetChild(AnimIndex).GetComponent<Animator>().Update(0f);
        transform.GetChild(AnimIndex).GetComponent<Animator>().speed = 1.0f;
       // AnimPoint[AnimIndex].GetComponent<AnimatorFunc>().PlayAnimator();
    }
    // c����� ������� ��� ������ � ������ ������� ������
    public void DeParent(Transform poss) // ������� ������
    {  //  ����� ���� ���� ����
        Debug.Log("<color=red>DeParent: </color>" + poss.gameObject.name);
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
            if (method.Length < 3) method = "NullFunc";
            MethodInfo mthd = instance.GetMethod(method); //Debug.Log("EE^ " + method);
           
            mthd.Invoke(behaviour, new object[] { options });

            yield return null;
        }

    }
}