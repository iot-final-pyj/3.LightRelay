#include <Arduino.h>

int     RELAY = 23;
int     SENSOR = 15;

void setup() {
    Serial.begin(115200); 
    pinMode(RELAY, OUTPUT);
} 

void loop() {
    int val = analogRead(SENSOR);
    if (val < 90) {
        digitalWrite(RELAY, HIGH);
    } else {
        digitalWrite(RELAY, LOW);
    }   
    delay(500); 
}