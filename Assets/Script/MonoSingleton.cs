using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonoSingleton<T> : MonoBehaviour where T : MonoBehaviour
{
    private static bool shuttingdown = false;

    private static T instance;
    private static object loker = new object();
    public static T Instance
    {
        get
        {
            if(shuttingdown)
            {
                Debug.LogWarning("[MonoSingleton] Instance " + typeof(T) + "already destroyed. Returning null. ");
                return null;
            }

            lock (loker)
            {
                if (instance == null)
                {
                    instance = (T)FindObjectOfType(typeof(T));
                    if (instance == null)
                    {
                        GameObject temp = new GameObject(typeof(T).ToString());
                        instance = temp.AddComponent<T>();
                        //DontDestroyOnLoad(instance);
                        //DontDestroyOnLoad(temp);
                    }
                }
            }
            return instance;
        }
    }
    private void OnApplicationQuit()
    {
        shuttingdown = true;
    }

    private void OnDestroy()
    {
        shuttingdown = true;
    }
}
