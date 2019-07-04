void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
    while (Serial.available() > 0) {
    income =Serial.read();
    
      switch(income)
      {
        case 'f':forwardlight();forward();break;
        case 'b':backwardlight();backward();break;
      	case 'l':leftlight();left();break;
        case 'r':rightlight();right();break;
        case 's':stoplight();stop();break;
        default:break;
      }
 	}
}
void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
void backward()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}
void left()
{
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
void right()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  
}
void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
void forwardlight()
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(13,LOW);
}
void backwardlight()
{
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(7,LOW);
}
void leftlight()
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(7,LOW);
}
void rightlight()
{
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(13,LOW);
}
void stoplight()
{
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(7,HIGH);
}
