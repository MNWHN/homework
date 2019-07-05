int _delaytime=250;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
 String incomingByte="";
 while (Serial.available() > 0) {
    incomingByte +=char(Serial.read());
    delay(2);
 }
    for(int i=0;i<incomingByte.length();i++){
    switch(incomingByte[i]){
        case 'a':dot();dash();c_space();break;
        
        case 'b':dash();dot();dot();dot();c_space();break;

        case 'c':dash();dot();dash();dot();c_space();break;
       
        case 'd':dash();dot();dot();c_space();break;
       
        case 'e':dot();c_space();break;
        
        case 'f':dot();dot();dash();dot();c_space();break;
      
        case 'g':dash();dash();dot();c_space();break;
       
        case 'h':dot();dot();dot();dot();c_space();break;
        
        case 'i':dot();dot();c_space();break;
       
        case 'j':dot();dash();dash();dash();c_space();break;
       
        case 'k':dash();dot();dash();c_space();break;
        
        case 'l':dot();dash();dot();dot();c_space();break;
        
        case 'm':dash();dash();c_space();break;
        
        case 'n':dash();dot();c_space();break;
        
        case 'o':dash();dash();dash();c_space();break;
       
        case 'p':dot();dash();dash();dot();c_space();break;
        
        case 'q':dash();dash();dot();dash();c_space();break;
       
        case 'r':dot();dash();dot();c_space();break;
        
        case 's':dot();dot();dot();c_space();break;
       
        case 't':dash();c_space();break;
       
        case 'u':dot();dot();dash();c_space();break;
        
        case 'v':dot();dot();dot();dash();c_space();break;
        
        case 'w':dot();dash();dash();c_space();break;
        
        case 'x':dash();dot();dot();dash();c_space();break;
        
        case 'y':dash();dot();dash();dash();c_space();break;
       
        case 'z':dash();dash();dot();dot();c_space();break;
       
        case '\0':w_space();break;
        
        case '\r':w_space();w_space();break;

        default:break;
    }
    }
    incomingByte="";
}
void dot()
{
	digitalWrite(LED_BUILTIN,HIGH);
	delay(_delaytime);
	digitalWrite(LED_BUILTIN,LOW);
	delay(_delaytime);
}

void dash()
{
	digitalWrite(LED_BUILTIN,HIGH);
	delay(_delaytime*4);
	digitalWrite(LED_BUILTIN,LOW);
	delay(_delaytime);
}

void c_space()
{
	digitalWrite(LED_BUILTIN,LOW);
	delay(_delaytime*3);
}

void w_space()
{
	digitalWrite(LED_BUILTIN,LOW);
	delay(_delaytime*7);
}