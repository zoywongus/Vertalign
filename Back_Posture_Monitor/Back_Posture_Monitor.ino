//Created by: Majd Masoud, Siddarth Surana, Ryan Tang, Stanley Wong
//HackPrinceton 2018 Hardware Project
//Vertalign back project
//Code for light detection switch
int sensorValue = 0;
int sensorPin = A0;
int ledPin = 13;
int speakerPin = 2;
void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(speakerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // main code detect light from photoresistor
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue, DEC);
  if (sensorValue < 600) {
    digitalWrite(speakerPin, HIGH);
    delay(50);
  } else {
    digitalWrite(speakerPin, LOW);
  }
}
