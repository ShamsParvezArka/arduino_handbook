#include <Keypad.h>

const byte ROW = 4;
const byte COL = 4;

char custom_key[ROW][COL] = {
	{'1', '2', '3', 'A'},
	{'4', '5', '6', 'B'},
	{'7', '8', '9', 'C'},
	{'*', '0', '#', 'D'},
}

byte row_pins[ROW] = {13, 12, 11, 10};
byte col_pins[COL] = {9,   8,  7,  6};

// makeKeymap(vec2_custom_key);
// Keypad(makeKeyMap(vec2_custom_key<char>), vec_row_pins<byte>, vec_col_pins<byte>, ROW<byte>, COL<byte>);
Keypad custom_keypad = Keypad(makeKeymap(custom_key), row_pins, col_pins, ROW, COL);

void setup(void)
{
	Serial.begin(9600);
}

void loop(void)
{
	char ch = custom_keypad.getKey();

	if (ch) 
		Serial.println(ch);
}
