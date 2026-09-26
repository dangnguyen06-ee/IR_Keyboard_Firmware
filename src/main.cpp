#include <Arduino.h>
#include <IRremote.hpp>

#define IR_RECEIVE_PIN 6

void setup() {
  Serial.begin(115200);

  Serial.println("IR Receiver Test");
  Serial.println("Point your IR remote at the receiver and press a button.");

  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
}

void loop() {
  if (IrReceiver.decode()) {
    Serial.print("Received IR code: ");
    Serial.print(getProtocolString(IrReceiver.decodedIRData.protocol));
    Serial.print(", Address: ");
    Serial.print(IrReceiver.decodedIRData.address, HEX);
    Serial.print(", Command: ");
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);


    IrReceiver.resume(); // Prepare for the next value
  }
}
