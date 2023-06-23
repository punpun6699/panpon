//lab3.3
void bt(){
  int in[]={digitalRead(0),digitalRead(2),digitalRead(14),digitalRead(12)};
   digitalWrite(4,0 );
digitalWrite(16,0 );
 digitalWrite(5,0 );
  if (in[0]==0){
    digitalWrite(4,0 );
digitalWrite(16,1 );
 digitalWrite(5,0 );
    }
     if (in[1]==0){
    digitalWrite(4,1 );
digitalWrite(16,0 );
 digitalWrite(5,0 );
    }
     if (in[2]==0){
    digitalWrite(4,0 );
digitalWrite(16,0 );
 digitalWrite(5,1 );
    }
     if (in[3]==0){//r 167 b 251
    analogWrite(R,167);analogWrite(G,0);analogWrite(B,251);
    }
  }
