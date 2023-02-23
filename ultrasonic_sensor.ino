const int trigger_pin = 7;
const int echo_pin    = 6;

long duration, cm;
//long microseconds_to_cm(long microseconds);

void setup(void) {
	Serial.begin(9600);
	pinMode(trigger_pin, OUTPUT);
	pinMode(echo_pin, INPUT);
}

void loop(void) {
	digitalWrite(trigger_pin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigger_pin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigger_pin, LOW);

	duration = pulseIn(echo_pin, HIGH);
	cm = (duration / 2) / 29;

	Serial.print(cm);
}

/* long microseconds_to_cm(long microseconds) {
	return microseconds / 29 / 2;
} */
