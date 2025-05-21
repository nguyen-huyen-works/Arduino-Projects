// C++ code
//
int myVoltPin = A1; 
int readVal; 
int V2; 
int delaytime = 500; 
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  readVal = analogRead(myVoltPin); 
  V2 = (5./1023.)*readVal; 
  Serial.println(V2); 
  delay(delaytime); 
}
