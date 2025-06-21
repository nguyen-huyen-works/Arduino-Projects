int buzzPin=8;
int potPin = A1; // Read INPUT from pot. Place in MIDDLE PIN 
float potVal; // Calculate VAL from 0 - 1023 


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin, INPUT);
pinMode(buzzPin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
potVal = analogRead(potPin); // Get Input from A1 
Serial.println(potVal);
if (potVal>1000) {
  digitalWrite(buzzPin,HIGH);
}
if (potVal<1000) {
  digitalWrite(buzzPin, LOW);
}

}
