using UnityEngine;
using System.Collections;

public class BallScript : MonoBehaviour {

	public static BallScript instance;

	//	Ball start vertical force
	public float forceY = 8.3f;

	//	Ball color array (6 colors)
	public Color[] colors;

	private Rigidbody2D rb2d;
	private Material ballMat;


	void Awake(){

		if (instance == null) {
			instance = this;
		}

		//	Initialization
		rb2d = GetComponent<Rigidbody2D> ();
		ballMat = GetComponent<Renderer> ().material;
	}

	void Update(){

		//	Track maximum and minimum ball force

		//	If force more or equal than N it will stay N
		if (forceY >= 8.3f) {
			forceY = 8.3f;

		//	If force less or equal than N it will stay N
		} else if (forceY <= 5.5f) {
			forceY = 5.5f;
		}
	}

	void OnTriggerEnter2D(Collider2D target){

		//	Track ball behavior depending on active pallete state

		switch (target.tag) {

		case("Red"):
			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
				BallBehave (3);
			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
				BallBehave (2);
			} else {
				BallBehave (0);
			}
			break;

		case("Blue"):
			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
				BallBehave (3);
			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
				BallBehave (2);
			} else {
				BallBehave (0);
			}
			break;

		case("Green"):
			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
				BallBehave (3);
			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
				BallBehave (2);
			} else {
				BallBehave (0);
			}
			break;

		case("Yellow"):
			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
				BallBehave (3);
			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
				BallBehave (2);
			} else {
				BallBehave (0);
			}
			break;

		case("Purple"):
			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
				BallBehave (3);
			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
				BallBehave (2);
			} else {
				BallBehave (0);
			}
			break;

		case("Black"):
			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
				BallBehave (3);
			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
				BallBehave (2);
			} else {
				BallBehave (0);
			}
			break;
		}

//		if (target.tag == "Red") {
//			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
//				BallBehave (3);
//			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
//				BallBehave (2);
//			} else {
//				BallBehave (0);
//			}
//		}
//		if (target.tag == "Blue") {
//			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
//				BallBehave (3);
//			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
//				BallBehave (2);
//			} else {
//				BallBehave (0);
//			}
//		}
//		if (target.tag == "Green") {
//			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
//				BallBehave (3);
//			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
//				BallBehave (2);
//			} else {
//				BallBehave (0);
//			}
//		}
//		if (target.tag == "Yellow") {
//			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
//				BallBehave (3);
//			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
//				BallBehave (2);
//			} else {
//				BallBehave (0);
//			}
//		}
//		if (target.tag == "Purple") {
//			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
//				BallBehave (3);
//			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
//				BallBehave (2);
//			} else {
//				BallBehave (0);
//			}
//		}
//		if (target.tag == "Black") {
//			if (GameController.instance.currentState == GameController.PaletteState.TrianglePalette) {
//				BallBehave (3);
//			} else if (GameController.instance.currentState == GameController.PaletteState.SquarePalette) {
//				BallBehave (2);
//			} else {
//				BallBehave (0);
//			}
//		}
	}

	//	Changing ball velocity, ball color and ball tag
	void BallBehave(int disabledColors){
		rb2d.velocity = new Vector2 (0, forceY);
		ballMat.color = colors [Random.Range (0, colors.Length - disabledColors)];
		StartCoroutine (ChangeBallTag());
	}

	IEnumerator ChangeBallTag(){

		yield return new WaitForSeconds (0.0f);

		if (ballMat.color == colors [0]) {
			gameObject.tag = "BlueBall";
		}
		if (ballMat.color == colors [1]) {
			gameObject.tag = "GreenBall";
		}
		if (ballMat.color == colors [2]) {
			gameObject.tag = "RedBall";
		}
		if (ballMat.color == colors [3]) {
			gameObject.tag = "YellowBall";
		}
		if (ballMat.color == colors [4]) {
			gameObject.tag = "PurpleBall";
		}
		if (ballMat.color == colors [5]) {
			gameObject.tag = "BlackBall";
		}
	}
}
