#include <Arduino.h>
#include <Servo.h>

#include <drop.h>

void moveServo (Servo servo, int servoPin) {

    for (int i = 0; i <= 180; i++)
    {
        servo.write(i);
        Serial.println("Servo position: " + String(i));
        delay(20);
    }

    Serial.println("Servo moved to end position");
    delay(1000);

    for (int i = 180; i >= 0; i--)
    {
        servo.write(i);
        Serial.println("Servo position: " + String(i));
        delay(20);
    }
    
    Serial.println("Servo moved to start position");
}