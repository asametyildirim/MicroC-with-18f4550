# Basic to Advanced Microcontroller with ASametYildirim 
## _MicroC with Pic 18f4550_



PIC18F4550 is a microprocessor manufactured by Microchip Technology. This microprocessor has many features and can be used in different projects. For example, designing a USB device, designing a control panel, or designing an IoT device.

- 32 KB program memory
- 2 KB RAM memory
- USB 2.0 support
- 12-bit Analog-to-Digital Converter (ADC)
- 5 Volt tolerance I/O pins
- 4 PWM outputs


## Before You Start


Whether any port is an input or an output is determined by TRIS.
**Example:** (TRISB = 0x00; //All ports of B set as output )


## First Project
There is a very favorite word. Lighting LED lights up the world.Let's make a project that lights up when the button is pressed.
```C
void main(){
trisb = 0x00;
portb = 0x00;
trisc=0xff;
portc = 0x00;

while(1){
	if (RC0_bit == 1) {
             while(RC0_bit);
	     RB0_bit = 1;
	}
	if (RC1_bit == 1){
	     while(RC1_bit);
	     RB1_bit = 1;
	}
}
}
```
![](https://i.imgur.com/Tz72L9q.gif)


