using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayAgain : MonoBehaviour 
{
    public GameObject panel;
    public GameObject panel2;

    MovePlayer mp;
	
    void Start()
    {
        mp = GameObject.Find("Player").GetComponent<MovePlayer>();
    }

    public void PlayButton()
    {
        panel2.SetActive(false);
        mp.mainMenu = false;
    }

    public void YesButton()
    {
        panel.SetActive(false);
        mp.ResetPlayer();
    }

    public void NoButton()
    {
        Application.Quit();
    }

}
