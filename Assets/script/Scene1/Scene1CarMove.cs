using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scene1CarMove : MonoBehaviour
{
    public float speed;
    Vector3 startPosition;
    Vector3 endPosition;

    // Use this for initialization
    void Start()
    {
        startPosition = new Vector3(transform.position.x, transform.position.y, transform.position.z);
        endPosition = new Vector3(1.19f, transform.position.y, transform.position.z);

    }

    // Update is called once per frame
    void Update()
    {
        //transform.Translate(Vector3.left * speed * Time.deltaTime);
        transform.position = Vector3.Lerp(startPosition, endPosition, speed * Time.deltaTime);
    }
}
