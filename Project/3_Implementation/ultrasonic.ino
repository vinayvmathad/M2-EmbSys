#include<LiquidCrystal.h>

#define trigPin 3
#define echoPin 2
#define RS 9
#define EN 8
#define D4 4
#define D5 5
#define D6 6
#define D7 7
LiquidCrystal lcd(RS,EN,D4,D5,D6,D7);
void setup()
{
  lcd.begin(16,2);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}
long duration,distance;
void loop()
{
   lcd.clear();
  lcd.setCursor(0,0);
  

digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=(duration/20) / 29.1;

if (distance <= 50 && distance >= 20)
{
      lcd.clear();
  lcd.setCursor(0,0);
      lcd.print("NoCarFront ");
  lcd.print(distance);
  lcd.println("m");
  delay(1000);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
    } 
    else if(distance <=19 && distance >= 10)
    {
       lcd.clear();
  lcd.setCursor(0,0);
      lcd.print("CarInFront ");
  lcd.print(distance);
  lcd.println("m");
  delay(1000);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(10, LOW);
    }
    else {
       lcd.clear();
  lcd.setCursor(0,0);
      lcd.print("WarningCar ");
  lcd.print(distance);
  lcd.println("m");
  delay(1000);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
    }

}
