int i;
void setup()
{
  for(i=0;i<6;i++)
  {
    pinMode(i, OUTPUT);
    pinMode(i+6,OUTPUT);
  }
}

void loop()
{
  for (i=0;i<6;i++)
  {
    digitalWrite(i, HIGH);
    digitalWrite(i+6, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    digitalWrite(i+6, LOW);
    delay(100); // Wait for 1000 millisecond(s)
  }
}