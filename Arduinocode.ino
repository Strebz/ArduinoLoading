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
  digitalWrite(LEDB, HIGH); // Turning on one lamp
  delay(200); // One delay
  digitalWrite(LEDB, LOW); // Turning off one lamp
  digitalWrite(LEDG, HIGH); // Turning on another lamp
  delay(200); // Another delay
  digitalWrite(LEDG, LOW); // Turning off another lamp
  digitalWrite(LEDRH, HIGH); // Turning on another another lamp
  delay(200); // Another another delay
  digitalWrite(LEDRH, LOW); // Turning off another another lamp
  digitalWrite(LEDY, HIGH); // Turning on another another another lamp
  delay(200); // Another another another delay
  digitalWrite(LEDY, LOW); // Turning off another another another lamp
  digitalWrite(LEDRV, HIGH); // Turning on another another another another lamp
  delay(200); // Another another another another delay
  digitalWrite(LEDRV, LOW); // Turning off another another another another lamp
  
}
