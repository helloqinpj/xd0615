#define N1 2
#define N2 3
#define N3 4
#define N4 5

#define S1 8
#define S2 9
#define S3 10
#define S4 11

#define Hl 6
#define TL 7

void init_n()
{
  digitalWrite(N1,LOW);
  digitalWrite(N2,LOW);
  digitalWrite(N3,LOW);
  digitalWrite(N4,LOW);
  
  digitalWrite(Hl,HIGH);
  digitalWrite(TL,HIGH);
  
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);
}
void setup()
{
  pinMode(N1,OUTPUT);
  pinMode(N2,OUTPUT);
  pinMode(N3,OUTPUT);
  pinMode(N4,OUTPUT);
  pinMode(S1,OUTPUT);
  pinMode(S2,OUTPUT);
  pinMode(S3,OUTPUT);
  pinMode(S4,OUTPUT);
  pinMode(Hl,OUTPUT);
  pinMode(TL,OUTPUT);
  
  Serial.begin(9600);
}
byte a;
int i;
void loop()
{
  if(Serial.available()>0)
  {
    
  }
}