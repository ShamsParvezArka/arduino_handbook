#include <LiquidCrystal.h>

const int register_select = 12;
const int enable          = 11;
const int d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(register_select, enable, d4, d5, d6, d7);

char msg[] = "O";

void setup(void)
{
	lcd.begin(16, 2);
	lcd.print(msg);
}

void loop(void)
{
	for (int i = 0; i < 16 - strlen(msg); i++) {
		lcd.scrollDisplayRight();
		delay(200);
	}

	for (int i = 0; i < 16 - strlen(msg); i++) {
		lcd.scrollDisplayLeft();
		delay(200);
	}
}
