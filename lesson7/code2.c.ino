int pinInterrupt=2;
int i=0,t=0,j=0; 
byte num=0;
void myfunc()
{
  j=0;
}
 
void setup()
{
  for(t=3;t<10;t++)
  {
    pinMode(t,OUTPUT);
  }
  Serial.begin(9600); //初始化串口
  
  
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc,FALLING);
}

void loop()
{
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(7,LOW);
  num=j-'0';
  digitalWrite(3,num&0x1);
  digitalWrite(4,(num>>1)&0x1);
  digitalWrite(5,(num>>2)&0x1);
  digitalWrite(6,(num>>3)&0x1);
  digitalWrite(7,HIGH);
  j++;
  delay(1000);
  if (j>9)
    j=0;
  
}
