using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

[ExecuteAlways]
public class DotExpressionParameter : MonoBehaviour
{
    [Header("表情")]
    [SerializeField] private Sprite[] dotExpressions;
    
    private Image _image;
    
    // Start is called before the first frame update
    void Awake()
    {
        _image = GetComponent<Image>();
    }

    public void SetExpression(int exp)
    {
        _image.sprite = dotExpressions[exp];
    }
    
}

