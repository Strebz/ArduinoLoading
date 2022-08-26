#define LEDY 13 // One lamp
#define LEDG 12 // Another lamp
#define LEDRV 11 // Another another lamp
#define LEDB 10 // Another another another lamp
#define LEDRH 9 // Another another another another lamp

void setup() {
  pinMode(LEDY, OUTPUT); // One lamp
  pinMode(LEDG, OUTPUT); // Another lamp
  pinMode(LEDRV, OUTPUT); // Another another lamp
  pinMode(LEDB, OUTPUT); // Another another another lamp
  pinMode(LEDRH, OUTPUT); // Another another another another lamp
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
  digitalWrite(LEDRH, LOW);
  digitalWrite(LEDY, HIGH);
  delay(200);
  digitalWrite(LEDY, LOW); 
  digitalWrite(LEDRV, HIGH);
  delay(200);
  digitalWrite(LEDRV, LOW); 
  
}
