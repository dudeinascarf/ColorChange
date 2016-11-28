using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SocialPlatforms;
using System.Collections;
using GooglePlayGames;


public class MainMenuController : MonoBehaviour {

	//	Main Menu class

	public static MainMenuController instance;

	[SerializeField]
	private int bestScore;

	//	UI
	[SerializeField]
	private Text bestScoreText;

	public bool audioIsMute;
	private bool isConnectedToGoogleServices;


	void Awake(){
		if (instance == null) {
			instance = this;
		}

		//	Loging to google play game services
		PlayGamesPlatform.Activate ();
	}

	void Start(){
		if (ES2.Exists ("BestScore")) {
			bestScore = ES2.Load<int>("BestScore");
		} else {
			bestScore = 0;
		}
		bestScoreText.text = bestScore.ToString ();

		audioIsMute = false;

		ConnectToGoogleServices ();
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

	public bool ConnectToGoogleServices(){
		if (!isConnectedToGoogleServices) {
			Social.localUser.Authenticate ((bool success) => {
				isConnectedToGoogleServices = success;
			});
		}
		return isConnectedToGoogleServices;
	}
		
}
