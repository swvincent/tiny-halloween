// fading-eyes
// https://github.com/swvincent/tiny-halloween
// 
// I used this to fade the eyes of a halloween decoration on and off. It
// gives it a creepy effect of quickly "waking up" and then fading back
// to rest every 10 seconds.

void setup()
{}

void loop()
{
  // Fade in quickly
  for (int fadeValue = 25 ; fadeValue <= 235; fadeValue += 1)
  {
    analogWrite(0, fadeValue);
    analogWrite(1, fadeValue);
    delay(20);
  }

  // Hold
  delay(200);

  // Fade out slowly
  for (int fadeValue = 235 ; fadeValue >= 25; fadeValue -= 1)
  {
    analogWrite(0, fadeValue);
    analogWrite(1, fadeValue);
    delay(40);
  }

  // Hold for 10 seconds, repeat
  delay(10000);
}
