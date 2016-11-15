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

		}
	}
}
