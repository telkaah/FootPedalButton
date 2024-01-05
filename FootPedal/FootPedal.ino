#include "Keyboard.h"

//declaring button pins
const int buttonPin = 5;          

int previousButtonState = HIGH; 

void setup() {
  //declare the buttons as input_pullup
  pinMode(buttonPin, INPUT_PULLUP);  
  Keyboard.begin();
}

void loop() {
  //checking the state of the button
  int buttonState = digitalRead(buttonPin);
  
 //replaces button press with UP arrow
  if (buttonState == HIGH && previousButtonState == LOW) {
      // and it's currently pressed:
    Keyboard.press(105);
    delay(50);
  }

  if (buttonState == LOW && previousButtonState == HIGH) {
      // and it's currently released:
    Keyboard.release(105);
    delay(50);
  }
 
  previousButtonState = buttonState;

}
