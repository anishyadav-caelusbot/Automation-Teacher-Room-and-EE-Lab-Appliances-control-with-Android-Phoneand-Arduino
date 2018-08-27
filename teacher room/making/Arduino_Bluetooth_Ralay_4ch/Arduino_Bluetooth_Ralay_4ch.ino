/*
Relay IN1 connected to PinOut 2 Arduino
Relay IN2 connected to PinOut 3 Arduino
Relay IN3 connected to PinOut 4 Arduino
Relay IN4 connected to PinOut 5 Arduino
--->you can connected to relay modul 4 channel

Serial data sending from Arduino Bluetooth Relay 4CH.apk
data '1'-'4' to on is Ralay CH 1-4
data 'A'-'D' to off is Ralay CH 1-4
data '9' to on ALL CH 1-4
data 'I' to off ALL CH 1-4
*/

#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); //Pin10 RX , Pin 11 TX connected to--> Bluetooth TX,RX

#define relay1 2
#define relay2 3
#define relay3 4
#define relay4 5

char val;
void setup() {
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);
  digitalWrite(relay3,HIGH);
  digitalWrite(relay4,HIGH);
  mySerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
//cek data serial from bluetooth android App
if( mySerial.available() >0 ) {
    val = mySerial.read();
    Serial.println(val); 
}
//Relay is on
  if( val == '1' ) {
    digitalWrite(relay1,HIGH); }
  else if( val == '2' ) {
    digitalWrite(relay2,HIGH); }
  else if( val == '3' ) {
    digitalWrite(relay3,HIGH); }
  else if( val == '4' ) {
    digitalWrite(relay4,HIGH); }
  //relay all on
  else if( val == '9' ) {
    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,HIGH);
    digitalWrite(relay3,HIGH);
    digitalWrite(relay4,HIGH);
 }
 //relay is off
  else if( val == 'A' ) {
    digitalWrite(relay1,LOW); }
  else if( val == 'B' ) {
    digitalWrite(relay2,LOW); }
  else if( val == 'C' ) {
    digitalWrite(relay3,LOW); }
  else if( val == 'D' ) {
    digitalWrite(relay4,LOW); }
  //relay all off  
  else if( val == 'I' ) {
    digitalWrite(relay1,LOW);
    digitalWrite(relay2,LOW);
    digitalWrite(relay3,LOW);
    digitalWrite(relay4,LOW);
     delay(3000); 
     digitalWrite(relay4,HIGH);
 }
 
}


//Arduino project created by: pujar
//www.mutekla.com
//Apk Android remote controll suport this project, download on Playstore:
//Arduino Bluetooth Relay 4CH.apk
//https://play.google.com/store/apps/details?id=dev.merahkemarun.arduinobluetoothrelay4ch
