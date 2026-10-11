# Smart Glare Detection and Alert System for Bikes

A low-cost, Arduino-based hardware prototype designed to detect potentially harmful glare from incoming vehicle headlights and alert two-wheeler riders during night-time driving.

The project focuses on **glare detection and rider alerts**, helping riders become aware of intense incoming headlights without automatically controlling the vehicle's headlights. The prototype is simulated using Tinkercad Circuits.

## Documentation

- **Circuit Simulation:** [Open Tinkercad Project](https://www.tinkercad.com/things/9z1GglvgxYv-swanky-blad/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=9tLdEPJNvx9w0gW_ZKWJoU9cIbG2SyuDvF0p9AP7RgE))
- **Source Code:** (SmartGlareDetection.ino)
-- **Circuit Screenshot:** [View Circuit Screenshot](./Screenshot%202026-10-11%20191038.png)

## What Works

- Light-intensity measurement using an LDR or photodiode sensor, depending on the implemented circuit.
- Arduino Uno reads the sensor output and compares it against a predefined threshold.
- LED-based visual alert when the measured light intensity crosses the configured threshold.
- LCD display for sensor readings or warning messages, if included in the prototype.
- Hardware circuit simulation and functional testing using Tinkercad Circuits.
- Adjustable detection threshold for testing under different simulated lighting conditions.

## System Workflow

1. The sensor measures incoming light intensity.
2. The sensor output is read by the Arduino Uno.
3. The Arduino compares the reading with the configured threshold.
4. If the threshold is exceeded, the system activates the visual alert.
5. The rider receives an indication of potentially intense incoming light.

## Hardware Components

| Component | Purpose |
|---|---|
| Arduino Uno | Main controller |
| LDR or photodiode | Light-intensity sensing |
| LED | Visual alert |
| Resistors | Current limiting and sensor circuit |
| 16×2 LCD | Readings or warning display, if used |
| Breadboard and jumper wires | Circuit assembly |

Use only the components included in the actual circuit when documenting the final prototype.

## Technologies Used

- Arduino C/C++ programming
- Tinkercad Circuits simulation
- Analog sensor interfacing
- Embedded systems
- Hardware prototyping

## Simulation and Testing

The circuit is developed and tested in Tinkercad Circuits. The sensor readings are observed under different simulated light conditions to evaluate the detection threshold and alert response.

**Tinkercad Simulation:** https://www.tinkercad.com/things/9z1GglvgxYv-swanky-blad/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=9tLdEPJNvx9w0gW_ZKWJoU9cIbG2SyuDvF0p9AP7RgE

Screenshots of the circuit and simulation are maintained in this repository.

## Repository Structure

```text
Smart-Glare-Detection-System/
├── SmartGlareDetection.ino
├── README.md
└── Screenshot 2026-10-11 191038.png
```

## Project Scope

This project is limited to detecting potentially intense incoming light and alerting the rider.

- No automatic headlight switching.
- No camera-based detection.
- No AI or YOLO-based detection.
- No claim of reliable long-distance vehicle identification.
- The prototype is a simulation-based proof of concept and requires real-world testing before road use.

## Limitations

- Sensor readings can vary with ambient lighting and sensor placement.
- A fixed threshold may not distinguish vehicle headlights from other bright light sources.
- Detection distance and response time have not been established without physical testing.
- Tinkercad simulation alone does not validate performance under actual night-driving conditions.

## Future Improvements

- Calibrate the sensor threshold under different ambient lighting conditions.
- Evaluate false alerts caused by streetlights and other light sources.
- Test sensor response time under controlled conditions.
- Develop a physical prototype and conduct safe, controlled testing.



