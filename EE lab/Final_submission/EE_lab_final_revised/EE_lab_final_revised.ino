//ELECTRICAL LAB CODE, BUEST, HP (SOLAN)



#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); //Pin10 RX , Pin 11 TX connected to--> Bluetooth TX,RX




#define relay9 2
#define relay1 3  

#define relay2 5
#define relay10 4

#define relay3 7
#define relay11 6

#define relay4 9
#define relay12 8

#define relay5 24
#define relay13 22

#define relay6 28
#define relay14 26

#define relay7 32
#define relay15 30

#define relay8 36
#define relay16 34

char val;
void setup() {
  pinMode(relay1,OUTPUT);//f1
  pinMode(relay2,OUTPUT);//sf1 
  
  pinMode(relay3,OUTPUT);//f2
  pinMode(relay4,OUTPUT); //sf2 
  
  pinMode(relay5,OUTPUT); //f3
  pinMode(relay6,OUTPUT);//sf3 
  
  pinMode(relay7,OUTPUT);//f4
  pinMode(relay8,OUTPUT);//sf4 
  
  pinMode(relay9,OUTPUT);//t1
  pinMode(relay10,OUTPUT); //st1
  
  pinMode(relay11,OUTPUT);//t2
  pinMode(relay12,OUTPUT); //st2
  
  pinMode(relay13,OUTPUT);//t3
  pinMode(relay14,OUTPUT);//st3
  
  pinMode(relay15,OUTPUT);//t4
  pinMode(relay16,OUTPUT); //st4
  
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);
  
  digitalWrite(relay3,HIGH);
  digitalWrite(relay4,HIGH);
  
  digitalWrite(relay5,HIGH);
  digitalWrite(relay6,HIGH);
  
  digitalWrite(relay7,HIGH);
  digitalWrite(relay8,HIGH);
  
  digitalWrite(relay9,HIGH);
  digitalWrite(relay10,HIGH);
  
  digitalWrite(relay11,HIGH);
  digitalWrite(relay12,HIGH);
  
  digitalWrite(relay13,HIGH);
  digitalWrite(relay14,HIGH);
  
  digitalWrite(relay15,HIGH);
  digitalWrite(relay16,HIGH);


  
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
  
  digitalWrite(relay9,HIGH);
  digitalWrite(relay10,HIGH);
  
  digitalWrite(relay11,HIGH);
  digitalWrite(relay12,HIGH);
  
  digitalWrite(relay13,HIGH);
  digitalWrite(relay14,HIGH);
  
  digitalWrite(relay15,HIGH);
  digitalWrite(relay16,HIGH);
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

//st1 on--------------------------
     else if( val == 'S' ) {
    digitalWrite(relay9,LOW); 
digitalWrite(relay1,HIGH);}
    // off
  else if( val == 's' ) {
    digitalWrite(relay9,HIGH); }

    //t2 on-----------------------
    
  else if( val == 'H' ) {
    digitalWrite(relay2,LOW); }

    //off
    
  else if( val == 'h' ) {
    digitalWrite(relay2,HIGH); }

    //st2 on--------------------------
     else if( val == 'T' ) {
    digitalWrite(relay10,LOW); 
digitalWrite(relay2,HIGH);}
    // off
  else if( val == 't' ) {
    digitalWrite(relay10,HIGH); }



//t3 on--------------------------------

 else if( val == 'I' ) {
    digitalWrite(relay3,LOW); }

//off
  else if( val == 'i' ) {
    digitalWrite(relay3,HIGH); }


//st3 on--------------------------
     else if( val == 'U' ) {
    digitalWrite(relay11,LOW); 
digitalWrite(relay3,HIGH);}
    // off
  else if( val == 'u' ) {
    digitalWrite(relay11,HIGH); }


//t4 on--------------------------------
   
  else if( val == 'J' ) {
    digitalWrite(relay4,LOW); }
    
//t4 off
    
  else if( val == 'j' ) {
    digitalWrite(relay4,HIGH); }


    //st4 on--------------------------
     else if( val == 'V' ) {
    digitalWrite(relay12,LOW); 
digitalWrite(relay4,HIGH);}
    // off
  else if( val == 'v' ) {
    digitalWrite(relay12,HIGH); }

 
  //---------------------------------



  //Individual fan

//f1 on--------------------------

  else if( val == 'K' ) {
    digitalWrite(relay5,LOW); }

    // off
  else if( val == 'k' ) {
    digitalWrite(relay5,HIGH); }

    //sf1 on--------------------------

  else if( val == 'W' ) {
    digitalWrite(relay13,LOW); 
digitalWrite(relay5,HIGH);}
    // off
  else if( val == 'w' ) {
    digitalWrite(relay13,HIGH); }

    

    //f2 on-----------------------
    
  else if( val == 'L' ) {
    digitalWrite(relay6,LOW); }

    //off
    
  else if( val == 'l' ) {
    digitalWrite(relay6,HIGH); }

 //sf2 on--------------------------

  else if( val == 'X' ) {
    digitalWrite(relay14,LOW); 
digitalWrite(relay6,HIGH);}
    // off
  else if( val == 'x' ) {
    digitalWrite(relay14,HIGH); }
    
//f3 on--------------------------------

 else if( val == 'M' ) {
    digitalWrite(relay7,LOW); }

//off
  else if( val == 'm' ) {
    digitalWrite(relay7,HIGH); }

     //sf3 on--------------------------

  else if( val == 'Y' ) {
    digitalWrite(relay15,LOW);
digitalWrite(relay7,HIGH); }

    // off
  else if( val == 'y' ) {
    digitalWrite(relay15,HIGH); }


//f4 on--------------------------------
   
  else if( val == 'N' ) {
    digitalWrite(relay8,LOW); }
    
//f4 off
    
  else if( val == 'n' ) {
    digitalWrite(relay8,HIGH);}



     //sf4 on--------------------------

  else if( val == 'Z' ) {
    digitalWrite(relay16,LOW); 
digitalWrite(relay8,HIGH);}
    // off
  else if( val == 'z' ) {
    digitalWrite(relay16,HIGH); }

}
 
  //---------------------------------CAELUSBOT----------------------------
  

