using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[ExecuteInEditMode]
public class BubbleSizeLimiter : MonoBehaviour
{
    [SerializeField] private RectTransform textTransform;
    [SerializeField] private float maxWidth;
    [SerializeField] private float maxHeight;
    
    private TMP_Text _text;
    private LayoutElement _layout;
    
    // Start is called before the first frame update
    void Start()
    {
        _text = textTransform.GetComponent<TMP_Text>();
        _layout = textTransform.GetComponent<LayoutElement>();
    }

    // Update is called once per frame
    void Update()
    {
        if (_text.preferredWidth > maxWidth && maxWidth > 0) _layout.preferredWidth = maxWidth;
        else _layout.preferredWidth = -1;
        if (_text.preferredHeight > maxHeight && maxHeight > 0) _layout.preferredHeight = maxHeight;
        else _layout.preferredHeight = -1;
    }
}
