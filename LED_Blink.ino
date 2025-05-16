void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);  // Turn the LED ON
  delay(1000);                 // Wait for 1 second
  digitalWrite(5, LOW);   // Turn the LED OFF
  delay(1000);                 // Wait for 1 second
}
