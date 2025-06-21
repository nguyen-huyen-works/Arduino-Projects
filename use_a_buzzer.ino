int myNum;
int buzzPin = 8; 
String msg ="Please enter your Number: "; 
int time=2000; // two seconds


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // ASK WAIT READ 
Serial.println(msg); //Ask
while(Serial.available()==0){ // Wait 
    // do nothing
}
myNum = Serial.parseInt(); // Read
if (myNum>10) {
  digitalWrite(buzzPin, HIGH);
  delay(time);
  digitalWrite(buzzPin, LOW);
  delay(time);
  }


}
