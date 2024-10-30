using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{
    [SerializeField] private string targetScene;

    private Camera _mainCamera;
    private bool _inProgress;
    private bool _bPressed;

    void Awake()
    {
        PlayerPrefs.SetString("DeviceId", SystemInfo.deviceUniqueIdentifier);
    }

    // Start is called before the first frame update
    void Start()
    {
        _mainCamera = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButton(0))
        {
            if (!_inProgress && !_bPressed)
            {
                Ray ray = _mainCamera.ScreenPointToRay(Input.mousePosition);
                RaycastHit2D hit2d = Physics2D.Raycast(ray.origin, ray.direction);
                if (!hit2d)
                {
                    _inProgress = true;
                    SceneManager.LoadScene(targetScene);
                }
            }

            if (!_bPressed) _bPressed = true;
        }
        else if (_bPressed)
        {
            _bPressed = false;
        }
        
    }
}
