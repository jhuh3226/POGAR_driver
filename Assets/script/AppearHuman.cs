using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AppearHuman : MonoBehaviour
{
    public GameObject human;
    // Use this for initialization
    void Start()
    {
        human.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        //if (Input.GetKeyDown(KeyCode.A))
        if (Input.GetKeyDown("space"))
        {
            //enableScriptAppear = true;
            human.SetActive(true);
        }
    }
}
