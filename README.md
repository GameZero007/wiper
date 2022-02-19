int MotorPin2 = 2;
int MotorPin3 = 3;
int level = 0;
void setup() {
  pinMode(MotorPin2, OUTPUT);
  pinMode(MotorPin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    level = Serial.read();
    Serial.println(level);
  }
  if (level == 1) {
    motor1();
  }
  if (level == 2) {
    motor2();
  }
  if (level == 3) {
    motor3();
  }
  if (level == 4) {
    motor4();
  }
  if (level == 5) {
    motor5();
  }
  if (level == 6) {
    motor6();
  }
}
void motor1() {
  digitalWrite(MotorPin2, HIGH);
  delay(6000);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
}
void motor2() {
  digitalWrite(MotorPin2, HIGH);
  delay(5000);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
}
void motor3() {
  digitalWrite(MotorPin2, HIGH);
  delay(4000);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
}
void motor4() {
  digitalWrite(MotorPin2, HIGH);
  delay(3000);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
}
void motor5() {
  digitalWrite(MotorPin2, HIGH);
  delay(2000);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
}
void motor6() {
  digitalWrite(MotorPin2, HIGH);
  delay(1000);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
}
