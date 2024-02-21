int sensorPin = 0;
int outputPin = 3;
int sensorReading = 0;
int outputReading = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(outputPin,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
sensorReading = analogRead(sensorPin);
Serial.print("Analog reading = ");
Serial.println(sensorReading);
outputReading = map(sensorReading,0,1023,0,255);
analogWrite(outputPin,outputReading);
//tone(outputPin,sensorReading+200);
delay(100);
}
