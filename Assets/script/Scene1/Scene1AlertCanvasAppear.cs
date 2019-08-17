using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scene1AlertCanvasAppear : MonoBehaviour
{
    public Canvas alert;
    public Canvas popUp;
    public Canvas crash1;
    float currentTime;
    public bool scene1Collided;

    // Use this for initialization
    void Start()
    {
        alert.enabled = false;
        crash1.enabled = false;
        popUp.enabled = false;

        scene1Collided = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.fixedTime - currentTime >= 1.3 && currentTime > 0)
        {
            //print after 2second 
            alert.enabled = true;
        }

        if (Time.fixedTime - currentTime >= 2.8 && currentTime > 0)
        {
            //print after 2second
            popUp.enabled = true;
        }

    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "pogBot")
        {
            print("collided pogbot");
            currentTime = Time.fixedTime;
            scene1Collided = true;

            crash1.enabled = true;
        }
    }
}
