//lab3-2
void ldr(){
  int a=analogRead(A0);
  Serial.println(a);
  if (a > 700 && a < 899 ){
digitalWrite(4,1 );
digitalWrite(16,0 );
 digitalWrite(5,0 );
 Serial.println("R");}
   if (a > 900 && a< 1000){
  digitalWrite(4,0 );
  digitalWrite(16,1 );
  digitalWrite(5,0 );
   Serial.println("G");}
   if (a > 1000){
  digitalWrite(4,0 );
 digitalWrite(16,0 );
 digitalWrite(5,1 );
  Serial.println("B");}
}
