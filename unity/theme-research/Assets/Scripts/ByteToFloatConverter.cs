using System;
using UnityEngine;

public class ByteToFloatConverter : MonoBehaviour
{
    public static float[] ConvertByteArrayToFloatArray(byte[] byteArray, int size = 2)  // monoなら2, stereoなら4
    {
        // byte配列の長さがsizeの倍数であることを確認 (1つのfloatはsizeバイト)
        if (byteArray.Length % size != 0)
        {
            throw new ArgumentException("byte配列の長さが不正です。");
        }

        // float配列の初期化
        int floatArrayLength = byteArray.Length / size;
        float[] floatArray = new float[floatArrayLength];
        
        // byte配列をfloat配列に変換
        for (int i = 0; i < floatArrayLength; i++)
        {
            // sizeバイトをfloatに変換
            short sampleInt = BitConverter.ToInt16(byteArray, i * size);    // sizeバイトをshort intに変換
            floatArray[i] = sampleInt / 32768f;     // short int範囲(-32768 to 32767)をfloat範囲(-1 to 1)に変換
        }
        return floatArray;
    }
}
