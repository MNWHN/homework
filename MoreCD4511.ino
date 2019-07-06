void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}
int incoming;
int i=0;
void loop()
{
   if(i==4) i=0;
   while(Serial.available() > 0) {
        
    incoming=Serial.read()-'0';		
    
     if(i==0){
       digitalWrite(9,LOW);
       light(incoming);
       digitalWrite(9,HIGH);
     }
    if(i==1){
       digitalWrite(8,LOW);
       light(incoming);
       digitalWrite(8,HIGH);
     }
     if(i==2){
       digitalWrite(7,LOW);
       light(incoming);
       digitalWrite(7,HIGH);
     }
     if(i==3){
       digitalWrite(6,LOW);
       light(incoming);
       digitalWrite(6,HIGH);
     }
    i++;
   }
}
void light(int input)
{
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
} 
