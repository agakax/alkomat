#include<avr/io.h>
#include<util/delay.h>

#define zero PORTD	= 0b00010100;
#define one PORTD	= 0b11010111;
#define two PORTD	= 0b01001100;
#define three PORTD	= 0b01000101;
#define four PORTD	= 0b10000111;
#define five PORTD	= 0b00100101;
#define six PORTD	= 0b00100100;
#define seven PORTD	= 0b01010111;
#define eight PORTD	= 0b00000100;
#define nine PORTD	= 0b00000101;

#define zerodot PORTD	= 0b00010000;
#define onedot PORTD	= 0b11010011;
#define twodot PORTD	= 0b01001000;
#define threedot PORTD	= 0b01000001;
#define fourdot PORTD	= 0b10000011;
#define fivedot PORTD	= 0b00100001;
#define sixdot PORTD	= 0b00100000;
#define sevendot PORTD	= 0b01010011;
#define eightdot PORTD	= 0b00000000;
#define ninedot PORTD	= 0b00000001;

unsigned char num_arr[10] = {0b00010100, 0b11010111, 0b01001100,0b01000101,
	0b10000111, 0b00100101, 0b00100100, 0b00000100, 0b00000101};
unsigned char num_dot_arr[10] = {0b00010000, 0b11010011, 0b01001000,0b01000001,
	0b10000011, 0b00100001, 0b00100000, 0b01010011, 0b00000001};

main()
{
//DDR port 1 wyjscia, 0 wejscia
//PORT wejscia przyciskow podciagniete do VCC
	DDRD = 0b11111111;
	DDRB = 0b00000111;

	while(1)
	{
		int i;
		for (i = 0; i < 10; i++) {
			PORTB = 0b11111100;
			PORTD = num_arr[i];
			_delay_ms(5000);

		}
	}
}
