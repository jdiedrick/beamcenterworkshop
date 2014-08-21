int conductiveFoam1;
int conductiveFoam2;
int conductiveFoam3;


void setup(){
 
 pinMode(A0, INPUT);
 pinMode(A1, INPUT);
  pinMode(A2, INPUT);

 
 Serial.begin(9600);
  
}


void loop(){
 
  conductiveFoam1 = analogRead(A0);
  conductiveFoam2 = analogRead(A1);
  conductiveFoam3 = analogRead(A2);

  
  Serial.print(conductiveFoam1);
    Serial.print(" ");
  Serial.print(conductiveFoam2);
   Serial.print(" ");
  Serial.print(conductiveFoam3);
  Serial.print("\r");

  
//  if (conductiveFoam > 800){
//   Serial.println(2);
//   conductiveFoam = 0;
//  }
  

  
}
