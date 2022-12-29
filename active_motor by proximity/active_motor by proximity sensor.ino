#include <Arduino_APDS9960.h>

void setup() {
  Serial.begin(9600);
  pinMode(A5,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);

  while (!Serial);

  if (!APDS.begin()) {
    Serial.println("Error initializing APDS9960 sensor!");
  }
}

void loop() {
  if (APDS.proximityAvailable()) {
    int proximity = APDS.readProximity();
    digitalWrite(4,HIGH);
    digitalWrite(2,LOW);
    analogWrite(3,proximity);
 
 
  }
}