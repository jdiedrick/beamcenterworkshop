int photocell;

void setup(){
 
 pinMode(A0, INPUT);
 Serial.begin(9600);
  
}


void loop(){
 
  photocell = analogRead(A0);
  
//  Serial.println(photocell);
   if(photocell < 200 ){
  Serial.println(0);
  }
  
  if(photocell > 200 && photocell < 400){
  Serial.println(1);
  }
  
  if(photocell > 400 && photocell < 550){
  Serial.println(2);
  }
  
  if(photocell > 550 && photocell < 700){
  Serial.println(3);
  }
  
   if(photocell > 700 && photocell < 800){
  Serial.println(4);
  }
  
  if(photocell > 800 && photocell < 900){
  Serial.println(5);
  }
  
  if(photocell > 900 && photocell < 950){
  Serial.println(6);
  }
  
  if(photocell > 950 && photocell < 975){
  Serial.println(7);
  }
  
  if(photocell > 975 && photocell < 1000){
  Serial.println(8);
  }



}
