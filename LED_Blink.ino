int ledPin1 = 5;
int ledPin2 = 6;
int ledPin3 = 7;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin1, HIGH);  
  delay(50);                 
  digitalWrite(ledPin1, LOW);   
  delay(50);

  digitalWrite(ledPin2, HIGH);  
  delay(50);                 
  digitalWrite(ledPin2, LOW);   
  delay(50);  

  digitalWrite(ledPin3, HIGH);  
  delay(100);                 
  digitalWrite(ledPin3, LOW);   
  delay(100);                  
}
