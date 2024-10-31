using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;

public enum AnimationEnum
{
    None,
    FadeLoop,
}

public class AnimationFunc : MonoBehaviour
{
    [SerializeField] private AnimationEnum animationEnum;
    private SpriteRenderer _sprite;
    private const float Cycle = 2.4f;

    private string _animationName;
    private string _previousAnimation = "";
    private float _time = 0f;

    void Awake()
    {
        _animationName = animationEnum.ToString();
        _sprite = GetComponent<SpriteRenderer>();
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
        Destroy(_sprite);
    }

    private void FadeLoop()
    {
        float alpha = 0.5f * Mathf.Cos(_time / Cycle * 2 * Mathf.PI) + 0.5f;   // (-1 <= x <= 1) --> (0 >= x >= 1)

        Color color = _sprite.color;
        color.a = alpha;
        _sprite.color = color;
    }
}
