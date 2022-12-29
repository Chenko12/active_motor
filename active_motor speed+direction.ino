int Vin;
void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  Vin =analogRead(A0);
  Serial.println(Vin);
  if(Vin <= 512)
  {
    digitalWrite(4,HIGH);
    digitalWrite(2,LOW);
    analogWrite(3,-Vin/2+255);
  }
  else
  {  
    digitalWrite(4,LOW);
    digitalWrite(2,HIGH);
    analogWrite(3,Vin/2-255);