#include "HID-Project.h"

#define pinLed 3
//Para el volumen
#define btnVUp 5
#define btnVDown 6

//Para ZOOM
#define btnAudio 8 //Audio
#define btnVideo 9  //Video
#define btnHand 10 //rise hand

void setup() {
  pinMode(pinLed, OUTPUT);
  //Volumen
  pinMode(btnVUp, INPUT_PULLUP);
  pinMode(btnVDown, INPUT_PULLUP);
  Consumer.begin();

  //ZOOM
  pinMode(btnAudio, INPUT_PULLUP);
  pinMode(btnVideo, INPUT_PULLUP);
  pinMode(btnHand, INPUT_PULLUP);
}
void loop() {

  //VOLUMEN
  if (!digitalRead(btnVUp)) {
    Consumer.write(MEDIA_VOLUME_UP);
    digitalWrite(pinLed, HIGH);
    delay(300);
    digitalWrite(pinLed, LOW);
  }
  if (!digitalRead(btnVDown)) {
    Consumer.write(MEDIA_VOLUME_DOWN);
    digitalWrite(pinLed, HIGH);
    delay(300);
    digitalWrite(pinLed, LOW);
  }

  //ZOOM
  if (!digitalRead(btnAudio)) {
    //Alt+A: Mute/unmute my audio
    BootKeyboard.press(KEY_LEFT_ALT);
    BootKeyboard.write(KEY_A);
    BootKeyboard.release(KEY_LEFT_ALT);
    digitalWrite(pinLed, HIGH);
    delay(300);
    digitalWrite(pinLed, LOW);
  }
  
  if (!digitalRead(btnVideo)) {
    // Alt+V: Start/stop video
    BootKeyboard.press(KEY_LEFT_ALT);
    BootKeyboard.write(KEY_V);
    BootKeyboard.release(KEY_LEFT_ALT);
    digitalWrite(pinLed, HIGH);
    delay(300);
    digitalWrite(pinLed, LOW);
  }
  
  if (!digitalRead(btnHand)) {
    // Alt+Y: Raise/lower hand
    BootKeyboard.press(KEY_LEFT_ALT);
    BootKeyboard.write(KEY_Y);
    BootKeyboard.release(KEY_LEFT_ALT);
    digitalWrite(pinLed, HIGH);
    delay(300);
    digitalWrite(pinLed, LOW);
  }
}
