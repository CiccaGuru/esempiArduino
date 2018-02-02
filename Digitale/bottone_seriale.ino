#define PULSANTE 5 	// pin a cui ho collegato il pulsante

void setup(){
	pinMode(PULSANTE, INPUT);	// imposto il pin PULSANTE come input
	Serial.begin(9600);		// faccio partire la comunicazione seriale
}

void loop(){
	int valore = digitalRead(PULSANTE);	// variabile in cui salvo il valore letto del pulsante
	if(valore == HIGH){			// se è premuto
		Serial.println("PREMUTO");	// scrivi "premuto"	
	}	
	else{					// altrimenti
		Serial.println("NON PREMUTO");	// scrivi "non premuto"
	}
	delay(100);				// delay per sicurezza
}
