#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "Suri_Home";
const char* password = "12345678";

WebServer server(80);

#define RELAY_PIN 23

void handleRoot() {

  String html =
  "<html><body style='text-align:center;font-family:Arial;'>"
  "<h1>Bulb Control</h1>"
  "<a href='/on'><button style='width:200px;height:80px;font-size:25px;'>ON</button></a>"
  "<br><br>"
  "<a href='/off'><button style='width:200px;height:80px;font-size:25px;'>OFF</button></a>"
  "</body></html>";

  server.send(200, "text/html", html);
}

void bulbOn() {
  digitalWrite(RELAY_PIN, LOW);   // Relay ON
  server.sendHeader("Location","/");
  server.send(303);
}

void bulbOff() {
  digitalWrite(RELAY_PIN, HIGH);  // Relay OFF
  server.sendHeader("Location","/");
  server.send(303);
}

void setup() {

  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH);

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);

  Serial.println("WiFi Started");
  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());

  server.on("/", handleRoot);
  server.on("/on", bulbOn);
  server.on("/off", bulbOff);

  server.begin();
}

void loop() {
  server.handleClient();
}
