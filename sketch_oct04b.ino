#include <HIDKeyboard.h>
HIDKeyboard keyboard;

void setup() 
{
// put your setup code here, to run once:
  keyboard.begin();
  delay(200);

  keyboard.pressKey(GUI, 'R');
  keyboard.releaseKey();
  delay(200);
  keyboard.println("water")
  keyboard.pressSpecialKey(ENTER);
  delay(200);
}

void loop()
{
// put your main code here, to run repeatedly:
  
}
