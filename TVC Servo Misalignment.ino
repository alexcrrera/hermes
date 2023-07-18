
#include <Servo.h>

Servo myservo;  
int angle = 90;  // default center position
char input;

void setup() {
    myservo.attach(10);  // select your servo's input
    Serial.begin(9600);
}

void loop() {

  if(Serial.available()){
        input = Serial.read();
        
        if(input=='+'){
          angle = angle+1;    
        }
        if(input=='-'){
          angle = angle-1;
        }
        Serial.println(angle);
    }
    delay(50);
    myservo.write(angle);
}
