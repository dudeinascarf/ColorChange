using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Advertisements;
using System.Collections;
using DG.Tweening;
//using AppAdvisory.social;


public class GameController : MonoBehaviour {


	public static GameController instance;

	public enum PaletteState{ TrianglePalette, SquarePalette, HexagonPalette, DodecagonPalette }

	public PaletteState currentState;

	//	All colors palettes on the scene
	public GameObject[] palettes;

	public AudioClip[] ballBounceSound;
	public AudioClip gameOverSound;

	//	Variable to count is the player uses second chance
	public int secondChanceCount;
	public int score;
	public int bestScore;

	//	UI
	public GameObject gameOverPanel;
	public GameObject secondChancePanel;
	public Text scoreText;
	public Text bestScoreText;
	public GameObject supportUsButton;
	public bool isSupportButtonUsed;

	//	Variable to decrease ball force
	[SerializeField]
	private float ballDecreaseForce = 0.5f;

	//	Variable to count for the next Ad to be played
	[SerializeField]
	private int losseCounter;


	void Awake(){
		if (instance == null) {
			instance = this;
		}
	}

	void Start(){

		//	First palette initialization
		SetCurrentState (PaletteState.TrianglePalette);

		//	Start decreasing ball speed 
		InvokeRepeating ("DecreaseBallBounceForce", 10.0f, 10.0f);

		secondChanceCount = 0;

		//	Score saving
		if (ES2.Exists ("BestScore")) {
			bestScore = ES2.Load<int> ("BestScore");
		} else {
			bestScore = score;
		}

		score = 0;

		//	UI
		scoreText.text = score.ToString ();
		bestScoreText.text = bestScore.ToString ();
		gameOverPanel.SetActive (false);
		secondChancePanel.SetActive (false);

		//	Losse counter saving
		if (ES2.Exists("LosseCounter")) {
			losseCounter = ES2.Load<int> ("LosseCounter");
		} else {
			losseCounter = 0;
		}

		//	REMOVED SUPPORT US BUTTON
		if (ES2.Exists ("SupportButton")) {
			supportUsButton.SetActive (false);
		} else {
			supportUsButton.SetActive (true);
		}
	}

	void Update(){

		//	Changing color palette and ball force depending on the score
		switch (score) {
		case 14:
			BallScript.instance.forceY = 8.3f;
			break;
		case 15:
			StartCoroutine (WaitAndChangePalette (PaletteState.SquarePalette));
			break;
		case 34:
			BallScript.instance.forceY = 8.3f;
			break;
		case 35:
			StartCoroutine (WaitAndChangePalette (PaletteState.HexagonPalette));
			break;
		case 59:
			BallScript.instance.forceY = 8.3f;
			break;
		case 60:
			StartCoroutine (WaitAndChangePalette (PaletteState.DodecagonPalette));
			break;
		}
	}

	public void SetCurrentState(PaletteState state){
		currentState = state;
	}

	//	Score
	public void AddScore(){
		score++;
		scoreText.text = score.ToString ();
		GetComponent<AudioSource> ().PlayOneShot (ballBounceSound [Random.Range (0, ballBounceSound.Length)]);
	}

	//	Best score
	public void CheckingBestScore(){
		if (score > bestScore) {
			bestScore = score;
			ES2.Save (bestScore, "BestScore");
		}
		bestScoreText.text = bestScore.ToString ();
	}

	// Show game over or second chance panel
	public void ShowPreferedPanel(GameObject panel){
		GetComponent<AudioSource> ().PlayOneShot (gameOverSound);
		StartCoroutine (WaitAndShowPanel (panel));
	}

	//	Close second chance panel and show game over panel
	public void GiveUpButton(){
		secondChancePanel.SetActive (false);
		gameOverPanel.SetActive (true);
		DOTween.Play ("BestScoreMove");
		DOTween.Play ("BestScoreScale");
	}
		
	//	Leaderboards button
	public void ShowLeaderboards(){
		Debug.Log ("Leaderboards");
		//LeaderboardManager.ShowLeaderboardUI ();
	}
	//	Report score to the leaderboard
	public void ReportScore(){
		//LeaderboardManager.ReportScore (bestScore);
	}

	IEnumerator WaitAndShowPanel(GameObject panel){
		yield return new WaitForSeconds (1.0f);
		panel.SetActive (true);
	}

	IEnumerator WaitAndChangePalette(PaletteState state){
		yield return new WaitForSeconds (0.4f);
		SetCurrentState (state);

		switch (state) {
		case(PaletteState.SquarePalette):
			palettes [0].SetActive (false);
			palettes [1].SetActive (true);
			palettes [2].SetActive (false);
			palettes [3].SetActive (false);
			break;
		case(PaletteState.HexagonPalette):
			palettes [0].SetActive (false);
			palettes [1].SetActive (false);
			palettes [2].SetActive (true);
			palettes [3].SetActive (false);
			break;
		case(PaletteState.DodecagonPalette):
			palettes [0].SetActive (false);
			palettes [1].SetActive (false);
			palettes [2].SetActive (false);
			palettes [3].SetActive (true);
			break;
		}
	}

	//	Decrease ball force on N number
	void DecreaseBallBounceForce(){
		BallScript.instance.forceY -= ballDecreaseForce;
	}

	//	Add losse counter and show simple ads
	public void LosseCounterAds(){
		if (losseCounter >= 3) {
			losseCounter = 0;
			ES2.Save (losseCounter, "LosseCounter");
		} else {
			losseCounter++;
			ES2.Save (losseCounter, "LosseCounter");
		}
	}

	//	REWARDED ADS
	public void WatchRewardedAdAndContinuePlaying(){
		if (Advertisement.IsReady("rewardedVideo")){
			var options = new ShowOptions { resultCallback = HandleShowResult };
			Advertisement.Show("rewardedVideo", options);
		}
	}

	private void HandleShowResult(ShowResult result){
		
		switch (result){

		case ShowResult.Finished:
			Debug.Log ("The ad was successfully shown.");

			//	When player watched an add, set the ball position up
			secondChancePanel.SetActive (false);
			BallScript.instance.GetComponent<Rigidbody2D> ().isKinematic = false;
			BallScript.instance.gameObject.transform.position = new Vector3 (0.0f, 2.0f, 1.0f);
			BallScript.instance.forceY = 8.3f;
			//	POWER UP
			//GameObject.FindWithTag ("PowerUp").GetComponent<PowerUpBehavior> ().enabled = true;

			break;
		case ShowResult.Skipped:
			Debug.Log("The ad was skipped before reaching the end.");
			break;
		case ShowResult.Failed:
			Debug.LogError("The ad failed to be shown.");
			break;
		}
	}

	public void PauseButton(){
		if (Time.timeScale >= 1.0f) {
			Time.timeScale = 0.0f;
		} else {
			Time.timeScale = 1.0f;
		}
	}

	//	Remove Support Us Button
	public void RemoveSupportUsButton(){
		isSupportButtonUsed = true;
		supportUsButton.SetActive (false);
		ES2.Save(isSupportButtonUsed, "SupportButton");
	}

}
