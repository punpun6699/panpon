void ledrun(){
// put your main code here, to run repeatedly: 
  for (int i = 0; i<4;i++){
  digitalWrite(led[i],1);
Serial.println("on");
delay(1000);
digitalWrite(led[i],0);}
digitalWrite(led[4],1);
delay(1000);
digitalWrite(led[4],0);
}
