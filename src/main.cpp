#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

#define IR_RECEIVE_PIN 5

IRrecv irrecv(IR_RECEIVE_PIN);
decode_results results;

void setup() {
    Serial.begin(115200);
    while (!Serial && millis() < 3000) { delay(10); }
    Serial.println();
    Serial.println("=== IR Receiver Test ===");
    Serial.print("Receiver pin: GPIO ");
    Serial.println(IR_RECEIVE_PIN);

    irrecv.enableIRIn();
    Serial.println("Receiver enabled. Waiting for signal...");
}

void loop() {
    if (irrecv.decode(&results)) {
        Serial.print(">>> ");
        Serial.print(resultToHumanReadableBasic(&results));
        irrecv.resume();
    }
}