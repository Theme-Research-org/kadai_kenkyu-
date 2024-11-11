using UnityEngine;

[ExecuteAlways]
public class SafeAreaPadding : MonoBehaviour
{
    private RectTransform m_rectTransform;
    private DeviceOrientation m_postOrientation;

    private void Start()
    {
        m_rectTransform = GetComponent<RectTransform>();
    }

    private void Update()
    {
        SafeArea();
    }

    private void SafeArea()
    {
        // スマホの縦横状態が変わったか確認
        if (Input.deviceOrientation != DeviceOrientation.Unknown && m_postOrientation == Input.deviceOrientation)
        { return; }

        // スマホの縦横状態保持
        m_postOrientation = Input.deviceOrientation;

        ApplySafeArea();
    }

    // セーフエリアの適用
    private void ApplySafeArea()
    {
        var safeArea = Screen.safeArea;

        var anchorMin = safeArea.position;
        var anchorMax = safeArea.position + safeArea.size;
        anchorMin.x /= Screen.width;
        anchorMin.y /= Screen.height;
        anchorMax.x /= Screen.width;
        anchorMax.y /= Screen.height;
        m_rectTransform.anchorMin = anchorMin;
        m_rectTransform.anchorMax = anchorMax;
    }
}