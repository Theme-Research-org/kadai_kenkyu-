using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public enum AnimationEnum
{
    None,
    FadeLoop,
}

public class AnimationFunc : MonoBehaviour
{
    [SerializeField] private AnimationEnum _animationEnum;
    private TMP_Text _text;
    private float _cycle = 2.4f;

    public string _animationName;
    private string _previousAnimation = "";
    private float _time = 0f;

    void Awake()
    {
        _animationName = _animationEnum.ToString();
        _text = GetComponent<TMP_Text>();
    }

    void Update()
    {
        if (_animationName != _previousAnimation)
        {
            _time = 0f;
            _previousAnimation = _animationName;
        }
        else
        {
            _time += Time.deltaTime;
        }

        if (_animationName != "None")
        {
            SendMessage(_animationName, _time);
        }
    }

    void OnDestroy()
    {
        Destroy(_text);
    }

    private void FadeLoop()
    {
        float alpha = 0.5f * Mathf.Cos(_time / _cycle * 2 * Mathf.PI) + 0.5f;   // (-1 <= x <= 1) --> (0 >= x >= 1)

        Color color = _text.color;
        color.a = alpha;
        _text.color = color;
    }
}
