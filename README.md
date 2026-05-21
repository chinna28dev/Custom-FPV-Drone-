# Custom-FPV-Drone-
# Custom FPV Drone With Handmade Radio System

This project is a custom FPV freestyle drone using a handmade transmitter and receiver while keeping the flight system based on Betaflight for stability and reliability.

The main goal of this project is to replace the normal RC transmitter and receiver with a custom communication system.

The drone uses:
- Arduino Nano based transmitter
- Arduino Nano based receiver
- NRF24L01 wireless communication
- PWM to SBUS conversion
- Velox Cine F7 Flight Controller
- Velox V50A 4in1 ESC
- Analog FPV system

---

# Project Idea

Instead of building a complete custom flight controller, this project keeps the drone stabilization system professional and only customizes the radio communication part.

Betaflight handles:
- stabilization
- gyro processing
- PID control
- ESC communication

The custom radio system handles:
- joystick inputs
- wireless communication
- PWM channel generation

This gives a much higher success rate for beginners.

---

# System Architecture


Hand Movement
     ↓
Custom Transmitter
(Arduino Nano + NRF24)
     ↓
Wireless Communication
     ↓
Custom Receiver
(Arduino Nano + NRF24)
     ↓
PWM Outputs
     ↓
PWM to SBUS Converter
     ↓
Velox Cine F7 Flight Controller
     ↓
Velox V50A 4in1 ESC
     ↓
Brushless Motors

---

# Components Used

## Drone Electronics

| Components.       | Model |
|---                |---|
| Flight Controller | Velox Cine F7 |
| ESC.              | Velox V50A 4in1 ESC |
| Motors.           | 2207 2450KV Brushless Motors |
| Propellers        | 5 Inch Tri-Blade Props |
| Battery.          | 6s 2200mAh LiPo |
| FPV Camera.       | Runcam Phoenix 2 |
| VTX.              | Eachine TX805 |
| Frame.            | 5 Inch Carbon Fiber Frame |



---



---

# Disclaimer

This project uses LiPo batteries and high speed brushless motors.

Always follow proper safety precautions during testing and flying.
