using System.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonFunc : MonoBehaviour
{
    AudioClip myClip;
    AudioSource audioSource;
    string micName = "null";
    const int samplingFrequency = 44100;
    const int maxTime_s = 300;

    [SerializeField] private string _loadScene;
    [SerializeField] private AudioConvert audioConvert;
    [SerializeField] private Animator popUp;
    [SerializeField] private Collider2D panelC2D;

    void Start()
    {
        foreach (string device in Microphone.devices)
        {
            Debug.Log("Name: " + device);
            micName = device;
        }
    }

    public void StartButton()
    {
        Debug.Log("recording start");
        // deviceName: "null" -> Select default microphone
        myClip = Microphone.Start(deviceName: micName, loop: false, lengthSec: maxTime_s, frequency: samplingFrequency);
    }

    public void EndButton()
    {
        if (Microphone.IsRecording(deviceName: micName) == true)
        {
            Debug.Log("recording stopped");
            int position = Microphone.GetPosition(deviceName: micName);
            Microphone.End(deviceName: micName);

            Debug.Log("Raw Record: " + myClip.length);

            float[] soundData = new float[myClip.samples * myClip.channels];
            myClip.GetData(soundData, 0);
            float[] newData = new float[position * myClip.channels];
            for (int i = 0; i < newData.Length; i++)
            {
                newData[i] = soundData[i];
            }
            AudioClip newClip = AudioClip.Create(myClip.name, position, myClip.channels, myClip.frequency, false);
            newClip.SetData(newData, 0);
            AudioClip.Destroy(myClip);
            myClip = newClip;

            Debug.Log("Fixed Record: " + newClip.length);

            audioConvert.ProcessRecordedData(myClip);
        }
        else
        {
            Debug.Log("not recording");
        }
    }

    public void PlayButton()
    {
        Debug.Log("play");
        audioSource = gameObject.GetComponent<AudioSource>();
        audioSource.clip = myClip;
        audioSource.Play();
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
        panelC2D.enabled = true;
        popUp.SetBool("bPopup",true);
    }
    public async void ExitMenu()
    {
        popUp.SetBool("bPopup", false);
        await Task.Delay(800);
        panelC2D.enabled = false;
    }
}
