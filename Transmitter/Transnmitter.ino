
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(9, 10);

const byte address[6] = "DRONE";

struct Data {
  int throttle;
  int yaw;
  int pitch;
  int roll;
};

Data data;

const int joy1X = A0;
const int joy1Y = A1;
const int joy2X = A2;
const int joy2Y = A3;

void setup() {
  Serial.begin(9600);

  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_HIGH);
  radio.stopListening();
}

void loop() {

  data.throttle = analogRead(joy1Y);
  data.yaw      = analogRead(joy1X);
  data.pitch    = analogRead(joy2Y);
  data.roll     = analogRead(joy2X);

  radio.write(&data, sizeof(Data));

  Serial.print("Throttle: ");
  Serial.print(data.throttle);

  Serial.print(" | Yaw: ");
  Serial.print(data.yaw);

  Serial.print(" | Pitch: ");
  Serial.print(data.pitch);

  Serial.print(" | Roll: ");
  Serial.println(data.roll);

  delay(50);
}
