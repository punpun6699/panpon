int led[]={16,5,4,0};
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i<4;i++){
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
}
