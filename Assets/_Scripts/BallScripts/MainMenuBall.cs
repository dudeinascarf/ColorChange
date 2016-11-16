using UnityEngine;
using System.Collections;
using DG.Tweening;

public class MainMenuBall : MonoBehaviour {

	//	Class only for dummy ball object in the MainMenu scene
	//	It's just jumping that's all

	[SerializeField]
	private float forceY = 8.0f;

	[SerializeField]
	private Rigidbody2D rb2d;


	void OnTriggerEnter2D(Collider2D target){

		if (target.tag == "Red") {
			DOTween.Rewind ("bounce");
			DOTween.Play ("bounce");
			rb2d.velocity = new Vector2 (0, forceY);
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

		}
	}
}
