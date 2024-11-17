using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[ExecuteAlways]
public class TextBubble : MonoBehaviour
{
    [Header("Settings")]
    [SerializeField,TextArea(5,5)] private string text;
    [SerializeField] private float maxWidth;
    [SerializeField] private float maxHeight;
    [Header("Assets")]
    [SerializeField] private TMP_Text textAsset;
    
    private TMP_Text _text;
    private LayoutElement _layout;
    
    void Awake()
    {
        _text = textAsset.GetComponent<TMP_Text>();
        _layout = _text.GetComponent<LayoutElement>();
    }

    // Update is called once per frame
    void Update()
    {
        _text.SetText(text);
        
        if (_text.preferredWidth > maxWidth && maxWidth > 0) _layout.preferredWidth = maxWidth;
        else _layout.preferredWidth = -1;
        if (_text.preferredHeight > maxHeight && maxHeight > 0) _layout.preferredHeight = maxHeight;
        else _layout.preferredHeight = -1;
    }

    public void SetText(string t)
    {
        
    }
}
