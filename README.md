# IR Keyboard Firmware

Firmware for an ESP32-based IR keyboard/remote that controls a speaker via IR.
The board uses an IR receiver to learn codes from an existing remote and an IR
transmitter LED to replay them.

## Status

Early development / hardware test.

## Features

- [ ] IR receiver test
- [ ] IR transmitter test
- [ ] Learn and replay IR codes
- [ ] Speaker control mapping
- [ ] Final keyboard firmware

## Hardware

- ESP32 dev board
- IR receiver
- IR LED with transistor driver
- Custom IR keyboard PCB 

## Pinout

| Function           | ESP32 GPIO
| ------------------ | ---------- 
| IR receiver data   | GPIO 5    
| IR transmitter     | GPIO 6   
| Power              | 3.3V       
| Ground             | GND        

## Software

- VS Code
- PlatformIO IDE extension
- `z3t0/IRremote@^4.1.2`

## Project Structure

```text
IR_Keyboard_firmware/
├── platformio.ini
├── src/
│   └── main.cpp
├── include/
├── lib/
├── test/
├── README.md
└── .gitignore
