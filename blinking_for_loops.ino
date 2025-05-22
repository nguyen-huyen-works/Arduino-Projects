int redPin = 9;
int yellowPin = 5; 
int time = 200; 
int yellowBlink = 3; 
int redBlink = 5; 
int j; 

void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=yellowBlink;j=j+1){
digitalWrite(yellowPin, HIGH); 
delay(time); 
digitalWrite(yellowPin, LOW); 
delay(time); 
}

for(j=1; j<= redBlink; j=j+1){
digitalWrite(redPin, HIGH); 
delay(time); 
digitalWrite(redPin, LOW); 
delay(time); 
}

}
