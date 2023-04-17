
const int LED = 5; 
const int BUTTON = 33;

void setup() {
pinMode(LED, OUTPUT);
pinMode(BUTTON, INPUT_PULLUP);

}

void loop() {
 digitalWrite(LED, HIGH);
 int BUT = digitalRead(33);

}