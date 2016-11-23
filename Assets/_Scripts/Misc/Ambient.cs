using UnityEngine;

public class Ambient : MonoBehaviour {


	public static Ambient instance;


	private void Awake(){

		if (instance == null) {
			instance = this;
		} else if (instance != null) {
			Destroy (gameObject);
		}
		DontDestroyOnLoad (gameObject);
	}
}
