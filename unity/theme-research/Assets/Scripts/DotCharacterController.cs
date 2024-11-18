using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteAlways]
public class DotCharacterController : MonoBehaviour
{
    public TextBubble Bubble { get; set; }
    
    [SerializeField,Range(0,4)] private int initExpression;
    [SerializeField] private float newScale = 1f;
    
    private DotExpressionParameter _param;
    private RectTransform[] _objects;
    private readonly List<RectTransform> _objectsNew = new ();
    
    private void Awake()
    {
        Bubble = transform.GetComponent<TextBubble>();
        MyGameManager.CurrentCharacter = this;
        
        _param = GetComponentInChildren<DotExpressionParameter>();
        _objects = GetComponentsInChildren<RectTransform>();
        foreach (RectTransform rt in _objects)
        {
            if (rt != transform && !rt.CompareTag("IgnoreRect")) _objectsNew.Add(rt);
        }
    }
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
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
