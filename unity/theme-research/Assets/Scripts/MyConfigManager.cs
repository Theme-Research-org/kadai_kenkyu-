using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MyConfigManager : MonoBehaviour
{
    public Canvas CanvasPopUp { get; set; }
    public Collider2D PanelC2D { get; set; }
    public Transform PopUp { get; set; }

    public Button buttonClose;
    public TMP_Dropdown dropDownOutputDevice;
    
    private static readonly int BPopup = Animator.StringToHash("bPopup");
    
    private Animator _animatorPopUp;
    
    // Start is called before the first frame update
    void Awake()
    {
        MyGameManager.ConfigManager = this;
        CanvasPopUp = GetComponentInParent<Canvas>();
        PanelC2D = GetComponentInParent<Collider2D>();
        PopUp = transform;
        
        _animatorPopUp = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    public void OpenMenu()
    {
        if (!PanelC2D.enabled)
        {
            CanvasPopUp.enabled = true;
            PanelC2D.enabled = true;
            _animatorPopUp.SetBool(BPopup, true);
        }
    }
    public async void ExitMenu()
    {
        _animatorPopUp.SetBool(BPopup, false);
        await Task.Delay(750);
        CanvasPopUp.enabled = false;
        PanelC2D.enabled = false;
    }
}
