using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SocialPlatforms;
using System.Collections;
using GooglePlayGames;
using DG.Tweening;


public class MainMenuController : MonoBehaviour {

	//	Main Menu class

	public static MainMenuController instance;

	[SerializeField]
	private int bestScore;

	//	UI
	[SerializeField]
	private Text bestScoreText;

	public GameObject swipeTutorialPanel;
	public GameObject tapTutorialPanel;
	public Text changedControlText;

	public bool audioIsMute;
	public bool controlsIsSwipe;
	private bool isLoggedInServices;


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

		if (ES2.Exists ("SwipeControl")) {
			controlsIsSwipe = ES2.Load<bool> ("SwipeControl");
		} else {
			controlsIsSwipe = true;
		}

		audioIsMute = false;


		//	Loging to google play game services
		PlayGamesPlatform.Activate ();

		if (!isLoggedInServices) {
			LoginServices ();
		} else {
			return;
		}

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

	public void ChangeControlsButton(){
		if (controlsIsSwipe) {
			controlsIsSwipe = false;
			ES2.Save (controlsIsSwipe, "SwipeControl");
			changedControlText.text = "TAP";
			DOTween.Rewind("changeControl");
			DOTween.Play("changeControl");

		} else {
			controlsIsSwipe = true;
			ES2.Save (controlsIsSwipe, "SwipeControl");
			changedControlText.text = "SWIPE";
			DOTween.Rewind("changeControl");
			DOTween.Play("changeControl");

		}
	}

	public void OpenTutorialPanel(){
		if (controlsIsSwipe) {
			swipeTutorialPanel.SetActive (true);
		} else {
			tapTutorialPanel.SetActive (true);
		}
	}

	public void LoginServices(){
		Social.localUser.Authenticate((bool success) => {
			isLoggedInServices = true;
		});
	}
		
}
