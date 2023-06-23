int R=16,G=5,B=4;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(0,INPUT_PULLUP);
pinMode(2,INPUT_PULLUP);
pinMode(14,INPUT_PULLUP);
pinMode(12,INPUT_PULLUP);
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(B,OUTPUT);
Serial.begin(9600);
/*pinMode(5,INPUT);
pinMode(4,INPUT);
pinMode(0,OUTPUT);
pinMode(14,OUTPUT);*/
}

void loop() {
bt();
}
