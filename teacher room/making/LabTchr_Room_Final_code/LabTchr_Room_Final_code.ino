//EE TEACHER ROOM, BUEST, HP(SOLAN)

// include the library code:
#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); //Pin10 RX , Pin 11 TX connected to--> Bluetooth TX,RX


// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 6, en = 7, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


#define relay1 8 //Fan
#define relay2 9 //Tubelight

char val;
void setup() {
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);


  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0, 0);
  lcd.print("Welcome to EE ");
  
  mySerial.begin(9600);
  Serial.begin(9600);
}


void loop() {

  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  
  // print the number of seconds since reset:
  

//check data serial from bluetooth android App
if( mySerial.available() >0 ) {
    val = mySerial.read();
    Serial.println(val); 
}


 //FAN ON
  else if( val == 'A' ) {
    digitalWrite(relay1,LOW);
     lcd.clear();
     lcd.setCursor(4, 1);
    lcd.write("FAN ON ");}
    
//FAN OFF
  if( val == 'a' ) {
    digitalWrite(relay1,HIGH); 
    lcd.clear();
    lcd.setCursor(4, 1);
    lcd.write("FAN OFF ");
  }


   //LIGHT ON
  else if( val == 'B' ) {
    digitalWrite(relay2,LOW);
     lcd.clear();
     lcd.setCursor(4, 1);
    lcd.write("LIGHT ON "); }
    
  //LIGHT OFF
  else if( val == 'b' ) {
    digitalWrite(relay2,HIGH);
     lcd.clear();
    lcd.setCursor(4, 1);
    lcd.write("LIGHT OFF ");
  }
  


 

  //BOTH ON
  else if( val == 'd' ) {
    digitalWrite(relay1,LOW);
    digitalWrite(relay2,LOW);
     lcd.clear();
     lcd.setCursor(4, 1);
    lcd.write("BOTH ON ");
   
 }
   //BOTH OFF
  else if( val == 'D' ) {
    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,HIGH);
     lcd.clear();
     lcd.setCursor(4, 1);
    lcd.write("BOTH OFF ");
   
 }

  //Reset TO OFF
  else if( val == 'C' ) {
    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,HIGH);
     lcd.clear();
     lcd.setCursor(2, 0);
   lcd.print("All Reset");
 }

 
}



