#include <DmxSimple.h>

int photocell;
int dmxvalue;
int incomingByte;

void setup(){
   DmxSimple.usePin(3);
  DmxSimple.maxChannel(4);

 pinMode(A0, INPUT);
 Serial.begin(9600);

  
}


void loop(){
 
        
        
        
  photocell = analogRead(A0);
  
 
  Serial.println(photocell);




}

