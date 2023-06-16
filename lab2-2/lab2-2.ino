int led[]={16,5,4,0,2};
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i<5;i++){
pinMode(led[i],OUTPUT);}
digitalWrite(16,0);
Serial.begin(9600);
}

void loop() {
  ledrun();
}
