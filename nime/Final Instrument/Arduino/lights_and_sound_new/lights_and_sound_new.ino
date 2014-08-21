#include <DmxSimple.h>

int photocell;
int dmxvalue;

void setup(){
   DmxSimple.usePin(3);
  DmxSimple.maxChannel(4);

 pinMode(A0, INPUT);
 Serial.begin(9600);
  
}


void loop(){
 
  photocell = analogRead(A0);
  
  
//  Serial.println(photocell);
   if(photocell < 200 ){
  Serial.println(0);
  dmxvalue=0;

//   DmxSimple.write(1, 0);
//    DmxSimple.write(2, 0);
//    DmxSimple.write(3, 0);
//    DmxSimple.write(4, 0);
    
  }
  
  if(photocell > 200 && photocell < 400){
  Serial.println(1);
  dmxvalue=1000;

//   DmxSimple.write(1, 32);
//    DmxSimple.write(2, 32);
//    DmxSimple.write(3, 32);
//    DmxSimple.write(4, 32);
//    delay(200);
//    DmxSimple.write(1, 0);
//    DmxSimple.write(2, 0);
//    DmxSimple.write(3, 0);
//    DmxSimple.write(4, 0);
    
  }
  
  if(photocell > 400 && photocell < 550){
  Serial.println(2);
  dmxvalue=1000/2;

//   DmxSimple.write(1, 37);
//    DmxSimple.write(2, 37);
//    DmxSimple.write(3, 37);
//    DmxSimple.write(4, 37);
//    delay(200);
//    DmxSimple.write(1, 0);
//    DmxSimple.write(2, 0);
//    DmxSimple.write(3, 0);
//    DmxSimple.write(4, 0);
  }
  
  if(photocell > 550 && photocell < 700){
  Serial.println(3);
  dmxvalue=1000/3;

//   DmxSimple.write(1, 43);
//    DmxSimple.write(2, 43);
//    DmxSimple.write(3, 43);
//    DmxSimple.write(4, 43);
//    delay(200);
//    DmxSimple.write(1, 0);
//    DmxSimple.write(2, 0);
//    DmxSimple.write(3, 0);
//    DmxSimple.write(4, 0);
  }
  
   if(photocell > 700 && photocell < 800){
  Serial.println(4);
  dmxvalue=1000/4;

//   DmxSimple.write(1, 51);
//    DmxSimple.write(2, 51);
//    DmxSimple.write(3, 51);
//    DmxSimple.write(4, 51);
//    delay(200);
//    DmxSimple.write(1, 0);
//    DmxSimple.write(2, 0);
//    DmxSimple.write(3, 0);
//    DmxSimple.write(4, 0);
  }
  
  if(photocell > 800 && photocell < 900){
  Serial.println(5);
  dmxvalue=1000/5;

//   DmxSimple.write(1, 65);
//    DmxSimple.write(2, 65);
//    DmxSimple.write(3, 65);
//    DmxSimple.write(4, 65);
//    delay(200);
//    DmxSimple.write(1, 0);
//    DmxSimple.write(2, 0);
//    DmxSimple.write(3, 0);
//    DmxSimple.write(4, 0);
  }
  
  if(photocell > 900 && photocell < 950){
  Serial.println(6);
  dmxvalue=1000/6;

//   DmxSimple.write(1, 85);
//    DmxSimple.write(2, 85);
//    DmxSimple.write(3, 85);
//    DmxSimple.write(4, 85);
//    delay(200);
//    DmxSimple.write(1, 0);
//    DmxSimple.write(2, 0);
//    DmxSimple.write(3, 0);
//    DmxSimple.write(4, 0);
  }
  
  if(photocell > 950 && photocell < 975){
  Serial.println(7);
  dmxvalue=1000/7;

//   DmxSimple.write(1, 127);
//    DmxSimple.write(2, 127);
//    DmxSimple.write(3, 127);
//    DmxSimple.write(4, 127);
//    delay(200);
//    DmxSimple.write(1, 0);
//    DmxSimple.write(2, 0);
//    DmxSimple.write(3, 0);
//    DmxSimple.write(4, 0);
  }
  
  if(photocell > 975 && photocell < 1000){
  Serial.println(8);
  dmxvalue=1000/8;

//   DmxSimple.write(1, 255);
//    DmxSimple.write(2, 255);
//    DmxSimple.write(3, 255);
//    DmxSimple.write(4, 255);
//    delay(200);
//    DmxSimple.write(1, 0);
//    DmxSimple.write(2, 0);
//    DmxSimple.write(3, 0);
//    DmxSimple.write(4, 0);
  
  }

//photocell /= 4;
//Serial.println(photocell);

//dmxvalue = map(photocell, 0, 1023, 0, 255);
//dmxvalue = map(photocell, 0, 1023, 0, 1000);



//DMX LIGHTS

//
//   if(photocell < 200 ){
//
//    
//  }
//  
//  if(photocell > 200 && photocell < 400){
//
//    
//  }
//  
//  if(photocell > 400 && photocell < 550){
//
//  }
//  
//  if(photocell > 550 && photocell < 700){
//  }
//  
//   if(photocell > 700 && photocell < 800){
//  }
//  
//  if(photocell > 800 && photocell < 900){
//  }
//  
//  if(photocell > 900 && photocell < 950){
//  }
//  
//  if(photocell > 950 && photocell < 975){
//  }
//  
//  if(photocell > 975 && photocell < 1000){
//
//  
//  }
//  
//  
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
