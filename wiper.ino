int MotorPin2 = 2;
int MotorPin3 = 3;
int sensor = 4;
int level = 0;
int ss = 0;

void setup() {
  pinMode(MotorPin2, OUTPUT);
  pinMode(MotorPin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    ss = Serial.read();
    Serial.println(ss);
  }
  if (ss <= 199) {
    motor1();
  }
  if (ss <= 299) {
    motor2();
  }
  if (ss <= 399) {
    motor3();
  }
  if (ss <= 499) {
    motor4();
  }
  if (ss <= 599) {
    motor5();
  }
  if (ss > 600) {
    motor6();
  }

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
