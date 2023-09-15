/*
button 1(ready) = pin 2
button 2(Go) = pin 3
button 3(stop) = pin 4
button reset (reset) = pin reset
clk = pin 13
cs = pin 10
din  = pin 11
*/
#include <SPI.h>
#include <bitBangedSPI.h>
#include <MAX7219_Dot_Matrix.h>
#include <TimerOne.h>
int ledState = LOW;
const byte chips = 12;
int x,y,z,mi,s,q,l,ti,k,n,o,ans,a=0,mm;
// 12 chips (display modules), hardware SPI with load on D10
MAX7219_Dot_Matrix display(chips, 10); // Chips / LOAD
char myChar[20],myChar2[20];
const char m[] = "Message ";
const char message1[] = "Message 0";
const char message1_2[] = "Message 00";
const char message1_3[] = "Message 000";
const char message1_4[] = "Message 0000";
const char message2[] = "Message ~GO~";
const char message3[] = "Message STOP";

const int buttonPin1 = 2; // Pin for button 1
const int buttonPin2 = 3; // Pin for button 2
const int buttonPin3 = 4; // Pin for button 3

int buttonState1 = LOW; // Current state of button 1
int buttonState2 = LOW; // Current state of button 2
int buttonState3 = LOW; // Current state of button 3

int lastButtonState1 = LOW; // Previous state of button 1
int lastButtonState2 = LOW; // Previous state of button 2
int lastButtonState3 = LOW; // Previous state of button 3

unsigned long lastDebounceTime1 = 0;
unsigned long lastDebounceTime2 = 0;
unsigned long lastDebounceTime3 = 0;

unsigned long debounceDelay = 50;

const char blank[] = "        "; // Blank message

void setup()
{
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(blinkLed);
  Serial.begin(9600);
  display.begin();
  pinMode(buttonPin1, INPUT_PULLUP); // Enable internal pull-up resistor for button 1
  pinMode(buttonPin2, INPUT_PULLUP); // Enable internal pull-up resistor for button 2
  pinMode(buttonPin3, INPUT_PULLUP); // Enable internal pull-up resistor for button 3
  
}

void loop()
{
  l = millis();
//  if ( l > k+1000  ){
//    ti++;
//    Serial.println(ti);
//    l=k;
//  }
  // Read the state of button 1 and debounce it
  int reading1 = digitalRead(buttonPin1);
  if (reading1 != lastButtonState1)
  {
    lastDebounceTime1 = millis();
  }

  if ((millis() - lastDebounceTime1) > debounceDelay)
  {
    if (reading1 != buttonState1)
    {
      buttonState1 = reading1;

      if (buttonState1 == LOW)
      {
        displayMessage("Message FIA");
        delay(500);
        displayMessage("Message 0");
        delay(1000);
        displayMessage("Message 00");
        delay(1000);
        displayMessage("Message 000");
        delay(1000);
        displayMessage("Message 0000");
        
      }
    }
  }

  lastButtonState1 = reading1;

  // Read the state of button 2 and debounce it
  int reading2 = digitalRead(buttonPin2);
  if (reading2 != lastButtonState2)
  {
    lastDebounceTime2 = millis();
    
  }

  if ((millis() - lastDebounceTime2) > debounceDelay)
  {
    if (reading2 != buttonState2)
    {
      buttonState2 = reading2;

      if (buttonState2 == LOW)
      {
        displayMessage(message2);
        Serial.println("go");
        o = ti;
        a = 1;
        Serial.println(ti);
        delay(1000);
      }
    }
  }

  lastButtonState2 = reading2;

  if (a==1){
  // Read the state of button 3 and debounce it
  while (a==1){
    mm = ti - o;
    sprintf(myChar2, "%d", mm);
        //sprintf(myChar2, "%d", mi);
        size_t totalLength = strlen(m) + strlen(myChar2);
        char resultString2[totalLength + 1];
        strcpy(resultString2,m);
        strcat(resultString2, myChar2);
  displayMessage(resultString2);
  int reading3 = digitalRead(buttonPin3);
  if (reading3 != lastButtonState3)
  {
    lastDebounceTime3 = millis();
  }

  if ((millis() - lastDebounceTime3) > debounceDelay)
  {
    if (reading3 != buttonState3)
    {
      buttonState3 = reading3;

      if (buttonState3 == LOW)
      {
        displayMessage(message3);
        k=millis();
        y = millis();
        n = ti;
        z=n-o;
        s=z/1000;
        //mi=s/60;
        //s=(60*mi)-z;
        sprintf(myChar, "%d", z);
        sprintf(myChar2, "%d", mi);
        size_t totalLength = strlen(m) + strlen(myChar);
        char resultString[totalLength + 1];
        strcpy(resultString,m);
        strcat(resultString, myChar);
        delay(1000);
        Serial.print(n);
        Serial.print(" - ");
        Serial.print(o);
        Serial.print(" = ");
        Serial.println(z);
        Serial.println(resultString);
        displayMessage(resultString);
        a=0;
      }
    }
  }
  
  lastButtonState3 = reading3;
  }}
}

void displayMessage(const char *message)
{
  // Clear the display by sending the blank message
  display.sendSmooth(blank, 0);

  // Display the message on the MAX7219 Dot Matrix
  display.sendSmooth(message, 0);
 // delay(2000); // Display for 2 seconds (adjust as needed)
}
void blinkLed(){
  //ledState = !ledState;
  //Serial.println("++");
  ti++;
}
