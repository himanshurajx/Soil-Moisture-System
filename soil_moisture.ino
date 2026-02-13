int water; // random variable

void setup() {
  pinMode(3, OUTPUT);   // output pin for relay board, this will send signal to the relay
  pinMode(8, INPUT);    // input pin coming from soil sensor
}

void loop() {
  water = digitalRead(8);  // reading the coming signal from the soil sensor
  
  if (water == HIGH) {     // if water level is full then cut the relay
    digitalWrite(3, LOW);  // LOW is to cut the relay
  }
  else {
    digitalWrite(3, HIGH); // HIGH to continue proving signal and water supply
  }
  
  delay(400);
}