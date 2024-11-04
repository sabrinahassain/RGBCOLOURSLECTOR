// Define the pins for the RGB LED
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

// Define the pins for the potentiometers
const int redPotPin = A0;   // Potentiometer for red
const int greenPotPin = A1; // Potentiometer for green
const int bluePotPin = A2;  // Potentiometer for blue

void setup() {
  // Set the RGB LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Read the potentiometer values (0 to 1023)
  int redValue = analogRead(redPotPin);
  int greenValue = analogRead(greenPotPin);
  int blueValue = analogRead(bluePotPin);
  
  // Map the potentiometer values to the PWM range (0 to 255)
  redValue = map(redValue, 0, 1023, 0, 255);
  greenValue = map(greenValue, 0, 1023, 0, 255);
  blueValue = map(blueValue, 0, 1023, 0, 255);
  
  // Set the RGB LED color
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
  
  // Small delay for stability
  delay(10);
}
