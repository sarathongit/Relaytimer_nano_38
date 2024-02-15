const int relayPin = 13;  // Relay connected to pin 13

void setup() {
  pinMode(relayPin, OUTPUT);  // Set the relay pin as an output
  //delay(10);
  digitalWrite(relayPin, LOW);  // Ensure the relay starts off
  //delay(5000);
}

void loop() {
  digitalWrite(relayPin, LOW);  // Turn on the relay
  delay(180000);  // Keep the relay on for 3 minutes (180000 milliseconds)

  digitalWrite(relayPin, HIGH);  // Turn off the relay
  delay(720000);  // Keep the relay off for 12 minutes (720000 milliseconds)
}
