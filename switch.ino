////////////////////////////////////////////
// Arduino Leonardoから
// ショートカットキー [cmd + shift + option + m] を送る
////////////////////////////////////////////
#include <Keyboard.h>

#define ButtonPin 9

void setup()
{
  Keyboard.begin();
  pinMode(ButtonPin, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(ButtonPin) == LOW) // cmd + shift + m を送る
  {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('m');
    delay(100);
    Keyboard.releaseAll();

    while (digitalRead(ButtonPin) == LOW);
  }
  delay(100);
}
