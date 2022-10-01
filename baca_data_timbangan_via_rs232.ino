//pembacaan data timbangan via rs232
#include <SoftwareSerial.h>

SoftwareSerial RSSerial (5, 6); //2 sebagai rx || 3 sebagai tx

void setup(){  

      Serial.begin(9600);    //dari serialmonitor atau pin 0,1
//    RSSerial.begin(9600);   //dari pin 2,3 uno/nano
//    Serial1.begin(9600);   //dari pin 19, 10 Mega

}
void loop(){ 

      byte in = Serial.available(); //jika data rs serial tersedia
//    byte in = RSSerial.available();
//    byte in = Serial1.available();
    
    if(in!=0){
       char datain = Serial.read();       //data sebagai char
//     char datain = RSSerial.read();
//     char datain = Serial1.read();
       Serial.print(datain);              //tampilkan ke serial monitor

}
}
