using UnityEngine;
using System.Collections;
using DG.Tweening;

public class ColorColliderScript : MonoBehaviour {


	public string ballTag;


	void OnTriggerEnter2D(Collider2D other){

		if (other.tag == ballTag) {
			//DOTween.Rewind ("bounce");
			//DOTween.Play ("bounce");
			Debug.Log ("ADD POINT");
			GameController.instance.AddScore ();

			GameController.instance.CheckingBestScore ();

		} else {
			//	If player losses once, show him second chance panel
			if (GameController.instance.secondChanceCount == 0 && GameController.instance.score >= 15) {
				other.gameObject.transform.position = new Vector3 (0.0f, other.gameObject.transform.position.y, 4.0f);
				other.GetComponent<Rigidbody2D> ().isKinematic = true;
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
				Destroy (other.gameObject);
				DOTween.Play ("BestScoreMove");
				DOTween.Play ("BestScoreScale");

			}

		}
	}
}
