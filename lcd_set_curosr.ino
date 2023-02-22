#include <LiquidCrystal.h>

const int register_select = 12;
const int enable          = 11;
const int d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(register_select, enable, d4, d5, d6, d7);


void setup(void)
{
	lcd.begin(16, 2);
}

void loop(void)
{
	lcd.setCursor(2, 2);
	lcd.write("hello");
}
