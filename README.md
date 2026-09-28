# ESP32 PWM LED Fade

## Problem Statement

Use PWM to control LED brightness proportionally to a potentiometer value.

## Objective

To understand:

- Analog input
- PWM
- `analogWrite()`
- Mapping sensor values
- Controlling LED brightness

## Components

- ESP32 DevKitC V4
- Potentiometer
- LED
- 220Ω resistor

## GPIO Configuration

| Component | ESP32 GPIO |
|-----------|------------|
| Potentiometer Signal | GPIO 34 |
| LED | GPIO 2 |

## Working

The potentiometer provides an analog value between 0 and 4095.

The value is mapped to the PWM brightness range of 0 to 255.

The mapped value is then used to control the LED brightness.

Therefore:

- Potentiometer at minimum → LED OFF
- Potentiometer in the middle → LED partially ON
- Potentiometer at maximum → LED fully ON

## Value Mapping

```text
Analog Input:  0 ─────────────── 4095
                  ↓ map()
PWM Output:    0 ─────────────── 255