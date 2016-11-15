using UnityEngine;
using System.Collections;

public class PowerUpBehavior : MonoBehaviour {

	[SerializeField]
	private float velocidadMax;

	[SerializeField]
	private float xMax;
	[SerializeField]
	private float xMin;
	[SerializeField]
	private float yMax;
	[SerializeField]
	private float yMin;

	[SerializeField]
	private float deactivateTime = 5.0f;
	[SerializeField]
	private float activateTime;

	[SerializeField]
	private bool isActive;
	[SerializeField]

	private float x;
	private float y;
	private float tiempo;
	private float angulo;


	void Start () {
		x = Random.Range(-velocidadMax, velocidadMax);
		y = Random.Range(-velocidadMax, velocidadMax);
		angulo = Mathf.Atan2(x, y) * (180 / 3.141592f) + 90;

		isActive = false;
		activateTime = Random.Range (30.0f, 60.0f);
		transform.position = new Vector3 (transform.position.x, transform.position.y, 10.0f);
	}

	void Update () {
		RandomMovement ();
		AddBallForcePowerUp ();
	}

	void RandomMovement() {
		
		tiempo += Time.deltaTime;

		if (transform.localPosition.x > xMax) {
			x = Random.Range(-velocidadMax, 0.0f);
			angulo = Mathf.Atan2(x, y) * (180 / 3.141592f) + 90;
			tiempo = 0.0f; 
		}
		if (transform.localPosition.x < xMin) {
			x = Random.Range(0.0f, velocidadMax);
			angulo = Mathf.Atan2(x, y) * (180 / 3.141592f) + 90;
			tiempo = 0.0f; 
		}
		if (transform.localPosition.y > yMax) {
			y = Random.Range(-velocidadMax, 0.0f);
			angulo = Mathf.Atan2(x, y) * (180 / 3.141592f) + 90;
			tiempo = 0.0f; 
		}
		if (transform.localPosition.y < yMin) {
			y = Random.Range(0.0f, velocidadMax);
			angulo = Mathf.Atan2(x, y) * (180 / 3.141592f) + 90;
			tiempo = 0.0f; 
		}

		transform.localPosition = new Vector3(transform.localPosition.x + x, transform.localPosition.y + y, transform.localPosition.z);
	}
		
	void AddBallForcePowerUp(){

		if (isActive) {
			if (Input.GetMouseButton (0)) {
				isActive = false;
				deactivateTime = 5.0f;
				transform.position = new Vector3 (transform.position.x, transform.position.y, 10.0f);
				BallScript.instance.forceY += 2.0f;
			}

			deactivateTime -= Time.deltaTime;
			if (deactivateTime <= 0) {
				isActive = false;
				deactivateTime = 5.0f;
				transform.position = new Vector3 (transform.position.x, transform.position.y, 10.0f);
			}
		}

		//	If power-up deactive time ended and active started
		if (!isActive) {
			activateTime -= Time.deltaTime;
			if (activateTime <= 0) {
				isActive = true;
				activateTime = Random.Range (30.0f, 60.0f);
				transform.position = new Vector3 (transform.position.x, transform.position.y, 0.0f);
			}
		}
	}
}
