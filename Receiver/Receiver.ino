 
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

void setup() {
  Serial.begin(9600);

  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_HIGH);
  radio.startListening();
}

void loop() {

  if (radio.available()) {

    radio.read(&data, sizeof(Data));

    Serial.print("Throttle: ");
    Serial.print(data.throttle);

    Serial.print(" | Yaw: ");
    Serial.print(data.yaw);

    Serial.print(" | Pitch: ");
    Serial.print(data.pitch);

    Serial.print(" | Roll: ");
    Serial.println(data.roll);
  }
}
