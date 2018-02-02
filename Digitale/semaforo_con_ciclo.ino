// DEFINE per definire le costanti che utilizziamo nel programma
#define DURATA 500	// millisecondi per cui vogliamo che resti acceso il led

void setup() {
  // imposto i pin come output
  pinMode(4, OUTPUT);  	
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  /* Sfrutto il fatto che ho messo i led in tre piedini consecutivi per usare un ciclo while */
  int i = 4;
  while(i <= 6){
    digitalWrite(i, HIGH);
    delay(DURATA);
    digitalWrite(i, LOW);
    delay(DURATA);
  }
}
