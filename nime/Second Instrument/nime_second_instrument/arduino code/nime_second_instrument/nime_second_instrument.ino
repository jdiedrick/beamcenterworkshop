int conductiveFoam;

void setup(){
 
 pinMode(A0, INPUT);
 Serial.begin(9600);
  
}


void loop(){
 
  conductiveFoam = analogRead(A0);
  
  Serial.println(conductiveFoam);
 
  
}
