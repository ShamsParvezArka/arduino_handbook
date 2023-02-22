#include <LiquidCrystal.h>

const int register_select = 12;
const int enable          = 11;
const int db4 = 5, db5 = 4, db6 = 3, db7 = 2;

LiquidCrystal lcd(register_select, enable, db4, db5, db6, db7);

char string[] = "xrto";

void setup(void) {
	lcd.begin(16, 2);
	lcd.print(string);
}

void loop(void) {
	for (size_t cursor_position = 0; cursor_position < strlen(string); cursor_position++) {
		lcd.scrollDisplayLeft();
		delay(500);
	}

	for (size_t cursor_position = 0; cursor_position < strlen(string) + 16; cursor_position++) {
		lcd.scrollDisplayRight();
		delay(500);
	}

	for (size_t cursor_position = 0; cursor_position < 16; cursor_position++) {
		lcd.scrollDisplayLeft();
		delay(500);
	}
}
