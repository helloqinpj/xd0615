int i;
void setup()
{
  for(i=2;i<=11;i++)
  { 
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}
byte a=0;
void loop()
{ 
  if (Serial.available()>0)
  {
    a=Serial.read();
    a=a-'0';
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(2,a&0x1);
    digitalWrite(3,(a>>1)&0x1);
    digitalWrite(4,(a>>2)&0x1);
    digitalWrite(5,(a>>3)&0x1);
    digitalWrite(6,HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(11,HIGH);
  }
}