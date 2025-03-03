// Define the pins for the RGB LED
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

// Define the pin for the photoresistor
const int ldrPin = A0;

void setup() {
  // Initialize the RGB LED pins as output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the light intensity from the photoresistor
  int ldrValue = analogRead(ldrPin);
  
  // Print the light intensity to the serial monitor
  Serial.print("Light Intensity: ");
  Serial.println(ldrValue);

  // Set the RGB LED color based on the light intensity
  if (ldrValue < 300) {
    setColor(0, 0, 255); // Blue for low light
  } else if (ldrValue >= 300 && ldrValue < 600) {
    setColor(0, 255, 0); // Green for medium light
  } else {
    setColor(255, 0, 0); // Red for bright light
  }
  
  // Delay for a short period before the next reading
  delay(1000);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  //analogWrite(bluePin, blue);
}