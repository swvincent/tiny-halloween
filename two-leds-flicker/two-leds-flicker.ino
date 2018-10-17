// two-leds-flicker
// https://github.com/swvincent/tiny-halloween
//
// Flicker two leds to give a flame effect. I used with two orange LED as "eyes"
// on a small pumpkin decoration to make it more interesting than static LEDs.
//
// Based on:
// https://www.instructables.com/id/Realistic-Fire-Effect-with-Arduino-and-LEDs/

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
  analogWrite(0, random(120)+135);
  analogWrite(1, random(120)+135);
  delay(random(100));
}
