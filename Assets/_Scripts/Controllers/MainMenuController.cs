using UnityEngine;
using UnityEngine.UI;
using System.Collections;


public class MainMenuController : MonoBehaviour {

	//	Main Menu class

	public static MainMenuController instance;

	[SerializeField]
	private int bestScore;

	//	UI
	[SerializeField]
	private Text bestScoreText;

	public bool audioIsMute;


	void Awake(){
		if (instance == null) {
			instance = this;
		}
	}

	void Start(){
		if (ES2.Exists ("BestScore")) {
			bestScore = ES2.Load<int>("BestScore");
		} else {
			bestScore = 0;
		}
		bestScoreText.text = bestScore.ToString ();

		audioIsMute = false;
	}

	public void AudioMute(){
		if (audioIsMute == true) {
			AudioListener.pause = false;
			audioIsMute = false;
		} else {
			AudioListener.pause = true;
			audioIsMute = true;
		}
	}
		
}
