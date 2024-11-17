using System;
using System.Collections;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MySceneManager : MonoBehaviour
{
    [SerializeField] private string firstScene;
    [SerializeField] private float firstWait = 1f;
    [SerializeField] private float fadeSpeed = 0.8f;
    [SerializeField] private float progressSpeed = 0.4f;
    [SerializeField] private Image background;
    [SerializeField] private TMP_Text text;
    [SerializeField] private Slider progressBar;
    [SerializeField] private Image pbBackground;
    [SerializeField] private Image pbFill;
    [SerializeField] private Canvas[] canvasList;
    [SerializeField] private GameObject[] panelList;
    
    private bool _firstSceneLoaded;
    private bool _sceneLoading;
    private IEnumerator _activeCoroutine;

    void Awake()
    {
        MyGameManager.SceneManager = this;
        SetAlpha(ref background, 1f);
        SetAlpha(ref text, 0f);
        SetAlpha(ref pbBackground, 0f);
        SetAlpha(ref pbFill, 0f);
        progressBar.value = 0f;
    }
    
    // Start is called before the first frame update
    IEnumerator Start()
    {
        _activeCoroutine = FirstLoad();
        yield return _activeCoroutine;
    }

    private static void SetAlpha<T>(ref T image, float alpha)
        where T : Graphic
    {
        var color = image.color;
        color.a = alpha;
        image.color = color;
    }

    /*
    private static float AddAlpha<T>(ref T image, float amount)
        where T : Graphic
    {
        var color = image.color;
        color.a += amount;
        image.color = color;
        return color.a;
    }
    */

    private IEnumerator FirstLoad()
    {
        if (_firstSceneLoaded) yield break;
        var async = SceneManager.LoadSceneAsync(firstScene, LoadSceneMode.Additive);
        if (async == null) yield break;
        yield return new WaitUntil( () => async.isDone );
        var sceneByName = SceneManager.GetSceneByName(firstScene);
        SceneManager.SetActiveScene(sceneByName);
        var cam = Camera.main;
        Debug.Log(cam.name);
        foreach (var canvas in canvasList)
        {
            canvas.worldCamera = cam;
        }
        TogglePanel(firstScene);
        
        yield return new WaitForSeconds(firstWait);
        
        var alpha = 1f;
        do {
            alpha = Math.Max(alpha - Time.deltaTime / fadeSpeed, 0f);
            SetAlpha(ref background, alpha);
            yield return null;
        } while (alpha > 0f);
        background.enabled = false;
        _firstSceneLoaded = true;
    }

    private void TogglePanel(string panelName)
    {
        foreach (var panel in panelList)
        {
            panel.SetActive(panel.name == panelName);
        }
    }

    public void SceneChange(string loadScene)
    {
        if (!_firstSceneLoaded || _sceneLoading)
        {
            return;
        }
        if (_activeCoroutine != null)
        {
            StopCoroutine(_activeCoroutine);
            _activeCoroutine = null;   // null埋めでCoroutineを破棄
        }
        _activeCoroutine = MyGameManager.SceneManager.LoadSceneWithScreen(loadScene);
        StartCoroutine(_activeCoroutine);
    }
    
    private IEnumerator LoadSceneWithScreen(string newSceneName)
    {
        _sceneLoading = true;
        background.enabled = true;
        var alphaStart = 0f;
        do {
            alphaStart = Math.Min(alphaStart + Time.deltaTime / fadeSpeed, 1f);
            SetAlpha(ref background, alphaStart);
            SetAlpha(ref text, alphaStart);
            SetAlpha(ref pbBackground, alphaStart);
            SetAlpha(ref pbFill, alphaStart);
            yield return null;
        } while (alphaStart < 1f);
        
        var oldScene = SceneManager.GetActiveScene();
        if (oldScene != gameObject.scene)
        {
            var asyncOld = SceneManager.UnloadSceneAsync(oldScene);
            yield return new WaitUntil( () => asyncOld is { isDone: true } );
        }
        
        var asyncNew = SceneManager.LoadSceneAsync(newSceneName, LoadSceneMode.Additive);
        if (asyncNew == null) yield break;
        var startValue = 0f;
        var targetValue = 0f;
        var animDelta = 0f;
        while (progressBar.value < 1f)
        {
            if ((asyncNew.progress / 0.9f - targetValue >= 0.01f || asyncNew.progress >= 0.9f) && targetValue < 1f)
            {
                startValue = progressBar.value;
                targetValue = asyncNew.progress / 0.9f;
                animDelta = 0f;
            }
            animDelta += Time.deltaTime;
            progressBar.value = startValue + (targetValue - startValue) * Mathf.Sin(Mathf.Min(animDelta / progressSpeed, 1f) * 0.5f * Mathf.PI);
            yield return null;
        }
        SceneManager.SetActiveScene(SceneManager.GetSceneByName(newSceneName));
        TogglePanel(newSceneName);
        yield return new WaitForSeconds(0.4f);
        
        var alphaEnd = 1f;
        do {
            alphaEnd = Math.Max(alphaEnd - Time.deltaTime / fadeSpeed, 0f);
            SetAlpha(ref background, alphaEnd);
            SetAlpha(ref text, alphaEnd);
            SetAlpha(ref pbBackground, alphaEnd);
            SetAlpha(ref pbFill, alphaEnd);
            yield return null;
        } while (alphaEnd > 0f);

        progressBar.value = 0f;
        background.enabled = false;
        _sceneLoading = false;
    }
}
