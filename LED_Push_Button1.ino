#define LED_PIN 13
#define PUSH_BUTTON 7
#define PUSH_BUTTON2 8
int BUTTON_VALUE = 0;
int BUTTON_VALUE2 = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(PUSH_BUTTON, INPUT);
   pinMode(PUSH_BUTTON2 , INPUT);
  Serial.begin(9600);
}

void loop() {
  BUTTON_VALUE = digitalRead(PUSH_BUTTON);
  Serial.println(BUTTON_VALUE);
  BUTTON_VALUE2 = digitalRead(PUSH_BUTTON2);
  Serial.println(BUTTON_VALUE);
  if (BUTTON_VALUE == 1) {
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    delay(100);
  } else {
    if(BUTTON_VALUE2 == 1){
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    }
  }
}
  