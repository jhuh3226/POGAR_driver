using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scene3AlertCanvasAppear : MonoBehaviour
{
    public Canvas scene3Alert;
    public Canvas popUp3;
    float currentTime;
    public bool scene3Collided;

    // Use this for initialization
    void Start()
    {
        scene3Alert.enabled = false;
        popUp3.enabled = false;

        scene3Collided = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.fixedTime - currentTime >= 1.3f && currentTime > 0)
        {
            //print after 2second 
            scene3Alert.enabled = true;
        }

        if (Time.fixedTime - currentTime >= 2.8 && currentTime > 0)
        {
            //print after 2second
            popUp3.enabled = true;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "whiteCar")
        {
            print("collided whiteCar");
            currentTime = Time.fixedTime;

            scene3Collided = true;
        }
    }
}
