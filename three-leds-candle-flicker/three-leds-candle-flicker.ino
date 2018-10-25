// three-leds-candle-flicker
// Scott W. Vincent
// https://github.com/swvincent/tiny-halloween
//
// Flicker three LEDs to give a flickering candle effect. I used it with red,
// yellow and amber LEDs inside a plastic jack 'o lantern.
//
// Based on:
// https://www.instructables.com/id/Realistic-Fire-Effect-with-Arduino-and-LEDs/
// by Mike McRoberts https://about.me/MikeMcRoberts
// 
// My program works the same way but using arrays and slight style differences.

int leds [] = { 0, 1, 4};
int pinCount = 3;

void setup()
{
  for (int curPin = 0; curPin < pinCount; curPin++)
  {
    pinMode(leds[curPin], OUTPUT);
  }
}

void loop()
{
  for (int curPin = 0; curPin < pinCount; curPin++)
  {
    analogWrite(leds[curPin], random(120)+135);
  }
  delay(random(100));
}
