// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(random(100,1001)); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
delay(random(100,1001));
}