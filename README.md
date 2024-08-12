# Click Speed Tester

This project is a **Click Speed Tester** built using an Arduino, a button, and an LCD display with an I2C interface. The tester measures the average time it takes for the user to complete five button presses and displays the results on the LCD screen. It’s a simple yet effective way to test and improve your reaction speed.

## Features

- **Real-Time Feedback:** The LCD display provides real-time feedback showing the number of clicks and the time elapsed.
- **Average Time Calculation:** After completing five clicks, the average time per click is calculated and displayed in milliseconds.
- **User-Friendly Interface:** The project provides clear instructions and feedback through the LCD screen, making it easy to use.

## Components Used

- **Arduino Uno (or any compatible board)**
- **4x4 Matrix Keypad**
- **16x2 LCD Display with I2C Backpack**
- **Button**
- **LED (optional for status indication)**
- **Jumper wires**
- **Breadboard**

## Circuit Diagram

Connect the components as follows:

- **LCD Display:**
  - `VCC` to Arduino `5V`
  - `GND` to Arduino `GND`
  - `SDA` to Arduino `A4`
  - `SCL` to Arduino `A5`
  
- **Button:**
  - One terminal to Arduino `Pin 3`
  - The other terminal to `GND`
  
- **LED (optional):**
  - Connect the positive leg to Arduino `Pin 13`
  - Connect the negative leg to `GND` through a resistor (220Ω recommended)

## Installation

1. **Clone this repository:**
   ```bash
   git clone [https://github.com/yourusername/click-speed-tester.git](https://github.com/AnthonyY-dev/ClickSpeedArduino.git)

## Youtube Video
- Here is a [youtube video](https://youtube.com/shorts/kKirBU0S8og?feature=share) I made on this project: https://youtube.com/shorts/kKirBU0S8og?feature=share
