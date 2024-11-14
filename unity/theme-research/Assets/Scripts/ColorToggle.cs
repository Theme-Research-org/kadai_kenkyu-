using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ColorToggle : MonoBehaviour
{
    [SerializeField] private bool isOn;
    [SerializeField] private Color colorOn = Color.white;
    [SerializeField] private Color colorOff = Color.gray;

    private Image _image;

    private void Awake()
    {
        _image = GetComponent<Image>();
    }

    void Update()
    {
        _image.color = isOn ? colorOn : colorOff;
    }

    public void Toggle(Toggle toggle)
    {
        isOn = toggle.isOn;
    }
}
