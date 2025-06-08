int bluePin = 8;
int redPin = 10;
int greenPin = 9;
int potPin = A1; // Read INPUT from pot. Place in MIDDLE PIN 
float potVal; // Calculate VAL from 0 - 1023 
float LEDVal; // Calculate VAL from 0 - 255 
String msg = "LED Value is: ";
void setup() {
  // put your setup code here, to run once:
pinMode(bluePin, OUTPUT); 
pinMode(redPin,OUTPUT);
pinMode(greenPin, OUTPUT); 
pinMode(potPin, INPUT);  // grab INPUT 
Serial.begin(9600); // Begin Serial 

}

void loop() {
  

// Calculating the voltage values 
potVal = analogRead(potPin); // get INPUT 
LEDVal = (255./1023)*potVal; // calculate the voltage in terms of LED 
Serial.print(msg); 
Serial.println(LEDVal); 
delay(500);  // Print out current LEDVal 



  if (LEDVal==0){ // OFF
    analogWrite(redPin, 0); 
    analogWrite(bluePin, 0); 
    analogWrite(greenPin, 0);  
  }

  if (LEDVal>=31 && LEDVal<62){ // RED
    analogWrite(redPin, 255); 
    analogWrite(bluePin, 0); 
    analogWrite(greenPin, 0); 
  }

   if (LEDVal>=62 && LEDVal<93){ // ORANGE
    analogWrite(redPin, 255); 
    analogWrite(bluePin, 0 ); 
    analogWrite(greenPin, 127); 
  }

  if (LEDVal>=93 && LEDVal<124){ // YELLOW
    analogWrite(redPin, 255); 
    analogWrite(bluePin,0); 
    analogWrite(greenPin, 255); 
  }

  if (LEDVal>=124 && LEDVal< 155){ // GREEN
    analogWrite(redPin, 0); 
    analogWrite(bluePin, 0); 
    analogWrite(greenPin, 255); 
  }

  if (LEDVal>= 155 && LEDVal<186){ // BLUE
    analogWrite(redPin, 0); 
    analogWrite(bluePin, 255); 
    analogWrite(greenPin, 0); 
  }

  if (LEDVal>=186 && LEDVal<217){ // INDIGO
    analogWrite(redPin, 75); 
    analogWrite(bluePin, 130 ); 
    analogWrite(greenPin, 0); 
  }

  if (LEDVal>=217 && LEDVal<255){ // VIOLET
    analogWrite(redPin, 148); 
    analogWrite(bluePin, 211 ); 
    analogWrite(greenPin, 0); 
  }

   if (LEDVal==255){ // WHITE
    analogWrite(redPin, 255); 
    analogWrite(bluePin, 255 ); 
    analogWrite(greenPin, 255); 
  }




  
}
 
