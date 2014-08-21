#include <DmxSimple.h>

int photocell;
int dmxvalue;
int incomingByte;

void setup(){
   DmxSimple.usePin(3);
  DmxSimple.maxChannel(4);

 pinMode(A0, INPUT);
 Serial.begin(9600);
   establishContact();

  
}


void loop(){
 
     // send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();

                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingByte, DEC);
        
        
        
  photocell = analogRead(A0);
  
  if(incomingByte == 1){
    photocell = 175;
  }
  
   if(incomingByte == 2){
    photocell = 300;
  }
  
  
   if(incomingByte == 3){
    photocell = 400;
  }
  
  
   if(incomingByte == 4){
    photocell = 550;
  }
  
  
   if(incomingByte == 5){
    photocell = 700;
  }
  
     if(incomingByte == 6){
    photocell = 725;
  }
  
  
   if(incomingByte == 7){
    photocell = 760;
  }
  
  
   if(incomingByte == 8){
    photocell = 790;
  }
  
  
  
   if(photocell < 100 ){
  Serial.println(0);
  dmxvalue=0;
    
  }
  
  if(photocell > 150 && photocell < 200){
  Serial.println(1);
  dmxvalue=1000;

  }
  
  if(photocell > 200 && photocell < 350){
  Serial.println(2);
  dmxvalue=1000/2;

  }
  
  if(photocell > 350 && photocell < 500){
  Serial.println(3);
  dmxvalue=1000/3;

  }
  
   if(photocell > 500 && photocell < 600){
  Serial.println(4);
  dmxvalue=1000/4;
  }
  
  if(photocell > 600 && photocell < 800){
  Serial.println(5);
  dmxvalue=1000/5;
  }
  
  if(photocell > 700 && photocell < 750){
  Serial.println(6);
  dmxvalue=1000/6;
  }
  
  if(photocell > 750 && photocell < 775){
  Serial.println(7);
  dmxvalue=1000/7;
  }
  
  if(photocell > 775 && photocell < 800){
  Serial.println(8);
  dmxvalue=1000/8;
  }
  



}

dmxvalue = photocell/4;


 DmxSimple.write(1, 255);
    DmxSimple.write(2, 255);
    DmxSimple.write(3, 255);
    DmxSimple.write(4, 255);
    delay(dmxvalue/20);
    DmxSimple.write(1, 0);
    DmxSimple.write(2, 0);
    DmxSimple.write(3, 0);
    DmxSimple.write(4, 0);


}

//end of draw loop

void establishContact(){
 while(Serial.available() <= 0){
  Serial.print("0");
 delay(100); 
 }
}

