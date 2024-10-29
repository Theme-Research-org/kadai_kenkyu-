using System;
using UnityEngine;

/// <summary>
/// 設定情報管理コンポーネント
/// </summary>
public class ConfigComponent : SingletonMonoBehaviour<ConfigComponent>
{
    private readonly string basePath = "Config/";

    [SerializeField] private ConfigEnvironment targetEnv = ConfigEnvironment.Development;
    private ApplicationConfigs config;

    new void Awake()
    {
        //シーンをまたいでも消さない
        DontDestroyOnLoad(gameObject);
    }

    /// <summary>
    /// Conf値
    /// </summary>
    public ApplicationConfigs Config
    {
        //configがnullならロードしてキャッシュする
        get { return config ?? (config = LoadConfig()); }
    }

    /// <summary>
    /// 環境別設定値読み込み
    /// </summary>
    /// <returns></returns>
    private ApplicationConfigs LoadConfig()
    {
        // 愚直にswitchで
        // 他にもっといい方法あるかも
        switch (targetEnv)
        {
            case ConfigEnvironment.Development:
                Debug.Log("Load 'Development' conf");
                return Resources.Load<ApplicationConfigs>(basePath + "Development");
            case ConfigEnvironment.Staging:
                Debug.Log("Load 'Staging' conf");
                return Resources.Load<ApplicationConfigs>(basePath + "Staging");
            case ConfigEnvironment.Production:
                return Resources.Load<ApplicationConfigs>(basePath + "Production");
            default:
                throw new ArgumentOutOfRangeException();
        }
    }
}
