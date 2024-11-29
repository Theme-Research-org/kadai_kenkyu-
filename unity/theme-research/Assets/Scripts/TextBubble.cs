using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

[ExecuteAlways]
public class TextBubble : MonoBehaviour
{
    public TMP_Text TMPText { get; set; }
    
    [Header("Settings")]
    [TextArea(5,5)] public string text;
    [SerializeField] private float textSpeed = 8f;
    [SerializeField] private float displayTime = 4f;
    [SerializeField] private float maxWidth;
    [SerializeField] private float maxHeight;
    [Header("Assets")]
    [SerializeField] private GameObject bubbleAsset;
    
    private string _currentText;
    private float _elapsedTime;
    private LayoutElement _layout;
    
    void Awake()
    {
        TMPText = bubbleAsset.GetComponentInChildren<TMP_Text>();
        _layout = TMPText.GetComponent<LayoutElement>();
        _currentText = text;
        //if (!EditorApplication.isPlaying) return;
        
        bubbleAsset.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        AdjustSize();
        //if (!EditorApplication.isPlaying) return;
        
        _elapsedTime += Time.deltaTime;
        if (text != _currentText)
        {
            _currentText = text;
            bubbleAsset.SetActive(true);
            TMPText.SetText(text);
            TMPText.maxVisibleCharacters = 0;
            _elapsedTime = 0f;
        }
        else if (TMPText.maxVisibleCharacters < text.Length && _elapsedTime >= 1f / textSpeed)
        {
            TMPText.maxVisibleCharacters += 1;
            _elapsedTime -= 1f / textSpeed;
        }
        else if (bubbleAsset.activeSelf && _elapsedTime >= displayTime)
        {
            bubbleAsset.SetActive(false);
            text = "";
            _currentText = "";
        }
    }

    private void AdjustSize()
    {
        if (TMPText.preferredWidth > maxWidth && maxWidth > 0) _layout.preferredWidth = maxWidth;
        else _layout.preferredWidth = -1;
        if (TMPText.preferredHeight > maxHeight && maxHeight > 0) _layout.preferredHeight = maxHeight;
        else _layout.preferredHeight = -1;
    }
    
}
