#include <Keyboard.h>

int dummy = 5;

void setup() {

pinMode(dummy, INPUT);

}

void loop() {
  
if (digitalRead(dummy) == LOW) {

  Keyboard.press(KEY_KP_ENTER);
    delay(1000);
  Keyboard.press(KEY_KP_ENTER);
    delay(1000);
  Keyboard.press(KEY_KP_ENTER);
    delay(1000);

  }

}

