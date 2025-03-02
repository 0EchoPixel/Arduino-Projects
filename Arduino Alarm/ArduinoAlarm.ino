#include <WiFiS3.h>

int signalpin = 13; // select your signal pin
const char ssid[] = "NAME";  // change your network SSID (name)
const char pass[] = "PASSWORD";   // change your network password (use for WPA, or use as key for WEP)

int status = WL_IDLE_STATUS;
WiFiServer server(80);

void setup() {
  Serial.begin(9600);
  String fv = WiFi.firmwareVersion();
  if (fv < WIFI_FIRMWARE_LATEST_VERSION)
    Serial.println("Please upgrade the firmware");

  pinMode(signalpin, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  digitalWrite(12, HIGH);

  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid, pass);
    delay(10000);
  }
  server.begin();
  printWifiStatus();
}

void loop() {
  WiFiClient client = server.available();
  
  if (client) {
    String request = client.readStringUntil('\r');
    client.flush();

    if (request.indexOf("/status") != -1) {
      client.println("HTTP/1.1 200 OK");
      client.println("Content-Type: text/plain");
      client.println("Connection: close");
      client.println();
      
      if (digitalRead(signalpin) == HIGH) {
        client.println("ALARM");
      } else {
        client.println("NORMAL");
      }
      client.stop();
      return;
    }

    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("Connection: close");
    client.println();
    
    client.println("<!DOCTYPE HTML>");
    client.println("<html>");
    client.println("<head>");
    client.println("<link rel=\"icon\" href=\"data:,\">");
    client.println("<script>");
    client.println("function checkStatus() {");
    client.println("  fetch('/status')");
    client.println("    .then(response => response.text())");
    client.println("    .then(data => {");
    client.println("      if (data.trim() === 'ALARM') {");
    client.println("        document.body.style.backgroundColor = 'red';");
    client.println("      } else {");
    client.println("        document.body.style.backgroundColor = 'black';");
    client.println("      }");
    client.println("    });");
    client.println("}");
    client.println("setInterval(checkStatus, 1000);");
    client.println("</script>");
    client.println("</head>");
    client.println("<body style=\"background-color: black; color: white; text-align: center;\">");
    client.println("</body>");
    client.println("</html>");
    client.stop();
  }
}

void printWifiStatus() {
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
  Serial.print("signal strength (RSSI):");
  Serial.print(WiFi.RSSI());
  Serial.println(" dBm");
}
