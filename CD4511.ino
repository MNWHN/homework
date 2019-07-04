void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
  while (Serial.available() > 0) {
    income =Serial.read();
  }
light(income);
 /*switch(income)
  {
    case 0:light(0);break;
    case 1:light(1);break;
    case 2:light(2);break;
    case 3:light(3);break;
    case 4:light(4);break;
    case 5:light(5);break;
    case 6:light(6);break;
    case 7:light(7);break;
    case 8:light(8);break;
    case 9:light(9);break;
    default:break;
  }*/
}
void light(int input)
{
  digitalWrite(6,LOW);
  delay(10);
  
  if((input&1)==1)
  digitalWrite(2,HIGH);
  else
  digitalWrite(2,LOW);  
  if(((input>>1)&1)==1)
  digitalWrite(3,HIGH);
  else
  digitalWrite(3,LOW);
  if(((input>>2)&1)==1)
  digitalWrite(4,HIGH);
  else
  digitalWrite(4,LOW);
  if(((input>>3)&1)==1)
  digitalWrite(5,HIGH);
  else
  digitalWrite(5,LOW);
  
  digitalWrite(6,HIGH);
  delay(10);
  
}