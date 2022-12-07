unsigned short duty_cycle_orani = 128; 

  

void init(){ 

ADCON1 = 0x0F; //AN pinleri dijital olarak ayarlandı 

CMCON = 0x07; //Karşılaştırıcılar pasif oldu 

  

trisb = 0xFF; //B’nin tüm portları giriş olarak ayarlandı 

trisc = 0xFF; //C’nin tüm portları giriş olarak ayarlandı 

portb = 0x00; //B’nin tüm portları sıfırlandı 

portc = 0x00; //C’nin tüm portları sıfırlandı 

  

PWM1_Init(500);  //PWM için gerekli 

PWM1_Set_Duty(100); //PWM için gerekli 

PWM1_Start(); //başlatıldı 

} 

  

void main() { 

init(); //Yukarıdaki fonksiyon çağırıldı 

while(1){ //Sonsuz döngü başlatıldı 

   if(portb.RB1){ //B’nin 1 portunda giriş varsa (sağa döndürme butonu) 

     portc.rc0=1; //sağa döndür 

     portc.rc1=0; 

   } 

   if(portb.RB2){ //B’nin 2 portunda giriş varsa (sola döndürme butonu) 

     portc.rc0=0; 

     portc.rc1=1; //sola döndür 

   } 

   if(portb.RB3){ //B’nin 2 portunda giriş varsa (arttırma butonu) 

 

     if(duty_cycle_orani<255){ //Eğer değer 255’den küçükse 

        duty_cycle_orani++;  //Arttırma işlemini yap 

     } 

   } 

  

   delay_ms(10); //Sorun çıkmasın diye 10ms gecikme ekliyoruz 

   PWM1_Set_Duty(duty_cycle_orani);  //yeni hızda çalışmasını sağlıyoruz 

} 

  

} 