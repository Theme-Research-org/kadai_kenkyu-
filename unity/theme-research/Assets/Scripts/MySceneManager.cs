using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MySceneManager : MonoBehaviour
{
    [SerializeField] private string firstScene;
    [SerializeField] private float firstWait = 1f;
    [SerializeField] private float fadeSpeed = 0.8f;
    [SerializeField] private Image background;
    [SerializeField] private TMP_Text text;
    [SerializeField] private Image pbBackground;
    [SerializeField] private Image pbFill;
    
    private bool _firstSceneLoaded;
    private bool _sceneLoading;
    private IEnumerator _activeCoroutine;

    void Awake()
    {
        MyGameManager.SceneManager = this;
    }
    
    // Start is called before the first frame update
    IEnumerator Start()
    {
        yield return FirstLoad();
    }

    private IEnumerator FirstLoad()
    {
        var async = SceneManager.LoadSceneAsync(firstScene, LoadSceneMode.Additive);
        if (async != null)
            while (!async.isDone) yield return null;
        SceneManager.SetActiveScene(SceneManager.GetSceneByName(firstScene));
        
        yield return new WaitForSeconds(firstWait);
        
        var color = background.color;
        do {
            var delta = Time.deltaTime;
            color.a = Math.Max(color.a - delta / fadeSpeed, 0f);
            background.color = color;
            yield return null;
        } while (color.a > 0f);
        background.enabled = false;
        _firstSceneLoaded = true;
    }

    public void SceneChange(string loadScene)
    {
        if (_activeCoroutine != null)
        {
            StopCoroutine(_activeCoroutine);
            _activeCoroutine = null;   // null埋めでCoroutineを破棄
        }
        _activeCoroutine = MyGameManager.SceneManager.LoadSceneWithScreen(loadScene);
        StartCoroutine(_activeCoroutine);
    }
    
    private IEnumerator LoadSceneWithScreen(string sceneName)
    {
        if (!_firstSceneLoaded || _sceneLoading) yield break;
        
        _sceneLoading = true;
        var currentScene = SceneManager.GetActiveScene();
        var asyncNew = SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Additive);
        if (asyncNew == null) yield break;
        while (!asyncNew.isDone) yield return null;
        SceneManager.SetActiveScene(SceneManager.GetSceneByName(sceneName));
        if (currentScene != gameObject.scene)
        {
            var asyncOld = SceneManager.UnloadSceneAsync(currentScene);
            while (asyncOld is not { isDone: true }) yield return null;
        }
        _sceneLoading = false;
    }
}
