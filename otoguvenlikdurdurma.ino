#define IN1 3
#define IN2 5
const int potIn = A0;

const int buzzer = 2;

const int echopin = 8;
const int trigpin = 7;

long sure,mesafe;



void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(trigpin,OUTPUT);  

}

void loop() {
  
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigpin,HIGH);
  
  sure = pulseIn(echopin,HIGH);
  mesafe = sure/58.2;
  
  long potdeger = analogRead(potIn);
  potdeger = map(potdeger, 0, 1023, 0, 255); 
  
  
if (mesafe < 15){
  digitalWrite(buzzer, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  

}

else{
  digitalWrite(buzzer,LOW);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(IN2,potdeger);
}

}











