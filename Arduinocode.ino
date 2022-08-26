#define LEDY 13;
#define LEDG 12;
#define LEDRV 11;
#define LEDB 10;
#define LEDRH 9;
int speed = 250;
String bogdan = "";

void setup() {
  pinMode(LEDY, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDRV, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDRH, OUTPUT);
}

void loop() {
  digitalWrite(LEDB, HIGH);
  delay(200);
  digitalWrite(LEDB, LOW);
  digitalWrite(LEDG, HIGH);
  delay(200);
  digitalWrite(LEDG, LOW);
  digitalWrite(LEDRH, HIGH);
  delay(200);
  digitalWrite(L EDRH, LOW);
  digitalWrite(LEDY, HIGH);
  delay(200);
  digitalWrite(LEDY, LOW); 
  digitalWrite(LEDRV, HIGH);
  delay(200);
  digitalWrite(LEDRV, LOW); 
  
}
