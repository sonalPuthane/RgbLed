#include "Srp_RGB_01.h"

bool  Rgb::begin(int red, int green, int blue) {
    redPin = red;
    greenPin = green;
    bluePin = blue;

    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    
    return true;
}
bool  Rgb::begin(int red, int green) {
    redPin = red;
    greenPin = green;

    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);

    return true;
}
bool Rgb::begin(int red){
    redPin = red;
    pinMode(redPin, OUTPUT);
    
    return true;
}
void Rgb::set(int r, int g, int b) {
    for (int brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(r, brightness);
    delay(30);
  }
  for (int brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(r, brightness);
    delay(30);
  }
  delay(500);  // Small delay before switching to next color

  // Fade GREEN LED from 0 to 255 and back to 0
  for (int brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(g, brightness);
    delay(30);
  }
  for (int brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(g, brightness);
    delay(30);
  }
  delay(500);

  // Fade BLUE LED from 0 to 255 and back to 0
  for (int brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(b, brightness);
    delay(30);
  }
  for (int brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(b, brightness);
    delay(30);
  }
  delay(500);
}

void Rgb::set(int r, int g)
{
  for (int brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(r, brightness);
    delay(30);
  }
  for (int brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(r, brightness);
    delay(30);
  }
  delay(500);  // Small delay before switching to next color

  // Fade GREEN LED from 0 to 255 and back to 0
  for (int brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(g, brightness);
    delay(30);
  }
  for (int brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(g, brightness);
    delay(30);
  }
  delay(500);

}
void Rgb::set(int r)
{
    
  for (int brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(r, brightness);
    delay(30);
  }
  for (int brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(r, brightness);
    delay(30);
  }
  delay(500);
}

