char yarim_adim[0] = {0x03,0x02,0x06,0x04,0x0c,0x08,0x09,0x01};
int i;
void main(){
TRISD=0X00;
PORTD=0X00;
TRISB=0XFF;

ADCON1 =0X0F;
CMCON = 0X07;

while(1){

	while(PORTB.F0){
	for(i=0;i<8;i++){
		PORTD  = yarim_Adim[i];
		delay_ms(100);
	
	}
	}
	
		while(PORTB.F1){
	for(i=7;i>-1;i--){
		PORTD  = yarim_Adim[i];
		delay_ms(100);
	
	}
	}
	delay_ms(10);
	}



}
