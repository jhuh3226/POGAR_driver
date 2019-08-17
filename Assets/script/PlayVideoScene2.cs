//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;

//public class PlayVideoScene2 : MonoBehaviour
//{
//    public VideoPlayer videoPlayer1;
//    // Use this for initialization
//    void Start()
//    {
//        StartCoroutine(PlayVideo());
//    }

//    // Update is called once per frame
//    void Update()
//    {

//    }

//    IEnumerator PlayVideo()
//    {
//        videoPlayer1.Prepare();
//        waitForSeconds waitForSeconds = new waitForSeconds();
//        while(!videoPlayer1.isPrepared)
//        {
//            yield return waitForSeconds;
//            break;
//        }

//        videoPlayer1.Play();
//    }
//}
