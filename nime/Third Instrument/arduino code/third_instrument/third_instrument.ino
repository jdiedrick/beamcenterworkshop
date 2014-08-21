int switch1;
int switch2;
int switch3;

void setup(){
 
 pinMode(2, INPUT);
 pinMode(3, INPUT);
 pinMode(4, INPUT);
 
 Serial.begin(9600);
  
}


void loop(){
 
  switch1 = digitalRead(2);
  switch2 = digitalRead(3);
  switch3 = digitalRead(4);
  
  Serial.print(switch1);
  Serial.print(" ");
  Serial.print(switch2);
  Serial.print(" ");
  Serial.print(switch3);
  Serial.print("\r");
  
}
