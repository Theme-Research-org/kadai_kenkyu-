using System.Collections;
using System.Collections.Generic;
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
    public string joy;
    public string trust;
    public string fear;
    public string anger;
    public string sadness;
    public string disgust;
    public string surprise;
    public string anticipation;

    public string Join(string sep = ",")
    {
        return joy + sep + trust + sep + fear + sep + anger + sep + sadness + sep + disgust + sep + surprise + sep + anticipation; 
    }
}
