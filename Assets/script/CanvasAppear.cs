using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanvasAppear : MonoBehaviour
{

    public Canvas watchOut;
    public GameObject gameObContainingBeizerFollowScript;

    //bool enableScriptAppear;

    // Use this for initialization
    void Start()
    {
        //enableScriptAppear = false;
        watchOut.enabled = false;

    }

    // Update is called once per frame
    void Update()
    {
        BeizerFollow beizerFollowScript = gameObContainingBeizerFollowScript.GetComponent<BeizerFollow>();

        if (Input.GetKeyDown(KeyCode.C))
        {
            //enableScriptAppear = true;
            watchOut.enabled = true;
            //print("watchOut canvas enabled");
        }
    }
}
