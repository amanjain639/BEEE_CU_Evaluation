int b1=0,b2=0;

void setup()
{
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
}

void loop()
{
 b1=digitalRead(7);
 b2=digitalRead(6);
  
 if((b1==HIGH&&b2==LOW)||(b1==LOW&&b2==HIGH))
  {
  	digitalWrite(1,HIGH);
    digitalWrite(0,LOW);
  }
 else if(b1==HIGH&&b2==HIGH)
  {
  	digitalWrite(1,LOW);
    digitalWrite(0,HIGH);
  }
  else
  {
  digitalWrite(1,LOW);
    digitalWrite(0,LOW);
  }
}