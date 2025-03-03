// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(0, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  
int A=analogRead(A0);
Serial.print("A=");
  Serial.println(A);
  int B=map(A, 6, 679,100,0);
  Serial.print("Particle Conc");
  Serial.println(B);
  Serial.println("%");

  if(B<40){
    digitalWrite(2,HIGH);
    digitalWrite(4,HIGH);  
    digitalWrite(3,HIGH);
    noTone(12);
  } 

  else if (B>=40 && B<=70){
    digitalWrite(2,LOW);
    digitalWrite(4,HIGH);  
    digitalWrite(3,LOW);
    tone(12,500);
    delay(1000);
    noTone(12);
    delay(1000);
  }
  
  else{
     digitalWrite(2,LOW);
    digitalWrite(4,LOW);  
    digitalWrite(3,HIGH);
    Serial.println("Particle concentration is too high");
    tone(12,500);
    delay(1000);
    noTone(12);
    delay(1000);

  
  }
  
  


}