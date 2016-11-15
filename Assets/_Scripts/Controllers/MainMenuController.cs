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
	}
		
}
