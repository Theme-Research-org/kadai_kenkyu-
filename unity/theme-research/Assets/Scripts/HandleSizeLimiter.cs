using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[ExecuteAlways]
public class HandleSizeLimiter : MonoBehaviour
{
    [SerializeField] float sizeMin;
    [SerializeField] float sizeMax;
    [SerializeField] float sizeStep;
    private Scrollbar _scrollbar;
    // Start is called before the first frame update
    void Start()
    {
        _scrollbar = GetComponent<Scrollbar>();
    }

    // Update is called once per frame
    void Update()
    {
        if (_scrollbar.size < sizeMin) _scrollbar.size = sizeMin;
        if (_scrollbar.size > sizeMax) _scrollbar.size = sizeMax;
    }
}
