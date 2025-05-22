int myLightPin = 6; // intialize Pin 6 
int potPin = A1;
float potVal; // Calculated voltage of potentiometer
float LEDVal; // calculated voltage of LED 
int time = 1000; 

void setup() {
  // put your setup code here, to run once:
pinMode(myLightPin, OUTPUT); // setting as OUTPUT sorce 
pinMode(potPin, INPUT); // INPUT source to read value 
Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
poyVal = analogRead(potPin); //get INPUT 
LEDVal = (255./1023.)*potVal; // calculate the voltage in terms for LED 
analogWrite(myLightPin, LEDVal); // change the brightness of the LED
Serial.print("pot val is ");
Serial.println(readVal);
delay(time); 
Serial.print("LED Val is ");
Serial.println(LEDVal);
delay(time); 

}
