using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scene1MoveWheel : MonoBehaviour
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

        Scene1AlertCanvasAppear Scene1AlertCanvasAppearScript = gameObContainingAlertCanvasAppearScript.GetComponent<Scene1AlertCanvasAppear>();
        if(Scene1AlertCanvasAppearScript.scene1Collided == true)
        {
            RotationSpeed = 0;
        }
    }
}
