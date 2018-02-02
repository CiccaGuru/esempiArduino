#define LED1 4
#define LED2 5
#define TEMPO1 500
#define TEMPO2 300
/*
In questo programma facciamo lampeggiare il led senza usare un delay lungo, ma tanti delay piccoli.
In questo modo riusciamo a far lampeggiare in contemporanea due led con velocità diverse (in questo caso, 
500ms e 300ms).

Se infatti usassimo un delay da 500ms, durante quel tempo Arduino rimarrebbe completamente fermo, quindi non 
potremmo far lampeggiare l'altro led di un tempo inferiore!

Per fare questo useremo la funzione millis() che restituisce il numero di millisecondi che sono passati
da quando Arduino è stato acceso, e calcoleremo la differenza tra il momento il cui ho acceso (o spento) 
per l'ultima volta il led e il momento attuale. Se questa differenza è maggiore del tempo di accensione del 
led(500ms o 300ms), allora devo accendere o spegnere il led, altrimenti non faccio nulla.
Useremo anche delle variabili globali: se dichiariamo le variabili dentro il void loop, infatti, quando 
il loop finisce e riparte daccapo la variabile viene dichiarata un'altra volta e si cancella il contenuto 
che aveva prima. Se invece la dichiariamo subito prima del void loop, la variabile sopravviverà alle
varie esecuzioni del void loop, cosicché possiamo utilizzare il valore che aveva precedentemente

*/


void setup(){
	pinMode(LED1, OUTPUT);
	pinMode(LED2, OUTPUT);

}


long int tempoPrecedente1, tempoPrecedente2;	// variabili che contengono l'ultimo tempo in cui ho cambiato lo stato del led
int statoLed1, statoLed2			// variabili che contengono lo stato dei led

void loop(){
	long int tempoAttuale = millis();	// tempo a cui mi trovo ora

	//LED 1
	// se sono passati più di TEMPO1 millisecondi dall'ultima volta che ho cambiato lo stato del led
	if (tempoAttuale - tempoPrecedente1 >= TEMPO1) {
		// salva in tempoPrecedente che ho cambiato lo stato del led in questo momento
		tempoPrecedente1 = tempoAttuale;
		if (statoLed1 == LOW) { 	// se il led era spento
			statoLed1 = HIGH;	// lo stato deve essere "acceso"
		} 	
		else {				// altrimenti
			statoLed1 = LOW;	// deve essere spento
		}
		digitalWrite(LED1, statoLed1);	// applica lo stato che abbiamo deciso prima
  	}

	//LED 2
	// se sono passati più di TEMPO1 millisecondi dall'ultima volta che ho cambiato lo stato del led
	if (tempoAttuale - tempoPrecedente2 >= TEMPO2) {
		// salva in tempoPrecedente che ho cambiato lo stato del led in questo momento
		tempoPrecedente2 = tempoAttuale;
		if (statoLed2 == LOW) { 	// se il led era spento
			statoLed2 = HIGH;	// lo stato deve essere "acceso"
		} 	
		else {				// altrimenti
			statoLed2 = LOW;	// deve essere spento
		}
		digitalWrite(LED2, statoLed2);	// applica lo stato che abbiamo deciso prima
  	}

	delay(10);

}
