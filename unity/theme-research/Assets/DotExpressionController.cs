using UnityEngine;
using UnityEngine.Serialization;

public class DotExpressionController : MonoBehaviour
{
    [SerializeField, Range(0,4)] private int initExpression;
    [SerializeField] private float newScale = 1f;
    
    private DotExpressionParameter _param;
    private RectTransform[] _objects;
    
    // Start is called before the first frame update

    private void Awake()
    {
        _param = GetComponentInChildren<DotExpressionParameter>();
        _objects = GetComponentsInChildren<RectTransform>();
    }
    
    void Update()
    {
        _param.SetExpression(initExpression);
        foreach (var obj in _objects)
        {
            var scale = obj.localScale;
            scale.x = newScale;
            scale.y = newScale;
            obj.localScale = scale;
        }
    }
}
