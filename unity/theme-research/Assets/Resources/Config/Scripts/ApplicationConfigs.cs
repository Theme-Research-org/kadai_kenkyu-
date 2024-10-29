using System;
using UnityEngine;

[CreateAssetMenu(fileName = "ApplicationConfigs",menuName ="ScriptableObject/ApplicationConfigs")]
public class ApplicationConfigs : ScriptableObject
{
    //例としてPhoto設定,サーバ設定、NCMBの設定を扱う
    public PhotonConfig PhotonConfig;
    public ApiConfig ApiConfig;
    public NcmbConfig NcmbConfig;
}

[Serializable]
public class ApiConfig
{
    public string BaseUrl = "";
}

[Serializable]
public class PhotonConfig
{
    public string gameVersion = "";
}

[Serializable]
public class NcmbConfig
{
    public string ApplicationKey = "";
    public string ClientKey = "";
}
