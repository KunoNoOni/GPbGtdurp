using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MovePlayer : MonoBehaviour 
{
    public Text mySpeed;
    public AudioClip key1;
    public AudioClip key2;
    public AudioClip thump;
    public AudioClip rolling;
    public bool mainMenu;

    bool callPF;
    bool playKey1;
    bool onGround;
    float roundedSpeed;
    float speed;
    Vector3 myPosition;
    AudioSource asource;


    PlaceFlag pf;

	void Start () 
	{
        speed = 0;
        playKey1 = true;
        callPF = false;
        onGround = false;
        mainMenu = true;
        myPosition = this.transform.position;
        pf = GameObject.Find("FlagManager").GetComponent<PlaceFlag>();
        asource = GetComponent<AudioSource>();
	}
	
	void Update () 
    {
        if(this.transform.position.x < 16.8f && !mainMenu)
        {
            if(Input.GetButtonDown("Fire1") || Input.GetButtonDown("Fire2") || Input.GetKeyDown(KeyCode.Alpha1) || Input.GetKeyDown(KeyCode.Alpha2))
            {   
                speed += .5f;
                callPF = true;
                asource.pitch +=.02f;
                if(playKey1)
                {
                    playKey1 = false;
                    asource.clip = key1;
                    asource.Play();
                }
                else
                {
                    playKey1 = true;
                    asource.clip = key2;
                    asource.Play();
                }
            }
        }
        Debug.Log("mainMenu si "+mainMenu);
        roundedSpeed = Mathf.Round(speed * 10)/10;

        mySpeed.text = "Speed: "+roundedSpeed;
        if(speed > 0)
        {
            speed -= 1.5f*Time.deltaTime;
            if(asource.clip.name == "ballrolling3")
                asource.volume -= 0.09f*Time.deltaTime;
            this.transform.Translate(speed*Time.deltaTime,0,0);
            if(onGround)
            {
                onGround = false;
                asource.clip = rolling;
                asource.loop = true;
                asource.Play();
            }
        }

        if(speed <= 0 && callPF)
        {
            callPF = false;
            pf.placeFlag = true;
            asource.Stop();
            asource.loop = false;
        }
	}

    void OnCollisionEnter2D(Collision2D col)
    {
        if(col.gameObject.name == "floor")
        {
            asource.pitch = 1f;
            asource.clip = thump;
            asource.Play();
            if(speed > 0)
                onGround = true;
        }
    }

    public void ResetPlayer()
    {
        this.transform.position = new Vector3(myPosition.x,myPosition.y,myPosition.z);
        speed = 0;
        playKey1 = true;
        onGround = false;
        asource.volume = 1;
    }
}
