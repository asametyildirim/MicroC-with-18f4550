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