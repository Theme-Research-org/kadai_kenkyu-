using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyConfigManager : MonoBehaviour
{
    public Canvas canvasPopUp { get; set; }
    public Animator animatorPopUp { get; set; }
    
    // Start is called before the first frame update
    void Awake()
    {
        MyGameManager.ConfigManager = this;
        canvasPopUp = GetComponentInParent<Canvas>();
        animatorPopUp = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
