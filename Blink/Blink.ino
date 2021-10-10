 
int GREEN =11;
int YELLOW =10;
int RED =7;
int BLUE =6;
int LED =12;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite(RED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(BLUE, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(GREEN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(YELLOW, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(GREEN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
  digitalWrite(YELLOW, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  digitalWrite(BLUE, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  
  digitalWrite(RED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
  
}
