void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  //The analogue value can take from 0 to 255
  analogWrite(9, 255);
  delay(5000);
  analogWrite(9, 150);
  delay(5000);
  analogWrite(9, 60);
  delay(5000); // Wait for 1000 millisecond(s)
  
  analogWrite(10 ,255);
  delay(3000);
  analogWrite(10, 150);
  delay(3000);
  analogWrite(10, 50);
  delay(3000); // Wait for 1000 millisecond(s)
  
  analogWrite(11, 255);
  delay(5000);
  analogWrite(11, 0150);
  delay(3000);
  analogWrite(11, 60);
  delay(1000); // Wait for 1000 millisecond(s)
  
    
}
