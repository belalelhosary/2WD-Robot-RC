// C++ code
//
int in1=10,in2=9,in3=8,in4=7;
int ena=11,enb=3;
char reading;
void setup()
{
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);
}

void loop()
{
  if(Serial.available()>0){
    reading=Serial.read();
    switch(reading){
      case 'f':
      analogWrite(ena,127);
 analogWrite(enb,127);
   digitalWrite(in1,1);
  digitalWrite(in2,0);
  digitalWrite(in3,1);
  digitalWrite(in4,0);break;
      case'b':
      analogWrite(ena,127);
 analogWrite(enb,127);
   digitalWrite(in1,0);
  digitalWrite(in2,1);
  digitalWrite(in3,0);
  digitalWrite(in4,1); break;
 case'r':
       analogWrite(ena,127);
 analogWrite(enb,0);
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,0); break;
      case'l':
      analogWrite(enb,127);
  digitalWrite(in1,0);
  digitalWrite(in2,0);
  digitalWrite(in3,1);
     digitalWrite(in4,0); break;
      case's':
           analogWrite(ena,0);
  analogWrite(enb,0);
  digitalWrite(in1,0);
   digitalWrite(in2,0);
   digitalWrite(in3,0);  
    digitalWrite(in4,0);
      break;
    }}}