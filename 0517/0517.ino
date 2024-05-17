void setup() 
{
  
  Serial.begin(9600);

}

void loop() 
{
  int sensorValue = analogRead(A0);
  
  Serial.println(sensorValue);

  if(sensorValue >= 500)
  {
    sensorValue = 500;
  }
  else if(sensorValue <= 100)
  {
    sensorValue = 100;
  }

  int val = map(sensorValue , 100 , 500 , 0 , 255);
  analogWrite(9 , val);

  delay(1);

}
