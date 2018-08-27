//ELECTRICAL LAB CODE, BUEST, HP (SOLAN)



#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); //Pin10 RX , Pin 11 TX connected to--> Bluetooth TX,RX

#define relay1 2
#define relay2 3
#define relay3 4
#define relay4 5
#define relay5 6
#define relay6 7
#define relay7 8
#define relay8 9

char val;
void setup() {
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
  pinMode(relay5,OUTPUT);
  pinMode(relay6,OUTPUT);
  pinMode(relay7,OUTPUT);
  pinMode(relay8,OUTPUT);
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);
  digitalWrite(relay3,HIGH);
  digitalWrite(relay4,HIGH);
  digitalWrite(relay5,HIGH);
  digitalWrite(relay6,HIGH);
  digitalWrite(relay7,HIGH);
  digitalWrite(relay8,HIGH);
  mySerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
//check data serial from bluetooth android App
if( mySerial.available() >0 ) {
    val = mySerial.read();
    Serial.println(val); 
}


 //ALLON
    else if( val == 'q' ) {
    digitalWrite(relay1,LOW);
    digitalWrite(relay2,LOW);
    digitalWrite(relay3,LOW);
    digitalWrite(relay4,LOW);
    digitalWrite(relay5,LOW);
    digitalWrite(relay6,LOW);
    digitalWrite(relay7,LOW);
    digitalWrite(relay8,LOW);
 }
  
 
//ALLOFF
    if( val == 'Q' ) {
    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,HIGH);
    digitalWrite(relay3,HIGH);
    digitalWrite(relay4,HIGH);
    digitalWrite(relay5,HIGH);
    digitalWrite(relay6,HIGH);
    digitalWrite(relay7,HIGH);
    digitalWrite(relay8,HIGH);
    }

 //RESET all
  else if( val == 'R' ) {
    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,HIGH);
    digitalWrite(relay3,HIGH);
    digitalWrite(relay4,HIGH);
    digitalWrite(relay5,HIGH);
    digitalWrite(relay6,HIGH);
    digitalWrite(relay7,HIGH);
    digitalWrite(relay8,HIGH);
    }



//All Tubelight

//on
else if( val == 'O' ) {
    digitalWrite(relay1,LOW);
    digitalWrite(relay2,LOW);
    digitalWrite(relay3,LOW);
    digitalWrite(relay4,LOW);
    }

//off
else if( val == 'o' ) {
    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,HIGH);
    digitalWrite(relay3,HIGH);
    digitalWrite(relay4,HIGH);
    }



//All Fan

//on
else if( val == 'P' ) {
    digitalWrite(relay5,LOW);
    digitalWrite(relay6,LOW);
    digitalWrite(relay7,LOW);
    digitalWrite(relay8,LOW);
    }

//off


else if( val == 'p' ) {
    digitalWrite(relay5,HIGH);
    digitalWrite(relay6,HIGH);
    digitalWrite(relay7,HIGH);
    digitalWrite(relay8,HIGH);
    }


    
//Individual tubelight

//t1 on--------------------------

  else if( val == 'G' ) {
    digitalWrite(relay1,LOW); }

    // off
  else if( val == 'g' ) {
    digitalWrite(relay1,HIGH); }

    

    //t2 on-----------------------
    
  else if( val == 'H' ) {
    digitalWrite(relay2,LOW); }

    //off
    
  else if( val == 'h' ) {
    digitalWrite(relay2,HIGH); }


//t3 on--------------------------------

 else if( val == 'I' ) {
    digitalWrite(relay3,LOW); }

//off
  else if( val == 'i' ) {
    digitalWrite(relay3,HIGH); }


//t4 on--------------------------------
   
  else if( val == 'J' ) {
    digitalWrite(relay4,LOW); }
    
//t4 off
    
  else if( val == 'j' ) {
    digitalWrite(relay4,HIGH); }
 
  //---------------------------------



  //Individual fan

//f1 on--------------------------

  else if( val == 'K' ) {
    digitalWrite(relay5,LOW); }

    // off
  else if( val == 'k' ) {
    digitalWrite(relay5,HIGH); }

    

    //f2 on-----------------------
    
  else if( val == 'L' ) {
    digitalWrite(relay6,LOW); }

    //off
    
  else if( val == 'l' ) {
    digitalWrite(relay6,HIGH); }


//f3 on--------------------------------

 else if( val == 'M' ) {
    digitalWrite(relay7,LOW); }

//off
  else if( val == 'm' ) {
    digitalWrite(relay7,HIGH); }


//f4 on--------------------------------
   
  else if( val == 'N' ) {
    digitalWrite(relay8,LOW); }
    
//f4 off
    
  else if( val == 'n' ) {
    digitalWrite(relay8,HIGH);}

}
 
  //---------------------------------
  
  

