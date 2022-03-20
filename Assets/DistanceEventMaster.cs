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

    // Массив со всеми маркерами
    public GameObject[] allMarkers;
    int AdderCucle = 0;
    string oldName  ="";
    void Update()
    {
        if (AdderCucle > allMarkers.Length-2)
            AdderCucle = -1;
        AdderCucle += 1;
        float dist = Vector3.Distance(allMarkers[AdderCucle].transform.position, transform.position);
       
        // Если приблизились выводим имя
        if (dist < 2 && allMarkers[AdderCucle].name != transform.gameObject.name)
        {
            

            if (oldName.Length < 3)
            {            // единыжды вызываем
                if (oldName != allMarkers[AdderCucle].name)
                {
                    Debug.Log("<color=green>CollisionWidth: </color>" + allMarkers[AdderCucle].name);
                    this.Invoke("SetParentObject", allMarkers[AdderCucle].transform, 1f); // 
                }
                oldName = allMarkers[AdderCucle].name;
            }
        }
        // Если отдалились то у этого обжекта выводим имя
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
        [Header("имя обекта на которое мы производим воздействие")]
        public string name; // имя обекта на которое мы производим воздействие
        [Header("Если заполнено то с этим обектом тоже выполняем взаимодействие")]
        public string thisName; //

        [Header("Функция которую мы выполняем с дочерним обжектом и время через (парент)")]
        public string FirstFuncInvoke = "NullFunc"; public float delayA = 0.01f;      
        [Header("Вторая Функция которую мы выполняем с дочерним обжектом и время через (запуск анимации)")]
        public string SecondFuncInvoke = "NullFunc"; public float delayB = 0.01f;
        [Header("Третья Функция которую мы выполняем с дочерним обжектом и время через (Доп действие)")]
        public string ThirdFuncInvoke = "NullFunc"; public float delayС = 0.01f;
        // возможности при взаимодействии: 1 запуск анимации 2 выполнение какой либо инвоук функции через стринг список функций снизу
        public int ID;

      

    }


    public void NullFunc(float isOpenClose) {    } // пустая функция заглушка

    public void SetParentObject(Transform MainObj) // парентим к
    {
        Debug.Log( "<color=red>CollisionWidth: </color>" + MainObj.gameObject.name);

        MainObj.GetChild(0).SetParent(this.transform.GetChild(1), true); // мы берем в маркере обжект который всегда в иерархии 0  и парентим его к анимированному поинту который всегда номер 1 имеет

    }
    public void PlayAnimation(GameObject MainObj) // парентим к
    {
        Debug.Log("<color=blue>CollisionWidth: </color>" + MainObj.gameObject.name);

    }
    public void PlayAnimator(GameObject MainObj) // парентим к
    {
        Debug.Log("<color=black>PlayAnimator: </color>" + MainObj.gameObject.name);
        AnimPoint.GetComponent<Animator>().speed = 1.0f;

    }
    // cписок функций что делаем в случае разрыва связей
    public void DeParent(Transform poss) // убираем парент
    {  //  трали вали куча кода
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