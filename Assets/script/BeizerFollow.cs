﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeizerFollow : MonoBehaviour
{

    [SerializeField]
    private Transform[] routes;

    private int routeToGo;

    private float tParam;

    private Vector3 busPosition;

    private float speedModifier;

    private bool coroutineAllowed;

    public float rotationSpeed;

    public bool vehiclePassedPoint2;
    public bool vehiclePassedPoint3;

    private void Start()
    {
        routeToGo = 0;
        tParam = 0f;
        speedModifier = 0.3f;
        coroutineAllowed = true;
        //rotationSpeed = 3.0f;

        vehiclePassedPoint2 = false;
        vehiclePassedPoint3 = false;
    }

    public void Reset()
    {
        routeToGo = 0;
        tParam = 0f;
        speedModifier = 0.3f;
        coroutineAllowed = true;
    }

    private void Update()
    {
        if (coroutineAllowed)
        {
            StartCoroutine(GoByTheRoute(routeToGo));
        }

        //transform.rotation = Quaternion.Slerp(Quaternion.Euler(-90, 90, 0), Quaternion.Euler(-90, 130, 0), 10);
        //transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(-90, 170, 0), Time.deltaTime * rotationSpeed);

        print(vehiclePassedPoint2);
    }

    private IEnumerator GoByTheRoute(int routeNumber)
    {
        coroutineAllowed = false;

        Vector3 p0 = routes[routeNumber].GetChild(0).position;
        Vector3 p1 = routes[routeNumber].GetChild(1).position;
        Vector3 p2 = routes[routeNumber].GetChild(2).position;
        Vector3 p3 = routes[routeNumber].GetChild(3).position;

        while (tParam < 2)
        {
            tParam += Time.deltaTime * speedModifier;

            busPosition = Mathf.Pow(1 - tParam, 3) * p0 + 3 * Mathf.Pow(1 - tParam, 2) * tParam * p1 + 3 * (1 - tParam) * Mathf.Pow(tParam, 2) * p2 + Mathf.Pow(tParam, 3) * p3;

            transform.position = busPosition;

            //rotate bus
            if (transform.position.x > p1.x)
            {
                //print(transform.rotation);
                //print("start rotating");
                //transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(-90, 170, 0), Time.deltaTime * rotationSpeed);
                vehiclePassedPoint2 = true;
            }

            yield return new WaitForEndOfFrame();
        }

        if (transform.position.x > p2.x)
        {
            //print(transform.rotation);
            //print("start rotating");
            //transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(-90, 170, 0), Time.deltaTime * rotationSpeed);
            vehiclePassedPoint3 = true;
        }

        //tParam = 0f;


        // if there's new routine then it follows new route
        //routeToGo += 1;

        //if (routeToGo > routes.Length - 1)
        //    routeToGo = 0;

        //coroutineAllowed = true;

    }

}
