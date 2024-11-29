using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

[System.Serializable]
public class WhisperRequestModel
{
    public string UserId;
    public string AudioData;
}

[System.Serializable]
public class WhisperResponseModel
{
    public string audio;    // Store the base64-encoded audio data
    public string input;
    public WhisperOutput output;
    public string error;
}

[System.Serializable]
public class WhisperOutput
{
    public WhisperEmotion emotion;
    public string text;
}

[System.Serializable]
public class WhisperEmotion
{
    public int joy;
    public int trust;
    public int fear;
    public int anger;
    public int sadness;
    public int disgust;
    public int surprise;
    public int anticipation;

    public string Join(string separator = ",")
    {
        int[] array = { joy, trust, fear, anger, sadness, disgust, surprise, anticipation };
        var result = string.Join(separator, array);
        return result;
    }

    public string MaxParam()
    {
        var result = joy > trust ? "joy" : 
            trust > fear ? "trust" : 
            fear > anger ? "fear" : 
            anger > sadness ? "anger" : 
            sadness > disgust ? "sadness" :
            disgust > surprise ? "disgust" : 
            surprise > anticipation ? "surprise" : "anticipation";

        return result;
    }
    
}
