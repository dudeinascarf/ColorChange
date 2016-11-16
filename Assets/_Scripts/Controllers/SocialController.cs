using UnityEngine;
using System.Collections;

public class SocialController : MonoBehaviour {


	//	WHEN GAME IS CLOSED
	void OnApplicationPause(){
		OnLocalNotificationPress ();
	}

	//	RATE APP NOTIFICATION PANEL
	public void OnRateAppShow()
	{
		NativeToolkit.RateApp ("Rate This App", "Please take a moment to rate our Game", "Rate Now", "May Be Later", "No, Thanks", "343200656", null);
	}

	//	NOTIFICATION GAME
	public void OnLocalNotificationPress()
	{
		string message = "This is a local notification! This is a super long one to show how long we can make a notification. " +
			"On Android this will appear as an extended notification.";
		NativeToolkit.ScheduleLocalNotification("Hello there", message, 1, 1, "sound_notification", true, "ic_notification", "ic_notification_large");
	}


}
