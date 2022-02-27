#include <SoftwareSerial.h>
SoftwareSerial myserial(11, 10); // RX, TX

void setup() {
  myserial.begin(9600);
  delay(500);
}

void loop() {
  delay(300);
  myserial.print('a');

}
