#include <util/delay.h>  // Include the AVR delay library
#include <motor.h>
#include <myservo.h>

#define SERVO_PIN PB1

/*
// Define direction constants
#define FORWARD 1
#define BACKWARD 2
#define LEFT 3
#define RIGHT 4

*/

void setup() {
  Serial.begin(9600);
  setupServo();
  setupMotorPins();
}

void loop() {
  moveMotor(FORWARD, 70, MOVE_DURATION);    // Forward movement
  stopMotor();
  moveServoAt(90);
  turnMotor(3, 70, SMALL_TURN_DURATION);  // Small turn left
  stopMotor();
  moveServoAt(-90);
  turnMotor(4, 70, SMALL_TURN_DURATION); // Small turn right
  stopMotor();
  moveServoAt(90);
  turnMotor(3, 70, LARGE_TURN_DURATION);  // Large turn left
  stopMotor();
  moveServoAt(-90);
  turnMotor(4, 70, LARGE_TURN_DURATION); // Large turn right
  stopMotor();
  moveServoAt(0);
  moveMotor(2, 70, MOVE_DURATION);   // Backward movement
  stopMotor();
}