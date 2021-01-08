#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <DHT.h>

const int girisbutton = 7;
const int cikisbutton = 6;

const int yesilled = 10;
const int sariled = 9;
const int kirmiziled = 8;
const int dht11 =2;
const int buzzer =3;

int buttonDurum1 = 0;
int buttonDurum2 = 0;
int sayici = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(dht11, DHT11); 

void setup()
{
  lcd.begin();
  lcd.backlight();
  Serial.begin(9600);  
  
  pinMode(yesilled, OUTPUT);
  pinMode(kirmiziled, OUTPUT);
  pinMode(sariled, OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(girisbutton, INPUT);
  pinMode(cikisbutton, INPUT);

}

void loop()
{
  float sicaklik = dht.readTemperature();
  lcd.home();
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("Sicaklik:");
  lcd.print(sicaklik);
  lcd.setCursor(9, 1);

  lcd.setCursor(0,0);
  lcd.print("Doluluk:");
  lcd.print(sayici);
  lcd.setCursor(10,0);
  
  buttonDurum1 = digitalRead(girisbutton);
  buttonDurum2 = digitalRead(cikisbutton);

  if (buttonDurum1 == HIGH) {
    sayici += 1;
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
    delay(100);
    Serial.println(sayici);
    
  }else if (buttonDurum2 == HIGH) {
    sayici -= 1;
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
    delay(100);
    Serial.println(sayici);
  }
  if (sayici < 14) {
    digitalWrite(yesilled, HIGH);
    digitalWrite(kirmiziled, LOW);
    digitalWrite(sariled, LOW);
  }
  else if (sayici == 15) {
    digitalWrite(sariled, HIGH);
    digitalWrite(yesilled, LOW);
    digitalWrite(kirmiziled, LOW);
  }
  else if(sayici == 20){
    digitalWrite(kirmiziled, HIGH);
    digitalWrite(sariled, LOW);
    digitalWrite(yesilled, LOW);
    lcd.setCursor(10,0);
    lcd.print("YerYOK");
    lcd.setCursor(16,0);
    
   }
}
