#include <SoftwareSerial.h>
SoftwareSerial myserial(0, 1); // RX, TX
char incomingByte; // variável para o dado recebido

void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  //myserial.begin(38400);
  myserial.begin(9600);
}

void loop() {
  if (myserial.available() > 0) { // lê do buffer o dado recebido:
      incomingByte = myserial.read();
      if (incomingByte == 'a'){
         // Serial.println(incomingByte);
          digitalWrite(13, HIGH);
          delay(30*1000);
          digitalWrite(13, LOW);
      }
    }
}
