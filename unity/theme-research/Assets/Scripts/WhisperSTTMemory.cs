using UnityEngine;
using UnityEngine.Networking;
using Cysharp.Threading.Tasks;
using TMPro;
using System;
using System.Text;

public class WhisperSTTMemory : MonoBehaviour
{
    [SerializeField] private TMP_Text userVoiceText;
    const string URL = "https://brw84z1qzb.execute-api.ap-northeast-1.amazonaws.com/WhisperReq_Py";

    public async UniTask TranscribeAudioAsync(byte[] audioData, string api, string voiceType, bool textOnly)
    {
        WhisperRequestModel whisperRequestModel = new WhisperRequestModel
        {
            UserId = PlayerPrefs.GetString("DeviceId"),
            AudioData = Convert.ToBase64String(audioData)
        };
        string payload = JsonUtility.ToJson(whisperRequestModel);
        byte[] postData = Encoding.UTF8.GetBytes(payload);
        
        using (UnityWebRequest request = new UnityWebRequest(URL, "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(postData);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("x-voice-api", api);
            request.SetRequestHeader("x-voice-type", voiceType);
            request.SetRequestHeader("x-text-only", textOnly.ToString());

            await request.SendWebRequest().ToUniTask();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError(request.error);
                return;
            }

            string jsonResponse = request.downloadHandler.text;
            Debug.Log(jsonResponse);
            WhisperResponseModel responseModel = JsonUtility.FromJson<WhisperResponseModel>(jsonResponse);
            Debug.Log("Request Completed");

            if (!textOnly)
            {
                const int freq = 24000;
                // Base64エンコードされた音声データをデコード
                byte[] audioBytes = Convert.FromBase64String(responseModel.audio);
                float[] audioFloats = ByteToFloatConverter.ConvertByteArrayToFloatArray(audioBytes);
                int sampleCount = audioFloats.Length;

                // デコードした音声データをAudioClipに変換
                AudioClip audioClip = AudioClip.Create("GeneratedAudioClip", sampleCount, 1, freq, false);
                audioClip.SetData(audioFloats, 0);

                AudioSource audioSource = gameObject.GetComponent<AudioSource>();
                audioSource.clip = audioClip;
                audioSource.Play();
                Debug.Log("Playing");
            }
            Debug.Log(responseModel.input);
            string recognizedText = responseModel.output.text;
            WhisperEmotion recognizedEmotion = responseModel.output.emotion;
            Debug.Log("Response Text: " + recognizedText);
            Debug.Log("Emotions: (" + recognizedEmotion.Join(", ") + ")");
            MyGameManager.CurrentCharacter.Bubble.text = recognizedText;
        }
    }
}
