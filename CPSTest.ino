#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Define all vars
int lastStatus = 0;
int clicks = 0;
int startTime = 0;

// Define const pins
const int BUTTON_PIN = 3;
const int LED_PIN = 13;

// Setup
void setup(){
  lcd.init();         // initialize the lcd
  lcd.backlight();    // Turn on the LCD screen backlight
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}

void loop(){
  if(digitalRead(BUTTON_PIN) != lastStatus){
    if(lastStatus == 1 && clicks < 5){
      if(clicks == 0){
        startTime = millis();
      }

      clicks++;
    }
  }
  if(clicks != 5){
  updateLCD(clicks, millis() - startTime);};
  
  lastStatus = digitalRead(BUTTON_PIN);
  delay(25);
  
}

// Display Info
void updateLCD(int clicksSoFar, int currentTime){
  lcd.clear();
  if(clicksSoFar == 0){
    lcd.setCursor(0, 0);
    lcd.print("Press the button");
    lcd.setCursor(3, 1);
    lcd.print("to start!");
  } else if(clicks == 5){
    lcd.setCursor(1, 0);
    lcd.print("You finished!");
    lcd.setCursor(0, 1);
    lcd.print("Avg: " + String(currentTime / 5.0) + "ms");
  } else {
    lcd.setCursor(3, 0);
    lcd.print("Clicks: " + String(clicksSoFar));
    lcd.setCursor(0, 1);
    lcd.print("Time: " + String(currentTime)+"ms");
  }
}


