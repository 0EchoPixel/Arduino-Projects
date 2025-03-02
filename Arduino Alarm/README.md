## Tired of your mom screaming that you are playing minecraft at 2AM?
# Meet arduino Alarm!
Arduino alarm is designed to detect movement and notify you through website in your local network
Entire website is normally black, but when it detects movement it turns into red which notifies you that movement has been detected
### When movement isnt detected
![image](https://github.com/user-attachments/assets/a4be6a9b-22c2-47ee-8416-6c49c15400b5)
### When movement is detected
![image](https://github.com/user-attachments/assets/da1adec8-c217-412e-ae1f-3a7730d7fc28)

# Setup
## Requirements: Arduino UNO R4 Wifi, PIR Motion detector
1. Download project file
Set your signal pin in line number 3 (lets take 13 for example)
![image](https://github.com/user-attachments/assets/1d06d877-dace-4aa8-bee1-1c015125a4e0)
Enter your WI-FI Details (name and password) at lines 4 and 5
![image](https://github.com/user-attachments/assets/1ef2aaf8-e8f7-4ead-a1a4-1585e35cfddc)
Then flash project into Arduino
![image](https://github.com/user-attachments/assets/64822a7c-ba98-4e59-b01e-d0a76641ef8b)


3. Wire **PIR Motion Detector** to **Arduino UNO R4 Wifi**
### Wiring:
![image](https://github.com/user-attachments/assets/62cb844b-102c-44e5-8a1e-c56a967aecc7)

3. You will see device IP Adress, Signal strenght and potential errors in Serial Monitor at 9600 baud
![image](https://github.com/user-attachments/assets/97426557-56bd-43e7-a6db-69db8df1533b)


4. Connect to device IP Adress in your browser and test if it works!
