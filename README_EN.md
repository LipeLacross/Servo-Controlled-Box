## 🌐 [Versão em Português do README](README.md)

# Servo-Controlled Box
# Integrated Hinge Box

This project involves creating an automated box that opens and closes using a servo motor and an ultrasonic sensor based on the detected distance of an object.

## 🔨 Project Features
- Automatic opening and closing of the box.
- Detection of objects up to 50 cm away.
- Control of the servo motor through a simple Arduino code.

### Visual Example of the Project

![Project in Action](https://github.com/user-attachments/assets/a7c4c8c5-693b-47a1-8e61-a985fe2773d2)
![Integrated Hinge Box](IntegratedHingeBox.jpg)

## ✔️ Techniques and Technologies Used
- **Arduino IDE**: For programming the Arduino.
- **C++**: Programming language used.
- **NewPing**: Library to facilitate reading from the ultrasonic sensor.
- **Servo**: Library to control the servo motor.

## 📁 Project Structure
- **IntegratedHingeBox.dxf**: Design file for the box (CAD format) obtained from [Hackerspace Bamberg](https://boxes.hackerspace-bamberg.de/).
- **IntegratedHingeBox.jpg**: Image of the Integrated Hinge Box project.
- **main.c**: Source code for the project in C++ for the Arduino.
- **README.md**: Documentation for the project.

## 🛠️ How to Run the Project
To start the project locally, follow the steps below:

1. **Make sure the Arduino IDE is installed**:
    - The [Arduino IDE](https://www.arduino.cc/en/software) is required to run the project. You can download it from the official website.

2. **Clone the Repository**:
    - Copy the repository URL and run the command below in the terminal:

      ```bash
      git clone <REPOSITORY_URL>
      ```

3. **Install the Required Libraries**:
    - Open the Arduino IDE and go to `Sketch` -> `Include Library` -> `Manage Libraries...`.
    - Search for and install the `Servo` and `NewPing` libraries.

4. **Upload the Code to the Arduino**:
    - Open the `main.c` file in the Arduino IDE, connect your Arduino, and upload the code.

5. **Connect the Hardware Components**:
    - Connect the servo motor and the ultrasonic sensor to the pins specified in the code (`trigPin` and `echoPin`).

6. **Test the Project**:
    - Power the Arduino and observe the automatic opening and closing of the box when an object is detected within 50 cm.

## 🌐 Deploy
This project can be used in applications that require automated interaction with objects, such as storage devices or delivery systems.
