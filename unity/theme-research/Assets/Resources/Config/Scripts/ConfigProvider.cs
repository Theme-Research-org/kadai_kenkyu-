﻿using UnityEngine;

/// <summary>
/// ゲーム中の設定情報を提供する
/// </summary>
public static class ConfigProvider
{
    private const string path = "Utilities/ConfigProvider";

    private static ConfigComponent _confgiComponent;

    private static ConfigComponent ConfigComponent
    {
        get
        {
            //ConfigComponentが存在しないなら新しく生成する
            if (_confgiComponent != null) return _confgiComponent;
            if (ConfigComponent.Instance == null)
            {
                var resource = Resources.Load(path);
                Object.Instantiate(resource);
            }
            _confgiComponent = ConfigComponent.Instance;
            return _confgiComponent;
        }
    }

    /// <summary>
    /// Photon設定
    /// </summary>
    public static PhotonConfig Photon
    {
        get { return ConfigComponent.Config.PhotonConfig; } 
    }

    /// <summary>
    /// APIサーバ設定
    /// </summary>
    public static ApiConfig Api
    {
        get { return ConfigComponent.Config.ApiConfig; }
    }

    /// <summary>
    /// NCMB設定
    /// </summary>
    public static NcmbConfig Ncmb
    {
        get { return ConfigComponent.Config.NcmbConfig; }
    }
}