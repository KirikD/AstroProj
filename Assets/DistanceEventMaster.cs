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
    [Header("точка обжект анимации к которой парентим дочерний обжект")]
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

    // Массив со всеми маркерами
    public GameObject[] allMarkers;
    int AdderCucle = 0;
    string oldName  =""; GameObject oldObjGeom ;

    [Header("Дистанция с которой начинаем взаимодействовать")]
    public float DistanceAction = 3;
    void Update()
    {
        if (AdderCucle > allMarkers.Length-2)
            AdderCucle = -1;
        AdderCucle += 1;
        float dist = Vector3.Distance(allMarkers[AdderCucle].transform.position, transform.position);
       
        // Если приблизились выводим имя
        if (dist < DistanceAction && allMarkers[AdderCucle].name != transform.gameObject.name)
        {
            

            if (oldName.Length < 3)
            {            // единыжды вызываем
                if (oldName != allMarkers[AdderCucle].name)
                {
                    if (oldObjGeom != null)
                        Destroy(oldObjGeom);
                    oldName = allMarkers[AdderCucle].name;

                    Debug.Log("<color=green>CollisionWidth: </color>" + allMarkers[AdderCucle].name);
                    AllVariantsActionsBaseNameSort(allMarkers[AdderCucle].gameObject.name); // допустим взаимодействуем с астеройдом пишем сюда имя астеройда
                    DebugTXT[0].text = "" + allMarkers[AdderCucle].name;

                    oldObjGeom = allMarkers[AdderCucle].transform.GetChild(0).gameObject;
                }
              
            }
        }
        // Если отдалились то у этого обжекта выводим имя
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
    // сортируем массив по имени
    void AllVariantsActionsBaseNameSort(string nam)
    {
        for (int i = 0; i < AllVariantsActionsBase.Count; i++)
        {
            if (AllVariantsActionsBase[i].name == nam)
            {
                DebugTXT[1].text = "AllVar " + nam; DebugTXT[2].text = "AllVar " + AllVariantsActionsBase[i].name;
                AnimIndex = AllVariantsActionsBase[i].AnimIndexID;
                this.Invoke(AllVariantsActionsBase[i].ParentObjFunc, allMarkers[AdderCucle].transform, AllVariantsActionsBase[i].delayA); // парент функ
                this.Invoke(AllVariantsActionsBase[i].AnimPlayFunc, allMarkers[AdderCucle].transform, AllVariantsActionsBase[i].delayB); // Аним функ
                this.Invoke(AllVariantsActionsBase[i].BaseFunc, allMarkers[AdderCucle].transform, AllVariantsActionsBase[i].delayС); // Аниматор функ
                this.Invoke(AllVariantsActionsBase[i].ThirdFuncInvoke, allMarkers[AdderCucle].transform, AllVariantsActionsBase[i].delayD); // Аним функ
              
            }
        }
    }

    [SerializeField]
    public List<ActionsWhenCollision> AllVariantsActionsBase = new List<ActionsWhenCollision>();

    [System.Serializable]
    public class ActionsWhenCollision
    {
        [SerializeField]
        [Header("имя обекта на которое мы производим воздействие")]
        public string name; // имя обекта на которое мы производим воздействие
        [Header("Если заполнено то с этим обектом тоже выполняем взаимодействие")]
        public string thisName; //

        [Header("Функция которую мы выполняем с дочерним обжектом и время через (парент)")]
        public string ParentObjFunc = "NullFunc"; public float delayA = 0.01f;
        [Header("Анимированный индекс обжект с анимацией")]
        public int AnimIndexID;
        [Header("Вторая Функция которую мы выполняем с дочерним обжектом и время через (запуск анимации)")]
        public string AnimPlayFunc = "NullFunc"; public float delayB = 0.01f;
        [Header("Базовая Функция которую мы выполняем с дочерним обжектом и время через (аниматор точка плей)")]
        public string BaseFunc = "NullFunc"; public float delayС = 0.01f;
        [Header("Третья Функция которую мы выполняем с дочерним обжектом и время через (Доп действие)")]
        public string ThirdFuncInvoke = "NullFunc"; public float delayD = 0.01f;
        // возможности при взаимодействии: 1 запуск анимации 2 выполнение какой либо инвоук функции через стринг список функций снизу
       

      

    }


    public void NullFunc(Transform isOpenClose) {    } // пустая функция заглушка

    public void SetParentObject(Transform MainObj) // парентим к
    {
        Debug.Log("<color=red>SetParentObject: </color>" + MainObj.gameObject.name);
        DebugTXT[3].text = "Parent  " + MainObj.gameObject.name;
      MainObj.GetChild(0).SetParent(this.transform.GetChild(AnimIndex), true); // мы берем в маркере обжект который всегда в иерархии 0  и парентим его к анимированному поинту который всегда номер 1 имеет

    }
    public void PlayAnimation(Transform MainObj) // парентим к
    {
        Debug.Log("<color=blue>PlayAnimation: </color>" + MainObj.gameObject.name);

    }
    public void PlayAnimator(Transform MainObj) // парентим к
    {
        DebugTXT[4].text = "PlayAnim  " + MainObj.gameObject.name;
        Debug.Log("<color=black>PlayAnimator: </color>" + MainObj.gameObject.name);

        transform.GetChild(AnimIndex).GetComponent<Animator>().Rebind();
        transform.GetChild(AnimIndex).GetComponent<Animator>().Update(0f);
        transform.GetChild(AnimIndex).GetComponent<Animator>().speed = 1.0f;
       // AnimPoint[AnimIndex].GetComponent<AnimatorFunc>().PlayAnimator();
    }
    // cписок функций что делаем в случае разрыва связей
    public void DeParent(Transform poss) // убираем парент
    {  //  трали вали куча кода
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