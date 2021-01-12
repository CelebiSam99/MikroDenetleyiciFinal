const int a=2;
const int b=3;
const int c=4;
const int d=5;
int buton = 7;
  
int timeA = 0;
int timeB = 0;
int timeC = 0;
int timeD = 0;

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
  Serial.println(millis());
  //a şıkkı//
  
  if ((millis() - timeA >= 3000) && digitalRead(buton) == HIGH) {
    digitalWrite(a, HIGH);
  }else if(digitalRead(buton)== LOW){
    timeA = millis();
    digitalWrite(a, LOW);
  
  }
  //b şıkkı//
  if(millis() - timeB >= 5000 && digitalRead(buton) == LOW){
    digitalWrite(b, LOW);
  }else if(digitalRead(buton) == HIGH){
    digitalWrite(b, HIGH);
    timeB = millis();
  }
  //c şıkkı//
  if(digitalRead(buton) == HIGH && millis() - timeC <= 10000){
  	digitalWrite(c,HIGH);
  }else if(HIGH && millis() - timeC > 10000){
    digitalWrite(c,LOW);
  }else if(digitalRead(buton) == LOW){
    digitalWrite(c,LOW);
    timeC = millis();
  }
     //d şıkkı//
  if(millis() - timeD >= 10000 && digitalRead(buton) == LOW){
    digitalWrite(d, LOW);
  }else if(digitalRead(buton) == HIGH){
    digitalWrite(d, HIGH);
    timeD = millis();
  }

} 
