int led[]={16,5,4,0,2};
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i<5;i++){
pinMode(led[i],OUTPUT);}
digitalWrite(16,0);
Serial.begin(9600);
}

void loop() {
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
