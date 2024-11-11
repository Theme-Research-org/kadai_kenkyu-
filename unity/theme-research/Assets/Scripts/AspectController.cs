using UnityEngine;
using UnityEngine.UI;

[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class AspectRatioController : MonoBehaviour
{
    [SerializeField] private float zoomFactor = 1f;
    
    // public bool fitToWidth;  // Widthに合わせる場合はtrue、Heightに合わせる場合はfalse
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
        _rectTransform.sizeDelta *= new Vector2(newScale * zoomFactor, newScale * zoomFactor);
    }
}