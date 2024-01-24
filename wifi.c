#include <ESP8266WiFi.h>

// Define the Wi-Fi credentials
const char* ssid = "your-ssid";
const char* password = "your-password";

// Define the switch pins
int SWITCH1_PIN = 2;
int SWITCH2_PIN = 3;

// Set up the Wi-Fi server
WiFiServer server(80);

void setup()
{
  // Set up the switch pins as output pins
  pinMode(SWITCH1_PIN, OUTPUT);
  pinMode(SWITCH2_PIN, OUTPUT);

  // Connect to Wi-Fi network
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);
  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);

  // Start the server
  server.begin();
}

void loop()
{
  // Wait for a client to connect
  WiFiClient client = server.available();
  if (client)
  {
    // Read the incoming command from the client
    String request = client.readStringUntil('\r');
    client.flush();

    // Turn on or off the switches based on the command
    if (request.indexOf("/switch1/on") != -1)
    {
      digitalWrite(SWITCH1_PIN, HIGH);
    }
    else if (request.indexOf("/switch1/off") != -1)
    {
      digitalWrite(SWITCH1_PIN, LOW);
    }
    else if (request.indexOf("/switch2/on") != -1)
    {
      digitalWrite(SWITCH2_PIN, HIGH);
    }
    else if (request.indexOf("/switch2/off") != -1)
    {
      digitalWrite(SWITCH2_PIN, LOW);
    }

    // Send the response back to the client
    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("");
    client.println("<!DOCTYPE HTML>");
    client.println("<html>");
    client.println("<head><title>Switch Control</title></head>");
    client.println("<body>");
    client.println("<h1>Switch Control</h1>");
    client.println("<p>Switch 1: <a href=\"/switch1/on\">ON</a> | <a href=\"/switch1/off\">OFF</a></p>");
    client.println("<p>Switch 2: <a href=\"/switch2/on\">ON</a> | <a href=\"/switch2/off\">OFF</a></p>");
    client.println("</body>");
    client.println("</html>");
    delay(1);
  }
}
