const int ledpin=4;
const int ledpin2=7; // led pin and sound pin are not changed throughout the process
const int soundpin=A0;
const int threshold=700; // sets threshold for sound sensor
void setup() {
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(ledpin2,OUTPUT);
pinMode(soundpin,INPUT);
}
void loop() {
  int soundsens=analogRead(soundpin); // read analog data from sensorA
  Serial.println(soundsens);
  if (soundsens>=threshold) {
    digitalWrite(ledpin, HIGH); // turn led on
    digitalWrite(ledpin2, HIGH); // turn led on
    Serial.println("yes");
    delay(500);
  }
  else{
    digitalWrite(ledpin, LOW);
    digitalWrite(ledpin2, LOW);

  }
}// led pin and sound pin are not changed throughout the process
