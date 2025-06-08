int bluePin = 8;
int redPin = 10;
int greenPin = 9;
String myColor; 
String msg="What colour do you want?";
void setup() {
  // put your setup code here, to run once:
pinMode(bluePin, OUTPUT); 
pinMode(redPin,OUTPUT);
pinMode(greenPin, OUTPUT); 
Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
  // ASK, WAIT, READ 
  Serial.println(msg); 
  while (Serial.available()==0){
    // do nothing until answer is heore 
  }
  myColor = Serial.readString();

  if (myColor=="red"){
    digitalWrite(redPin, HIGH); 
    digitalWrite(bluePin, LOW); 
    digitalWrite(greenPin, LOW); 
  }

  if (myColor=="blue"){
    digitalWrite(redPin, LOW); 
    digitalWrite(bluePin, HIGH); 
    digitalWrite(greenPin, LOW); 
  }

  if (myColor=="green"){
    digitalWrite(redPin, LOW); 
    digitalWrite(bluePin, LOW); 
    digitalWrite(greenPin, HIGH); 
  }


if (myColor=="off"){
    digitalWrite(redPin, LOW); 
    digitalWrite(bluePin, LOW); 
    digitalWrite(greenPin, LOW); 
  }

  if (myColor=="yellow"){
    analogWrite(redPin, 255); 
    analogWrite(bluePin, 0); 
    analogWrite(greenPin, 255); 
  }

  if (myColor=="cyan"){
    analogWrite(redPin, 0); 
    analogWrite(bluePin, 255); 
    analogWrite(greenPin, 255); 
  }

}
