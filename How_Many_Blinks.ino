int myPin = 7; 
int time = 200; 
int numBlinks; 
String msg =" How many blinks do you want?: "; 
String msg2= "Okay the total numBlinks: "; 
String msg3= "Loading...";
int j; 
int time2 = 500; 

// ask, wait, read 
void setup() {
Serial.begin(9600); 
pinMode(myPin, OUTPUT); 

}

void loop() {
Serial.println(msg);
while (Serial.available()==0){
  // do nothing till data is available
}
numBlinks = Serial.parseInt();
Serial.print(msg2); 
Serial.println(numBlinks);
delay(time);
Serial.println(msg3); 
delay(100);
for (j=1; j<=numBlinks; j = j+1) {
  digitalWrite(myPin, HIGH); 
  delay(time2); 
  digitalWrite(myPin, LOW); 
  delay(time2); 
}

delay(500);

}
