using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropBall : MonoBehaviour
{

    public GameObject droppingBall;
    public GameObject gameObContainingBeizerFollowScript;

    // Use this for initialization
    void Start()
    {
        droppingBall.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        BeizerFollow beizerFollowScript = gameObContainingBeizerFollowScript.GetComponent<BeizerFollow>();

        if (Input.GetKeyDown("space"))
        {
            print("drop the ball");
            droppingBall.SetActive(true);
        }
    }
}
