#define LED_PWR    PD4
#define LED_OVEN   PD5
#define LED_TIME   PC7
#define LED_GPS    PD6

void ledTest() {
  digitalWrite(LED_PWR,HIGH);
  delay(250);
  digitalWrite(LED_PWR,LOW);
  digitalWrite(LED_OVEN,HIGH);
  delay(250);
  digitalWrite(LED_OVEN,LOW);
  digitalWrite(LED_TIME,HIGH);
  delay(250);
  digitalWrite(LED_TIME,LOW);
  digitalWrite(LED_GPS,HIGH);
  delay(250);
  digitalWrite(LED_GPS,LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PWR,OUTPUT);
  pinMode(LED_OVEN,OUTPUT);
  pinMode(LED_TIME,OUTPUT);
  pinMode(LED_GPS,OUTPUT);

  ledTest();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PWR,HIGH);
}
