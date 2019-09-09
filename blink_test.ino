void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, HIGH);
  delay(1500);
  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(100);
  //tone(LED_BUILTIN, 31);
}
