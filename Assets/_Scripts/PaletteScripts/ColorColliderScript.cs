using UnityEngine;
using System.Collections;
using DG.Tweening;

public class ColorColliderScript : MonoBehaviour {


	public string ballTag;


	void OnTriggerEnter2D(Collider2D other){

		if (other.tag == ballTag) {
			//DOTween.Rewind ("bounce");
			//DOTween.Play ("bounce");

			//	Background Bounce
			DOTween.Rewind("bsqs1");
			DOTween.Play("bsqs1");
			DOTween.Rewind("bsqs2");
			DOTween.Play("bsqs2");
			DOTween.Rewind("bsqs3");
			DOTween.Play("bsqs3");
			DOTween.Rewind("bsqm1");
			DOTween.Play("bsqm1");
			DOTween.Rewind("bsqm2");
			DOTween.Play("bsqm2");
			DOTween.Rewind("bsqm3");
			DOTween.Play("bsqm3");
			DOTween.Rewind("bsql1");
			DOTween.Play("bsql1");
			DOTween.Rewind("bsql2");
			DOTween.Play("bsql2");

			Debug.Log ("ADD POINT");
			GameController.instance.AddScore ();

			GameController.instance.CheckingBestScore ();

		} else {
			//	If player losses once, show him second chance panel
			if (GameController.instance.secondChanceCount == 0 && GameController.instance.score >= 30) {
				other.gameObject.transform.position = new Vector3 (0.0f, other.gameObject.transform.position.y, 4.0f);
				other.GetComponent<Rigidbody2D> ().isKinematic = true;
				//	POWER UP
				//GameObject.FindWithTag ("PowerUp").GetComponent<PowerUpBehavior> ().enabled = false;
				GameController.instance.ShowPreferedPanel (GameController.instance.secondChancePanel);
				DOTween.Play ("shakeCam");
				GameController.instance.secondChanceCount += 1;

			//	If player losses again, show him game over panel
			} else {
				Debug.Log ("GAME OVER");
				GameController.instance.LosseCounterAds ();
				GameController.instance.ShowPreferedPanel (GameController.instance.gameOverPanel);
				DOTween.Restart ("shakeCam");
				transform.parent.GetComponent<RotatePalette> ().enabled = false;
				//	POWER UP
				//GameObject.FindWithTag ("PowerUp").GetComponent<PowerUpBehavior> ().enabled = false;
				Destroy (other.gameObject);
				DOTween.Play ("BestScoreMove");
				DOTween.Play ("BestScoreScale");
				GameController.instance.ReportScore ();

			}

		}
	}
}
