#include <Arduino.h>
#define Shoot_Pin 5

//-------------------------------------------------edit Parameter-------------------------------------------------------//
void setup() {
  Serial.begin(115200);
  motorsetup();
  Serial.print("RRSI: ");
  
  pinMode(Shoot_Pin, OUTPUT);
  digitalWrite(Shoot_Pin, 1);


  //----------------Edit sequence code here--------------//
  forward(1000);
  stop(500);
  Shoot(800);
  stop(500);

}
void loop() {

}
