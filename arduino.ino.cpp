#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
#include <Wire.h>
#include "dht.h"

LiquidCrystal lcd(6,7,5,4,3,2);
SoftwareSerial mySerial(A4,A5);

int alc = 8;
int motor = 9;
int buzzer = 13;

#define dht_apin 10
dht DHT;

char moss[10] = "No_Rain";

void beep() {
  digitalWrite(buzzer, LOW);
  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
}

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(alc, INPUT);
  pinMode(motor, OUTPUT);

  digitalWrite(motor, LOW);
  digitalWrite(buzzer, HIGH);

  Serial.begin(9600);
  mySerial.begin(9600);

  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Alcohol Sensing");
  lcd.setCursor(0,1);
  lcd.print("Engine Locking");

  delay(2500);
  lcd.clear();
  lcd.print("Alc:");
}

void loop() {

  if(digitalRead(alc) == LOW) {
    lcd.setCursor(4,0);
    lcd.print("Detected");

    digitalWrite(motor, LOW);
    strcpy(moss,"Detected");

    beep();
  }

  else {
    lcd.setCursor(4,0);
    lcd.print("-----   ");

    strcpy(moss,"Safe");
    digitalWrite(motor, HIGH);
  }

  delay(1000);
}