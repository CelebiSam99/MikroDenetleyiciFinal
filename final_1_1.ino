const int a=2;
const int b=3;
const int c=4;
const int d=5;
int buton = 7;
  
int timeA = 0;
int waitA = 0;
int timeB = 0;
int waitB = 0;
int timeC = 0;
int waitC = 0;
int timeD = 0;
int waitD = 0;
int butondeger = 0;

void setup() {

  Serial.begin(9600);
  
  pinMode(buton, INPUT_PULLUP);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);

}

void loop() {

  butondeger = digitalRead(buton);
  Serial.println(butondeger);
    
  //a şıkkı//
  
  if ((millis() - waitA >= 3000) && digitalRead(buton) == HIGH) {
  
    digitalWrite(a, HIGH);
  
  }else if(digitalRead(buton)== LOW){
    waitA = millis();
    digitalWrite(a, LOW);
  
  }
  //b şıkkı//
  if(millis() - waitB >= 5000 && digitalRead(buton) == LOW){
    digitalWrite(b, LOW);
  }else if(digitalRead(buton) == HIGH){
    digitalWrite(b, HIGH);
    waitB = millis();
  }
  //c şıkkı//
  if(digitalRead(buton) == HIGH && millis() - waitC <= 10000){
  	digitalWrite(c,HIGH);
  }else if(HIGH && millis() - waitC > 10000){
    digitalWrite(c,LOW);
  }else if(digitalRead(buton) == LOW){
    digitalWrite(c,LOW);
    waitC = millis();
  }
    
  if(millis() - waitD >= 10000 && digitalRead(buton) == LOW){
    digitalWrite(d, LOW);
  }else if(digitalRead(buton) == HIGH){
    digitalWrite(d, HIGH);
    waitD = millis();}
  //d şıkkı//

  /*if(digitalRead(buton) == HIGH ){
    digitalWrite(d,HIGH);
  }else if(millis() - waitD == 10000){
    digitalWrite(d,LOW);
  	waitD = millis(); 
  }*/
  
  Serial.println(millis());
} 