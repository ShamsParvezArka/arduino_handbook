#include <LiquidCrystal.h>

const int registor_select = 12;
const int enable          = 11;
const int db4 = 5, db5 = 4, db6 = 3, db7 = 2; 

LiquidCrystal lcd(registor_select, enable, db4, db5, db6, db7);

void setup(void) {
	lcd.begin(16, 2);
	lcd.print("xrto");
}

void loop(void) {
	lcd.blink();
	delay(3000);
}
