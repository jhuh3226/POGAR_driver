using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scene3MoveWheel : MonoBehaviour
{
    public float RotationSpeed;
    public GameObject gameObContainingAlertCanvasAppearScript;

    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(Vector3.up * (RotationSpeed * Time.deltaTime));

        Scene3AlertCanvasAppear Scene3AlertCanvasAppearScript = gameObContainingAlertCanvasAppearScript.GetComponent<Scene3AlertCanvasAppear>();
        if (Scene3AlertCanvasAppearScript.scene3Collided == true)
        {
            RotationSpeed = 0;
        }
    }
}
