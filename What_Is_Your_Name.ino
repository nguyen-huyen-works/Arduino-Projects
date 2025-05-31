String myName; 
String msg="What is your name?";
String msg2="Hello ";

// Ask, Wait, Read 

void setup() {
Serial.begin(9600);

}

void loop() {
Serial.println(msg); 
while (Serial.available()==0){
  // do nothing until data is here
}
myName=Serial.readString(); 
Serial.print(msg2);
Serial.print(myName);
}
