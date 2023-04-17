
const int LED = 5; 
const int BUTTON = 33;

void setup() {
pinMode(LED, OUTPUT);
pinMode(BUTTON, INPUT_PULLUP);

}

void loop() {
 int BUT = digitalRead(33);
if (BUT == 0){  
digitalWrite(LED, LOW);
}else{
digitalWrite(LED, HIGH);
}}