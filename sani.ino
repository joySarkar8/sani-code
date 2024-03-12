
int IRSensorS = 12; // connect ir sensor for sani to arduino 12
int sani = 6; // connect pin 6 to pump


void setup() {
Serial.begin(9600);
pinMode(IRSensorS, INPUT); // connect pin 12 for input
pinMode(sani, OUTPUT); // connect pin 6 for output
}

void loop() {
while(1){
delay(1500);
if (digitalRead (IRSensorS) == LOW){
Serial.println(120);
digitalWrite(sani, HIGH); // then sanitizer on
delay(3000);
digitalWrite(sani, LOW); 
while(digitalRead (IRSensorS) == LOW);
}
else if(digitalRead (IRSensorS) == HIGH){ 
digitalWrite(sani, LOW);
}
}
}