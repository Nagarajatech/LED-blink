void setup() {
  pinMode(2, OUTPUT);   // GPIO2 output
}

void loop() {
  digitalWrite(2, HIGH); // LED ON
  delay(1000);           // 1 second wait
  digitalWrite(2, LOW);  // LED OFF
  delay(1000);           // 1 second wait
}
