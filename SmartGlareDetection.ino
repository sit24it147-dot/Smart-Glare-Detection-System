#include <LiquidCrystal.h>

// LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int ldrPin = A0;
int ledPin = 9;
int buzzerPin = 10;

int threshold = 600; // adjust based on your testing

void setup() {
  lcd.begin(16, 2);

  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  lcd.setCursor(0, 0);
  lcd.print("System Ready");
  delay(2000);
  lcd.clear();
}

void loop() {
  int lightValue = analogRead(ldrPin);

  lcd.clear();

  if (lightValue > threshold) {
    // HIGH BEAM DETECTED
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);

    lcd.setCursor(0, 0);
    lcd.print("GLARE DETECTED");
    lcd.setCursor(0, 1);
    lcd.print("Drive Safe");
  } 
  else {
    // NORMAL CONDITION
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);

    lcd.setCursor(0, 0);
    lcd.print("Normal Light");
    lcd.setCursor(0, 1);
    lcd.print("Safe Ride");
  }

  delay(300);
}
