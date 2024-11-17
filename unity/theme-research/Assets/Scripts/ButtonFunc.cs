using System.Threading.Tasks;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class ButtonFunc : MonoBehaviour
{
    private static readonly int BPopup = Animator.StringToHash("bPopup");
    const int SamplingFrequency = 44100;
    const int MaxTimeS = 300;

    [SerializeField] private string loadScene;
    [SerializeField] private RectTransform popUp;
    [SerializeField] private Canvas canvasPopUp;
    [SerializeField] private Collider2D panelC2D;
    [SerializeField] private TMP_Dropdown dropdown;
    [SerializeField] private Transform settings;
    [SerializeField] private Toggle toggleRecord;
    
    private AudioConvert _audioConvert;
    private AudioClip _myClip;
    private AudioSource _audioSource;
    private string _micName = "";
    private readonly List<string> _micList = new List<string>();
    private Toggle _toggleApi;
    private Toggle _toggleTextOnly;
    private TMP_InputField _inputSpeaker;
    private Animator _animatorPopUp;

    void Awake()
    {
        _audioConvert = GetComponent<AudioConvert>();
    }
    
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
        
        if (popUp != null) 
        {
            _animatorPopUp = popUp.GetComponent<Animator>();
        }
    }

    public void StartButton()
    {
        if (toggleRecord.isOn)
        {
            dropdown.enabled = false;
            Debug.Log("recording start");
            // deviceName: "" (null) -> Select default microphone
            _micName = dropdown.value == 0 ? "" : _micList[dropdown.value];
            Debug.Log(dropdown.value + _micList[dropdown.value]);
            _myClip = Microphone.Start(deviceName: _micName, loop: false, lengthSec: MaxTimeS, frequency: SamplingFrequency);
        }
        else
        {
            if (Microphone.IsRecording(deviceName: _micName))
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

                string api = "vv";
                string voiceType = "3";
                _audioConvert.ProcessRecordedData(_myClip, api, voiceType, false);

                dropdown.enabled = true;
            }
            else
            {
                Debug.Log("not recording");
            }
        }

    }

    /* Integrated into StartButton
    public void EndButton()
    {
        if (Microphone.IsRecording(deviceName: _micName))
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
            _audioConvert.ProcessRecordedData(_myClip, api, voiceType, textOnly);

            dropdown.enabled = true;
        }
        else
        {
            Debug.Log("not recording");
        }
    }
    */

    public void PlayButton()
    {
        Debug.Log("play");
        _audioSource = gameObject.GetComponent<AudioSource>();
        _audioSource.clip = _myClip;
        _audioSource.Play();
    }

    public void SceneChange()
    {
        MyGameManager.SceneManager.SceneChange(loadScene);
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
            canvasPopUp.enabled = true;
            panelC2D.enabled = true;
            _animatorPopUp.SetBool(BPopup, true);
        }
    }
    public async void ExitMenu()
    {
        _animatorPopUp.SetBool(BPopup, false);
        await Task.Delay(750);
        canvasPopUp.enabled = false;
        panelC2D.enabled = false;
    }
}
