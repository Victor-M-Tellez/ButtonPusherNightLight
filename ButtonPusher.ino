#include <Servo.h> 

Servo myServo;
int sensorValue;
int sensorLow =1023;
int sensorHigh =0;


void setup() {
  while(millis() < 5000){
    sensorValue = analogRead(A0);
    if (sensorValue > sensorHigh){  sensorHigh = sensorValue;  }
    if (sensorValue < sensorLow ){  sensorLow  = sensorValue;  }
    }
  myServo.attach(9);  
  Serial.begin(9600);
}
//**********************************************************************************************************************************  

void loop() {
  sensorValue = analogRead(A0);
  
  Serial.print ("sensorValue: ");
  Serial.println (sensorValue);
  

  if (sensorValue > 150 ){ 
    myServo.write(77); 
  
  }
  else{  
    myServo.write(120); 
  }
  delay(1000);
  

  
  
}


































