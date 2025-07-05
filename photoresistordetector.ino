int analogPin=A0;
int lightVal;
int dv = 250; 
int greenPin=4;
int redPin=8;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(analogPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(analogPin);
  Serial.println(lightVal);
  delay(dv);
  if (lightVal < 220) {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  } else {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }

}
