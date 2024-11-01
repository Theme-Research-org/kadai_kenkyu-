using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(RectTransform))]
public class AspectRatioController : MonoBehaviour
{
    public bool fitToWidth;  // Widthに合わせる場合はtrue、Heightに合わせる場合はfalse
    private RectTransform _rectTransform;
    private RectTransform _parentRectTransform;

    void Awake()
    {
        _rectTransform = GetComponent<RectTransform>();
        _parentRectTransform = transform.parent.GetComponent<RectTransform>();
    }

    void Update()
    {
        float newScale = _parentRectTransform.rect.height / _rectTransform.rect.height;
        _rectTransform.sizeDelta *= new Vector2(newScale, newScale);
    }
}