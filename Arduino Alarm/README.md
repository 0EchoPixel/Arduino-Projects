# Arduino Alarm – Motion Detection in Your Local Network  

## Tired of your mom yelling at you for playing Minecraft at 2 AM?  
### Meet Arduino Alarm  

Arduino Alarm is a simple motion detection system that notifies you through a webpage on your local network.  

- When no motion is detected, the page remains **black**.  
- When motion is detected, the page turns **red** to alert you.  

### How It Looks  
#### No Motion Detected  
![image](https://github.com/user-attachments/assets/a4be6a9b-22c2-47ee-8416-6c49c15400b5)  

#### Motion Detected  
![image](https://github.com/user-attachments/assets/da1adec8-c217-412e-ae1f-3a7730d7fc28)  

---

## Setup  
### Requirements  
- **Arduino UNO R4 WiFi**  
- **PIR Motion Sensor**  

### 1. Download the Project Files  
- Set the **signal pin** in the code (e.g., pin **13**, line 3).  
  ![image](https://github.com/user-attachments/assets/1d06d877-dace-4aa8-bee1-1c015125a4e0)  
- Enter your **Wi-Fi credentials** (SSID and password) in lines **4 and 5**.  
  ![image](https://github.com/user-attachments/assets/1ef2aaf8-e8f7-4ead-a1a4-1585e35cfddc)  
- Upload the code to your Arduino.  
  ![image](https://github.com/user-attachments/assets/64822a7c-ba98-4e59-b01e-d0a76641ef8b)  

### 2. Connect the PIR Motion Sensor to Arduino  
**Wiring Diagram:**  
![image](https://github.com/user-attachments/assets/62cb844b-102c-44e5-8a1e-c56a967aecc7)  

### 3. Get the Device IP Address  
Open the **Serial Monitor** (9600 baud) to see:  
- **Device IP address**  
- **Wi-Fi signal strength**  
- **Any potential errors**  
![image](https://github.com/user-attachments/assets/f270300d-b3f9-4653-8767-bd4770fbfc15)


### 4. Test the System  
- Enter the **device's IP address** in your browser.  
- Check if motion detection works as expected.  

That's it. Your motion detection system is now up and running.
