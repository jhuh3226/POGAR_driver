using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionDetect : MonoBehaviour
{
    public bool collidedWithBus;
    // Use this for initialization
    void Start()
    {
        collidedWithBus = false;
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "bus")
        {
            collidedWithBus = true;
            print("collided with bus");
        }
    }
}
