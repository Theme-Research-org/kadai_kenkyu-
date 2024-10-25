using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Cysharp.Threading.Tasks;
using TMPro;
using System;
using Unity.Android.Types;

public class WhisperSTTMemory : MonoBehaviour
{
    [SerializeField] private TMP_Text userVoiceText;

    public async UniTask TranscribeAudioAsync(byte[] audioData)
    {
        string url = "https://brw84z1qzb.execute-api.ap-northeast-1.amazonaws.com/WhisperReq_Py";

        using (UnityWebRequest request = new UnityWebRequest(url, "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(audioData);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/octet-stream");
            request.SetRequestHeader("X-Text-Only", "true");

            await request.SendWebRequest().ToUniTask();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError(request.error);
                return;
            }

            string jsonResponse = request.downloadHandler.text;
            WhisperResponseModel responseModel = JsonUtility.FromJson<WhisperResponseModel>(jsonResponse);
            Debug.Log("Request Completed");

            /*
            int freq = 24000;
            // Base64エンコードされた音声データをデコード
            byte[] audioBytes = Convert.FromBase64String(responseModel.audio);
            float[] audioFloats = ByteToFloatConverter.ConvertByteArrayToFloatArray(audioBytes);

            
            int sampleCount = audioFloats.Length;
            float lengthSeconds = (float)sampleCount / freq;
            Debug.Log(audioFloats);
            
            // デコードした音声データをAudioClipに変換
            AudioClip audioClip = AudioClip.Create("GeneratedAudioClip", sampleCount, 1, freq, false);
            audioClip.SetData(audioFloats, 0);

            AudioSource audioSource = gameObject.GetComponent<AudioSource>();
            audioSource.clip = audioClip;
            audioSource.Play();
            Debug.Log("Playing");
            */

            string recognizedText = responseModel.text;
            Debug.Log("Response: " + recognizedText);
            userVoiceText.SetText(recognizedText);
            
        }
    }
}

public class WhisperResponseModel
{
    public string audio;    // Store the base64-encoded audio data
    public string text;
}
