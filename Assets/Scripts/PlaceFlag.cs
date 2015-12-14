using UnityEngine;
using System.Collections;

public class PlaceFlag : MonoBehaviour 
{
    public GameObject flag;
    public Transform player;
    public GameObject panel;
    public AudioClip clapping;
    public bool placeFlag = false;

    Vector3 pos;
    AudioSource asource;

    void Start()
    {
        asource = GetComponent<AudioSource>();
    }

    void Update () 
	{
        pos = new Vector3(player.transform.position.x, -3.72f,0);

        if(placeFlag)
        {
            placeFlag = false;
            Instantiate(flag,pos,Quaternion.identity);
            panel.SetActive(true);
            asource.Play();
        }
	}
}
