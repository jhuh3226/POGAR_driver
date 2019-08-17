using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scene2AlertCanvasAppear : MonoBehaviour
{
    public Canvas scene2Alert;
    public Canvas popUp2;
    float currentTime;
    public bool scene2Collided;

    // Use this for initialization
    void Start()
    {
        scene2Alert.enabled = false;
        popUp2.enabled = false;

        scene2Collided = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.fixedTime - currentTime >= 1.3f && currentTime > 0)
        {
            //print after 2second 
            scene2Alert.enabled = true;
        }

        if (Time.fixedTime - currentTime >= 2.8 && currentTime > 0)
        {
            //print after 2second
            popUp2.enabled = true;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "whiteCar")
        {
            print("collided whiteCar");
            currentTime = Time.fixedTime;

            scene2Collided = true;
        }
    }
}
