const int port = 11;
int brightness = 0;
int fade_amount = 5;

void setup(void) {
	pinMode(port, OUTPUT);
}

void loop(void) 
{
	analogWrite(port, brightness);
	brightness += fade_amount;

	if (brightness < 0 || brightness > 255)
		fade_amount = -fade_amount;
	delay(30);
}
