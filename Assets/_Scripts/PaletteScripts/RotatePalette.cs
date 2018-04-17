using UnityEngine;
using System.Collections;


public class RotatePalette : MonoBehaviour {


	public float minSwipeDistX;

	public float speed = 55.0f;

	public float rotationAngle;

	private float rotation = 0.0f;
	private Quaternion qTo = Quaternion.identity;

	private Vector3 targetAngles;

	private Vector2 startPos;

	public bool isSwipeControll;

	//	PALETTE ROTATION
	[SerializeField]
	private float timeRandomRotate = 4.0f;


	void Update(){

		#if UNITY_EDITOR
		RotateOnClick ();
		#endif

//		if (ES2.Exists ("SwipeControl")) {
//			isSwipeControll = ES2.Load<bool> ("SwipeControl");
//		}

		RotateOnTouch ();

//		if (isSwipeControll == true) {
//			RotateOnSwipe ();
//		} else {
//			RotateOnTouch ();
//		}
			
		//	Palette starts random rotation if ball's position.y more or equal 2.2f
		//RandomPaletteBehavior();
	}

	//	Rotate palette by A and D buttons, for testing
	private void RotateOnClick(){

		if (Input.GetKeyDown(KeyCode.A)) {
			rotation += rotationAngle;
			qTo = Quaternion.Euler(0.0f, 0.0f, rotation);
		}
		if (Input.GetKeyDown(KeyCode.D)) {
			rotation -= rotationAngle;
			qTo = Quaternion.Euler(0.0f, 0.0f, rotation);
		}
		transform.rotation = Quaternion.RotateTowards(transform.rotation, qTo, speed * Time.deltaTime);
	}

	//	Rotate palette by touch left or right
	private void RotateOnTouch(){
		if (Input.GetMouseButtonDown(0)) {
			if (Input.mousePosition.x < Screen.width / 2) {
				rotation += rotationAngle;
				qTo = Quaternion.Euler (0.0f, 0.0f, rotation);
			}
			else if (Input.mousePosition.x > Screen.width / 2) {
				rotation -= rotationAngle;
				qTo = Quaternion.Euler (0.0f, 0.0f, rotation);
			}
		}
		transform.rotation = Quaternion.RotateTowards(transform.rotation, qTo, speed * Time.deltaTime);
	}
		
	//	Rotate palette by swiping your pretty fingers
//	private void RotateOnSwipe(){
//		qTo = Quaternion.Euler(0.0f, 0.0f, rotation);
//
//		//	Touch Rotate palette
//		if (Input.touchCount > 0) {
//			Touch touch = Input.touches[0];
//
//			switch (touch.phase) {
//
//			case TouchPhase.Began:
//				startPos = touch.position;
//				break;
//
//			case TouchPhase.Ended:
//				float swipeDistHorizontal = (new Vector3 (touch.position.x, 0, 0) - new Vector3 (startPos.x, 0, 0)).magnitude;
//
//				if (swipeDistHorizontal > minSwipeDistX) {
//					float swipeValue = Mathf.Sign (touch.position.x - startPos.x);
//
//					if (swipeValue > 0) {//MoveRight ();
//						rotation -= rotationAngle;
//					}else if (swipeValue < 0) {//MoveLeft ();
//						rotation += rotationAngle;
//					}
//					transform.rotation = Quaternion.RotateTowards(transform.rotation, qTo, speed * Time.deltaTime);
//				}
//				break;
//			}
//		}
//	}

//	void RandomPaletteBehavior(){
//		
//		timeRandomRotate -= Time.deltaTime;
//	
//		if (GameController.instance.currentState == GameController.PaletteState.DodecagonPalette && BallScript.instance.gameObject.transform.position.y >= 0.5f && timeRandomRotate <= 0.0f) {
//			
//			if(Random.value<0.5f){
//				rotation += rotationAngle;
//			} else{
//				rotation -= rotationAngle;
//			}
//
//			qTo = Quaternion.Euler (0.0f, 0.0f, rotation);
//			transform.rotation = Quaternion.RotateTowards (transform.rotation, qTo, 800.0f * Time.deltaTime);
//			timeRandomRotate = 4.0f;
//		}
//	}
}
