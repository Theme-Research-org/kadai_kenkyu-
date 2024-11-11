using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Serialization;

[ExecuteAlways]
public class DotExpressionController : MonoBehaviour
{
    [SerializeField, Range(0,4)] private int initExpression;
    [SerializeField] private float newScale = 1f;
    
    private DotExpressionParameter _param;
    private RectTransform[] _objects;
    readonly List<RectTransform> _objectsNew = new ();
    
    // Start is called before the first frame update

    private void Awake()
    {
        _param = GetComponentInChildren<DotExpressionParameter>();
        _objects = GetComponentsInChildren<RectTransform>();
        foreach (RectTransform rt in _objects)
        {
            if (rt != transform && !rt.CompareTag("IgnoreRect")) _objectsNew.Add(rt);
        }
    }
    
    void Update()
    {
        _param.SetExpression(initExpression);
        foreach (var obj in _objectsNew)
        {
            var scale = obj.localScale;
            scale.x = newScale;
            scale.y = newScale;
            obj.localScale = scale;
        }
    }
}
