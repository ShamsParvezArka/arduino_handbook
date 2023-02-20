#include <LiquidCrystal.h>

const int register_select = 12;
const int enable          = 11;
const int d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(register_select, enable, d4, d5, d6, d7);

char *string[] = {
	"mama ", 
	"jhalmuri"
};

void setup(void)
{
	lcd.begin(16, 2);
}

void loop(void)
{
	for (size_t i = 0; i < sizeof(string) / 2; i++) {
		char *message = string[i];
		lcd.print(message);
		delay(500);
	}
	lcd.clear();
	delay(500);
}
