using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scene2BMoveWheel : MonoBehaviour
{
    public float RotationSpeed;
    public GameObject gameObContainingAlertCanvasAppear2Script;

    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(Vector3.up * (RotationSpeed * Time.deltaTime));

        Scene2AlertCanvasAppear Scene2AlertCanvasAppearScript = gameObContainingAlertCanvasAppear2Script.GetComponent<Scene2AlertCanvasAppear>();
        if (Scene2AlertCanvasAppearScript.scene2Collided == true)
        {
            RotationSpeed = 0;
        }
    }
}
