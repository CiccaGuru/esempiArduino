// DEFINE per definire le costanti che utilizziamo nel programma
#define LED_ROSSO 4	// pin a cui è collegato il led rosso
#define LED_GIALLO 5	// pin a cui è collegato il led giallo
#define LED_VERDE 6	// pin a cui è collegato il led verde
#define DURATA 500	// millisecondi per cui vogliamo che resti acceso il led

void setup() {
  // imposto i pin LED_ROSSO, LED_GIALLO, LED_VERDE come output
  pinMode(LED_ROSSO, OUTPUT);  	
  pinMode(LED_GIALLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
}

void loop() {
  /* accendo il led rosso per DURATA millisecondi (in questo caso 500) e poi lo spengo. 
  Stessa cosa per gli altri led*/
  
  digitalWrite(LED_ROSSO, HIGH);
  delay(DURATA);
  digitalWrite(LED_ROSSO, LOW);
  delay(DURATA);
  digitalWrite(LED_VERDE, HIGH);
  delay(DURATA);
  digitalWrite(LED_VERDE, LOW);
  delay(DURATA);
  digitalWrite(LED_GIALLO, HIGH);
  delay(DURATA);
  digitalWrite(LED_GIALLO, LOW);
  delay(DURATA);

}
