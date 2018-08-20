

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  Serial.println(" * SOIL MOISTURE PROBE *");
  Serial.println("------------------------");
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  val = analogRead(0); //connect sensor to Analog 0
  Serial.println(val); //print the value to serial port
  delay(1000);
  if (val < 500)
  {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);  
}
}
