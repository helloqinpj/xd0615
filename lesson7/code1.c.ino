int i;
void setup()
{
  for (i=2;i<9;i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i,HIGH);
  }
  Serial.begin(9600);
}
byte j=0;
void loop()
{
  j=j-'0';
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(2,j&0x1);
  digitalWrite(3,(j>>1)&0x1);
  digitalWrite(4,(j>>2)&0x1);
  digitalWrite(5,(j>>3)&0x1);
  digitalWrite(8,HIGH);
  j=j+1;
  delay(1000);
  if(j==10)
    j=0;
}