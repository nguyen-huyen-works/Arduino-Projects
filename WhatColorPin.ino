int redPin = 12; 
int greenPin = 7;
int bluePin = 2; 
String pinColor; 
String msg="What Color Pin Do You Want?";
String msg3="Loading...";
int time = 1000; 

void setup() {
Serial.begin(9600);
pinMode(redPin, OUTPUT); 
pinMode(greenPin, OUTPUT); 
pinMode(bluePin, OUTPUT); 

}

void loop() {
Serial.println(msg); 
while (Serial.available()==0){
  // do nothing till there is data
}
pinColor = Serial.readString();
Serial.println(msg3);
if (pinColor== "red" || pinColor=="Red"){
  digitalWrite(redPin, HIGH); 
  digitalWrite(greenPin, LOW); 
  digitalWrite(bluePin, LOW); 
  delay(time); 

}

if (pinColor== "green" || pinColor=="Green"){
  digitalWrite(redPin, LOW); 
  digitalWrite(greenPin, HIGH); 
  digitalWrite(bluePin, LOW); 
  delay(time); 

}

if (pinColor== "blue" || pinColor=="Blue"){
  digitalWrite(redPin, LOW); 
  digitalWrite(greenPin, LOW); 
  digitalWrite(bluePin, HIGH); 
  delay(time); 

}
digitalWrite(redPin, LOW); 
digitalWrite(greenPin, LOW); 
digitalWrite(bluePin, LOW); 
delay(500); 
}
