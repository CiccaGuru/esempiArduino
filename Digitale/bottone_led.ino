#define PULSANTE 5 	// pin a cui ho collegato il pulsante
#define LED 7		// pin a cui ho collegato il led
void setup(){
	pinMode(PULSANTE, INPUT);	// imposto il pin PULSANTE come input
	Serial.begin(9600);		// faccio partire la comunicazione seriale
}

void loop(){
	int valore = digitalRead(PULSANTE);	// variabile in cui salvo il valore letto del pulsante
	if(valore == HIGH){			// se è premuto
		digitalWrite(LED, HIGH);	// fai lampeggiare il led
		delay(500);
		digitalWrite(LED, LOW);
		delay(500);
	}	
	else{					// altrimenti
		digitalWrite(LED, LOW);		// tienilo spento
	}
}
