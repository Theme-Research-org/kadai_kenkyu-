using System.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using TMPro;
using UnityEngine.UI;

public class ButtonFunc : MonoBehaviour
{
    private static readonly int BPopup = Animator.StringToHash("bPopup");
    const int samplingFrequency = 44100;
    const int maxTime_s = 300;

    [SerializeField] private string _loadScene;
    [SerializeField] private AudioConvert audioConvert;
    [SerializeField] private Animator popUp;
    [SerializeField] private Collider2D panelC2D;
    [SerializeField] private TMP_Dropdown dropdown;
    [SerializeField] private Transform settings;

    private AudioClip _myClip;
    private AudioSource _audioSource;
    private string _micName = "";
    private readonly List<string> _micList = new List<string>();
    private Toggle _toggleApi;
    private Toggle _toggleTextOnly;
    private TMP_InputField _inputSpeaker;

    void Start()
    {
        _micList.Add("Use default device");
        foreach (string device in Microphone.devices)
        {
            Debug.Log("Name: " + device);
            _micList.Add(device);
        }
        if (dropdown != null)
            dropdown.AddOptions(_micList);

        if (settings != null)
        {
            _toggleApi = settings.Find("ToggleApi").GetComponent<Toggle>();
            _toggleTextOnly = settings.Find("ToggleTextOnly").GetComponent<Toggle>();
            _inputSpeaker = settings.Find("InputSpeaker").GetComponent<TMP_InputField>();
        }
    }

    public void StartButton()
    {
        dropdown.enabled = false;
        Debug.Log("recording start");
        // deviceName: "" (null) -> Select default microphone
        _micName = dropdown.value == 0 ? "" : _micList[dropdown.value];
        Debug.Log(dropdown.value + _micList[dropdown.value]);
        _myClip = Microphone.Start(deviceName: _micName, loop: false, lengthSec: maxTime_s, frequency: samplingFrequency);
    }

    public void EndButton()
    {
        if (Microphone.IsRecording(deviceName: _micName) == true)
        {
            Debug.Log("recording stopped");
            int position = Microphone.GetPosition(deviceName: _micName);
            Microphone.End(deviceName: _micName);

            Debug.Log("Raw Record: " + _myClip.length);

            float[] soundData = new float[_myClip.samples * _myClip.channels];
            _myClip.GetData(soundData, 0);
            float[] newData = new float[position * _myClip.channels];
            for (int i = 0; i < newData.Length; i++)
            {
                newData[i] = soundData[i];
            }
            AudioClip newClip = AudioClip.Create(_myClip.name, position, _myClip.channels, _myClip.frequency, false);
            newClip.SetData(newData, 0);
            Destroy(_myClip);
            _myClip = newClip;

            Debug.Log("Fixed Record: " + newClip.length);

            string api = _toggleApi.isOn ? "vv" : "tts";
            string voiceType = _inputSpeaker.text == "" ? "nova" : _inputSpeaker.text;
            bool textOnly = _toggleTextOnly.isOn;
            audioConvert.ProcessRecordedData(_myClip, api, voiceType, textOnly);

            dropdown.enabled = true;
        }
        else
        {
            Debug.Log("not recording");
        }
    }

    public void PlayButton()
    {
        Debug.Log("play");
        _audioSource = gameObject.GetComponent<AudioSource>();
        _audioSource.clip = _myClip;
        _audioSource.Play();
    }

    public void SceneChange()
    {
        SceneManager.LoadScene(_loadScene);
    }

    public void Exit()
    {
        #if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
        #else
            Application.Quit();
        #endif
    }

    public void OpenMenu()
    {
        if (!panelC2D.enabled)
        {
            panelC2D.enabled = true;
            popUp.SetBool(BPopup, true);
        }
    }
    public async void ExitMenu()
    {
        popUp.SetBool(BPopup, false);
        await Task.Delay(800);
        panelC2D.enabled = false;
    }
}
