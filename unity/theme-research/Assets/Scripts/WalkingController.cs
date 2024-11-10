using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WalkingController : MonoBehaviour
{
    private static readonly int IsWalkingHash = Animator.StringToHash("isWalking");
    [SerializeField] private bool walking;
    [SerializeField] private Animator animator;

    private bool _oldWalking;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (walking != _oldWalking)
        {
            _oldWalking = walking;
            animator.SetBool(IsWalkingHash, walking);
        }
    }
}
