using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectManager : MonoBehaviour
{
    public GameObject effectPrefab;
    public float maxScale = 1.5f;
    public float duration = 0.3f;
    [SerializeField] private Camera mainCamera;

    private bool _bPressed;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Start");
        mainCamera = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButton(0) && !_bPressed)
        {
            Vector2 tapPos = mainCamera.ScreenToWorldPoint(Input.mousePosition);

            GameObject effect = Instantiate(effectPrefab, tapPos, Quaternion.identity, this.transform);
            Destroy(effect, duration);
            _bPressed = true;
            StartCoroutine(ScaleEffect(effect.transform));
        }
        else if (!Input.GetMouseButton(0) && _bPressed)
        {
            _bPressed = false;
        }
    }

    IEnumerator ScaleEffect(Transform effectT)
    {
        float elapsedTime = 0f;

        while (elapsedTime < duration)
        {
            if (!effectT)
            {
                yield break;
            }

            float scale = Mathf.Lerp(1f, maxScale, elapsedTime/duration);
            effectT.localScale = new Vector2(scale, scale);

            elapsedTime += Time.deltaTime;
            yield return null;
        }
    }
}
