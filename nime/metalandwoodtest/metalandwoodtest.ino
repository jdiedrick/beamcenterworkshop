int photocell;

int switch1;
int switch2;
int switch3;

void setup(){
 
 //metal sheets
 pinMode(A0, INPUT);
 
 //wood switches
 pinMode(2, INPUT);
 pinMode(3, INPUT);
 pinMode(4, INPUT);
 
 Serial.begin(9600);
  
}


void loop(){
 
  photocell = analogRead(A0);
  switch1 = digitalRead(2);
  switch2 = digitalRead(3);
  switch3 = digitalRead(4);
  
   if(photocell < 200 ){
  Serial.print(0);
  Serial.print(" ");
   Serial.print(switch1);
  Serial.print(" ");
  Serial.print(switch2);
  Serial.print(" ");
  Serial.print(switch3);
  Serial.print("\r");
  }
  
  if(photocell > 201 && photocell < 300){
  Serial.print(1);
   Serial.print(" ");
   Serial.print(switch1);
  Serial.print(" ");
  Serial.print(switch2);
  Serial.print(" ");
  Serial.print(switch3);
  Serial.print("\r");
  }
  
  if(photocell > 301 && photocell < 400){
  Serial.print(2);
   Serial.print(" ");
   Serial.print(switch1);
  Serial.print(" ");
  Serial.print(switch2);
  Serial.print(" ");
  Serial.print(switch3);
  Serial.print("\r");
  }
  
  if(photocell > 401 && photocell < 500){
  Serial.print(3);
   Serial.print(" ");
   Serial.print(switch1);
  Serial.print(" ");
  Serial.print(switch2);
  Serial.print(" ");
  Serial.print(switch3);
  Serial.print("\r");
  }
  
   if(photocell > 501 && photocell < 600){
  Serial.print(4);
   Serial.print(" ");
   Serial.print(switch1);
  Serial.print(" ");
  Serial.print(switch2);
  Serial.print(" ");
  Serial.print(switch3);
  Serial.print("\r");
  }
  
  if(photocell > 601 && photocell < 700){
  Serial.print(5);
   Serial.print(" ");
   Serial.print(switch1);
  Serial.print(" ");
  Serial.print(switch2);
  Serial.print(" ");
  Serial.print(switch3);
  Serial.print("\r");
  }
  
  if(photocell > 701 && photocell < 800){
  Serial.print(6);
   Serial.print(" ");
   Serial.print(switch1);
  Serial.print(" ");
  Serial.print(switch2);
  Serial.print(" ");
  Serial.print(switch3);
  Serial.print("\r");
  }
  
  if(photocell > 801 && photocell < 900){
  Serial.print(7);
   Serial.print(" ");
   Serial.print(switch1);
  Serial.print(" ");
  Serial.print(switch2);
  Serial.print(" ");
  Serial.print(switch3);
  Serial.print("\r");
  }
  
  if(photocell > 901){
  Serial.print(8);
   Serial.print(" ");
   Serial.print(switch1);
  Serial.print(" ");
  Serial.print(switch2);
  Serial.print(" ");
  Serial.print(switch3);
  Serial.print("\r");
  }



////


// if(photocell > 200 && photocell < 400){
//  Serial.println(1);
//  }
//  
//   if(photocell > 401 && photocell < 600){
//  Serial.println(4);
//  }
//  
//   if(photocell > 601 && photocell < 800){
//  Serial.println(5);
//  }
//  
//  
//   if(photocell > 801 && photocell < 800){
//  Serial.println(8);
//  }
//  
}
