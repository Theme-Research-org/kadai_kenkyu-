using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class AudioConvert : MonoBehaviour 
{
    [SerializeField] private WhisperSTTMemory whisperSTTMemory;

    public async void ProcessRecordedData(AudioClip recordedClip)
    {
        // AudioClipをwavデータに変換してメモリに保存
        byte[] wavData = ConvertAudioClipToWav(recordedClip);

        // メモリ上のwavデータを使って音声書き起こしを行う
        if (whisperSTTMemory != null)
        {
            await whisperSTTMemory.TranscribeAudioAsync(wavData, "tts", "nova", false);
        }
        else
        {
            Debug.LogError("whisperSTTMemory is not initialized!");
        }
    }

    private byte[] ConvertAudioClipToWav(AudioClip clip)
    {
        int samples = clip.samples;
        int channels = clip.channels;
        int frequency = clip.frequency;

        float[] data = new float[samples * channels];
        clip.GetData(data, 0);

        byte[] wavData = new byte[samples * channels * 2 + 44];
        WriteHeader(wavData, clip);

        int offset = 44;
        for (int i = 0; i < data.Length; i++)
        {
            short value = (short)(data[i] * 32767);
            wavData[offset++] = (byte)(value & 0xFF);
            wavData[offset++] = (byte)((value >> 8) & 0xFF);
        }

        return wavData;
    }

    private void WriteHeader(byte[] wavData, AudioClip clip)
    {
        int samples = clip.samples;
        int channels = clip.channels;
        int frequency = clip.frequency;

        int byteRate = frequency * channels * 2;

        // RIFF header
        wavData[0] = (byte)'R';
        wavData[1] = (byte)'I';
        wavData[2] = (byte)'F';
        wavData[3] = (byte)'F';

        int fileSize = 36 + samples * channels * 2;
        wavData[4] = (byte)(fileSize & 0xFF);
        wavData[5] = (byte)((fileSize >> 8) & 0xFF);
        wavData[6] = (byte)((fileSize >> 16) & 0xFF);
        wavData[7] = (byte)((fileSize >> 24) & 0xFF);

        wavData[8] = (byte)'W';
        wavData[9] = (byte)'A';
        wavData[10] = (byte)'V';
        wavData[11] = (byte)'E';

        // fmt chunk
        wavData[12] = (byte)'f';
        wavData[13] = (byte)'m';
        wavData[14] = (byte)'t';
        wavData[15] = (byte)' ';

        wavData[16] = 16;
        wavData[17] = 0;
        wavData[18] = 0;
        wavData[19] = 0;

        wavData[20] = 1;
        wavData[21] = 0;

        wavData[22] = (byte)channels;
        wavData[23] = 0;

        wavData[24] = (byte)(frequency & 0xFF);
        wavData[25] = (byte)((frequency >> 8) & 0xFF);
        wavData[26] = (byte)((frequency >> 16) & 0xFF);
        wavData[27] = (byte)((frequency >> 24) & 0xFF);

        wavData[28] = (byte)(byteRate & 0xFF);
        wavData[29] = (byte)((byteRate >> 8) & 0xFF);
        wavData[30] = (byte)((byteRate >> 16) & 0xFF);
        wavData[31] = (byte)((byteRate >> 24) & 0xFF);

        wavData[32] = (byte)(channels * 2);
        wavData[33] = 0;

        wavData[34] = 16;
        wavData[35] = 0;

        // data chunk
        wavData[36] = (byte)'d';
        wavData[37] = (byte)'a';
        wavData[38] = (byte)'t';
        wavData[39] = (byte)'a';

        int dataSize = samples * channels * 2;
        wavData[40] = (byte)(dataSize & 0xFF);
        wavData[41] = (byte)((dataSize >> 8) & 0xFF);
        wavData[42] = (byte)((dataSize >> 16) & 0xFF);
        wavData[43] = (byte)((dataSize >> 24) & 0xFF);
    }
}

