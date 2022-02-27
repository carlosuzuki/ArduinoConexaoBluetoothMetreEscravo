#include <SoftwareSerial.h>
SoftwareSerial myserial(11, 10); // RX, TX
void setup() {
  myserial.begin(38400); //HC05 ("Pulo do gato") Os comandos AT no modulo HC05 devem ser enviados na velocidade de 38400 mesmo que o BAUND do mesmo diga que esta em 9600
  //myserial.begin(9600);
  Serial.begin(9600);
  Serial.println("Digite os comandos AT :");
}
void loop() {
  if (myserial.available())
    Serial.write(myserial.read());
  if (Serial.available())
    myserial.write(Serial.read());

}
