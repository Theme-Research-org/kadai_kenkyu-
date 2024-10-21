using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Cysharp.Threading.Tasks;
using TMPro;

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

            await request.SendWebRequest().ToUniTask();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError(request.error);
                return;
            }

            string jsonResponse = request.downloadHandler.text;
            string recognizedText = "";
            try
            {
                recognizedText = JsonUtility.FromJson<WhisperResponseModel>(jsonResponse).text;
            }
            catch (System.Exception e)
            {
                Debug.LogError(e.Message);
            }

            Debug.Log("Response: " + recognizedText);
            userVoiceText.SetText(recognizedText);
        }
    }
}

public class WhisperResponseModel
{
    public string text;
}
