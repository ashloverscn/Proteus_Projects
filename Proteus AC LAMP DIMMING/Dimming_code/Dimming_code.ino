
#define triacpulse 3
int dimming = 128;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(triacpulse, OUTPUT);
}

void loop() {
int  sensorValue=analogRead(A0);
  dimming=75*sensorValue;
  attachInterrupt(0,acon,FALLING);
}
void acon(){

delayMicroseconds(dimming);
digitalWrite(triacpulse,HIGH);
delayMicroseconds(10);
digitalWrite(triacpulse,LOW);

  
}
