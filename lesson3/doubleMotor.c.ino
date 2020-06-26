char ls;
void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.println("ok!");
}

void loop()
{
  if (Serial.available()>0)
  {
    ls=Serial.read();
    switch (ls)
    {
      case 'f':
      {
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        break;
      }
      case 'b':
      {
        digitalWrite(9,HIGH);
        digitalWrite(8,LOW);
        digitalWrite(7,HIGH);
        digitalWrite(6,LOW);
        break;
      }
      case 'l':
      {
        digitalWrite(9,HIGH);
        digitalWrite(8,LOW);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        break;
      }
      case 'r':
      {
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
        digitalWrite(7,HIGH);
        digitalWrite(6,LOW);
        break;
      }
      case 's':
      {
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
        break;
      }
      default:
        break;
    }
  }
}