int photocell;

void setup(){
 
 pinMode(A0, INPUT);
 Serial.begin(9600);
  
}


void loop(){
 
  photocell = analogRead(A0);
  
   if(photocell < 200 ){
  Serial.println(0);
  }
  
  if(photocell > 200 && photocell < 300){
  Serial.println(1);
  }
  
  if(photocell > 301 && photocell < 400){
  Serial.println(2);
  }
  
  if(photocell > 401 && photocell < 500){
  Serial.println(3);
  }
  
   if(photocell > 501 && photocell < 600){
  Serial.println(4);
  }
  
  if(photocell > 601 && photocell < 700){
  Serial.println(5);
  }
  
  if(photocell > 701 && photocell < 800){
  Serial.println(6);
  }
  
  if(photocell > 801 && photocell < 900){
  Serial.println(7);
  }
  
  if(photocell > 901 && photocell < 1000){
  Serial.println(8);
  }



}
