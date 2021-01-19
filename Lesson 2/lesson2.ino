/* 山姆來分享 Lesson 2 */

vode setup() {
	pinMode(12, OUTPUT);			// initial digital pin-12 (LED1) as an output
	pinMode(13, OUTPUT);			// initial digital pin-13 (LED2) as an output
}

void loop() {
	digitalWrite(12, HIGH);			// turn the LED1 on
	delay(1000);				// wait for a second
	digitalWrite(12, LOW);			// turn the LED1 off
	
	digitalWrite(13, HIGH);			// turn the LED2 on
	delay(1000);				// wait for a second
	digitalWrite(13, LOW);			// turn the LED2 off
}	
