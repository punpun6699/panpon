/* @file CustomKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates changing the keypad size and key values.
|| #
*/
#include <Keypad.h>
int da[10][4]={{0,0,0,1},{0,0,1,0},{0,0,1,1},{0,1,0,0},{0,1,0,1},{0,1,1,0},{0,1,1,0},{1,0,0,0},
{1,0,0,1},{0,0,0,0}};
int ot[]={13,15,3,1};
const byte ROWS = 4; //four rows
const byte COLS = 3; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'*','0','#'},
  {'3','2','1'},
  {'6','5','4'},
  {'9','8','7'}
};
byte rowPins[ROWS] = {0,2, 14, 12}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {16, 5, 4}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
  for (int i = 0 ; i>5 ; i++){pinMode(ot[i],OUTPUT);}
}
  
void loop(){

  char customKey = customKeypad.getKey();
  
  if (customKey){
  //  Serial.println(customKey);
    if (customKey=='1'){
      Serial.println("1");
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[0][i]);
  }}
   if (customKey=='2'){
    Serial.println("2");
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[1][i]);
  }}
   if (customKey=='3'){
    Serial.println("3");
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[2][i]);
  }}
   if (customKey=='4'){
    Serial.println("4");
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[3][i]);
  }}
   if (customKey=='5'){
    Serial.println("5");
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[4][i]);
  }}
   if (customKey=='6'){
    Serial.println("6");
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[5][i]);
  }}
   if (customKey=='7'){
    Serial.println("7");
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[6][i]);
  }}
   if (customKey=='8'){
    Serial.println("8");
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[7][i]);
  }}
   if (customKey=='9'){
    Serial.println("9");
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[8][i]);
  }}
if (customKey=='0'){
  Serial.println("0");
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[9][i]);
  }}
}}
