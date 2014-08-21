
#include <DmxSimple.h>


int knob1 = A1;
int knob2 = A2;
int knob3 = A3;
int knob4 = A4; 

int switch1 = 2;
int switch2 = 3;
int switch3 = 4;
int switch4 = 5;

int led1 = 6;
int led2 = 9;
int led3 = 10;
int led4 = 11;

int knob1value = 0;
int knob2value = 0;
int knob3value = 0;
int knob4value = 0;

int inByte = 0;


void setup() 
{
  /* The most common pin for DMX output is pin 3, which DmxSimple
  ** uses by default. If you need to change that, do it here. */
  DmxSimple.usePin(7);

  /* DMX devices typically need to receive a complete set of channels
  ** even if you only need to adjust the first channel. You can
  ** easily change the number of channels sent here. If you don't
  ** do this, DmxSimple will set the maximum channel number to the
  ** highest channel you DmxSimple.write() to. */
  DmxSimple.maxChannel(4);
  
  
  Serial.begin(9600);                                  // connect to the serial port 115200
//  establishContact();
  
   pinMode(switch1, INPUT);
pinMode(switch2, INPUT);
pinMode(switch3, INPUT);
pinMode(switch4, INPUT);
  
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);

pinMode(knob1, INPUT);
}

//*******************************************************************************************************************
// Main Program	
//*******************************************************************************************************************

void loop() 
{
  //int brightness = map(knob4value, 0, 1023, 0, 255);
  
//  for (int brightness = 0; brightness <= 255; brightness++){
  
  int knobValue = analogRead(knob1);
  
  knobValue /= 4; 
  
 // Serial.println(knobValue);
    DmxSimple.write(1, 255);
    DmxSimple.write(2, 255);
    DmxSimple.write(3, 255);
    DmxSimple.write(4, 255);
    delay(knobValue/20);
    DmxSimple.write(1, 0);
    DmxSimple.write(2, 0);
    DmxSimple.write(3, 0);
    DmxSimple.write(4, 0);
//   DmxSimple.write(2, brightness);
 //   DmxSimple.write(3, brightness); 
  //  DmxSimple.write(4, brightness);
  //  delay(10);
  
  
  Serial.println(knobValue);
    
    
//      if(knobValue < 200/4 ){
//  Serial.println(0);
//  }
//  
//  if(knobValue > 201/4 && knobValue < 300/4){
//  Serial.println(1);
//  }
//  
//  if(knobValue > 301/4 && knobValue < 400/4){
//  Serial.println(2);
//  }
//  
//  if(knobValue > 401/4 && knobValue < 500/4){
//  Serial.println(3);
//  }
//  
//   if(knobValue > 501/4 && knobValue < 600/4){
//  Serial.println(4);
//  }
//  
//  if(knobValue > 601/4 && knobValue < 700/4){
//  Serial.println(5);
//  }
//  
//  if(knobValue > 701/4 && knobValue < 800/4){
//  Serial.println(6);
//  }
//  
//  if(knobValue > 801/4 && knobValue < 900/4){
//  Serial.println(7);
//  }
//  
//  if(knobValue > 901/4){
//  Serial.println(8);
//  }
//  
  
  
 // }
  
 // int brightness = 127;
  
//  if (digitalRead(2) == HIGH){
//  digitalWrite(led1, HIGH);
  
}
    
//  }
//else{
//  digitalWrite(led1, LOW);
//  DmxSimple.write(1, 0);
//}
//
//  if (digitalRead(3) == HIGH){
//  digitalWrite(led2, HIGH);
//  DmxSimple.write(2, brightness);
//  }
//else{
//  digitalWrite(led2, LOW);
//  DmxSimple.write(2, 0);
//}
//
//  if (digitalRead(4) == HIGH){
//  digitalWrite(led3, HIGH);
//  DmxSimple.write(3, brightness);
//  }
//else{
//  digitalWrite(led3, LOW);
//  DmxSimple.write(3, 0);
//}
//
//  if (digitalRead(5) ==HIGH){
//  digitalWrite(led4, HIGH);
//  DmxSimple.write(4, brightness);
//  }
//else{
//  digitalWrite(led4, LOW);
//  DmxSimple.write(4, 0);
//}
//
//  
//  
//   if(Serial.available() > 0){ 
//    inByte = Serial.read();  
//    
// knob1value = analogRead(knob1);
// Serial.print(knob1value);
// Serial.print(' ');
//  knob2value = analogRead(knob2);
// Serial.print(knob2value);
// Serial.print(' ');
//  knob3value = analogRead(knob3);
// Serial.print(knob3value);
// Serial.print(' ');
//  knob4value = analogRead(knob4);
// Serial.print(knob4value);
// Serial.print(' ');
// Serial.print(digitalRead(2));
// Serial.print(' ');
//  Serial.print(digitalRead(3));
// Serial.print(' ');
//  Serial.print(digitalRead(4));
// Serial.print(' ');
//  Serial.println(digitalRead(5));
// Serial.flush();
//}
//}


//void establishContact(){
// while(Serial.available() <= 0){
//  Serial.print("0");
// delay(100); 
// }
//}


