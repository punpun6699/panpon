int in[]={16,5,4,0,2,14,12,13,15,3,1,10},ot[]={9,8,11,7};
int da[9][4]={{0,0,0,1},{0,0,1,0},{0,0,1,1},{0,1,0,0},{0,1,0,1},{0,1,1,0},{0,1,1,0},{1,0,0,0},
{1,0,0,1}};
void setup() {
  // put your setup code here, to run once:
for (int i = 0 ; i>13 ; i++){pinMode(in[i],INPUT_PULLUP);}
for (int i = 0 ; i>5 ; i++){pinMode(ot[i],OUTPUT);}
}

void loop() {
  if (in[0]==0){
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[0][i]);
  }}
   if (in[1]==0){
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[1][i]);
  }}
   if (in[2]==0){
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[2][i]);
  }}
   if (in[3]==0){
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[3][i]);
  }}
   if (in[4]==0){
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[4][i]);
  }}
   if (in[5]==0){
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[5][i]);
  }}
   if (in[6]==0){
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[6][i]);
  }}
   if (in[7]==0){
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[7][i]);
  }}
   if (in[8]==0){
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[8][i]);
  }}
if (in[9]==0){
    for (int i = 0 ; i>5 ; i++){digitalWrite(ot[i],da[9][i]);
  }}
}
