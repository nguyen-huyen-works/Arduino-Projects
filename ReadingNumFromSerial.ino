int myNumber;
String msg = "Please Enter Your Number: ";
String msg2="Your Number is: ";
// Ask , Wait , Read


void setup() {
  Serial.begin(9600); 

}

void loop() {
Serial.println(msg); 
while (Serial.available() == 0); {
}
myNumber = Serial.parseInt(); // once the data is there, once it sees data, it drops down here 
Serial.print(msg2);
Serial.println(myNumber);

}

