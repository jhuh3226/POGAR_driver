using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BusRotation : MonoBehaviour
{
    private float rotationSpeed;
    private float currentAngle;
    private float desiredAngle;


    public GameObject gameObContainingBeizerFollowScript;

    // Use this for initialization
    void Start()
    {
        //rotationSpeed = 0.002f;
        //currentAngle = 0.0f;
        //desiredAngle = 50.0f;
        rotationSpeed = 20f;
        currentAngle = 90.0f;
        desiredAngle = 150.0f;
    }

    // Update is called once per frame
    void Update()
    {
        //transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(-90, 90, 50), Time.deltaTime * rotationSpeed);
        //Mathf.LerpAngle
        BeizerFollow BeizerFollowScript = gameObContainingBeizerFollowScript.GetComponent<BeizerFollow>();

        if (BeizerFollowScript.vehiclePassedPoint2 == true)
        {
            //currentAngle = Mathf.Lerp(currentAngle, desiredAngle, Time.deltaTime * rotationSpeed);
            //currentAngle = Mathf.Lerp(currentAngle, desiredAngle, rotationSpeed);
            //transform.localEulerAngles = new Vector3(transform.localEulerAngles.x, transform.localEulerAngles.y, currentAngle);
            //transform.Rotate(Vector3.forward * (rotationSpeed * Time.deltaTime));
        }

        transform.Rotate(Vector3.forward * (rotationSpeed * Time.deltaTime));
        //print(transform.rotation.z);
    }
}
