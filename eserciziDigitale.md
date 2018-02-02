# Esercizi su input e output digitale
# LED e pulsanti

*Questi sono alcuni esercizi su input e output digitale. Alcuni sono più difficili, altri più facili. Per risolvere alcuni, avrai bisogno di usare i costrutti del C imparati ad informatica, come if, cicli, variabili,...*

* **Semaforo**
Scrivi un programma che faccia lampeggiare a turno tre led.

* **Campanello luminoso**
Scrivi un programma che faccia lampeggiare un led solo mentre è premuto un pulsante

* **Doppio led**
Scrivi un programma che faccia accendere un led solo se un pulsante non è premuto. Se il pulsante è premuto, si deve accendere un altro led.

* **Interruttore**
Scrivi un programma che faccia accendere un led quando si preme un pulsante e che lo lasci acceso finché non si preme il pulsante un'altra volta. 
In pratica, all'inizio il led è spento. Quando schiaccio il pulsante si accende e rimane acceso finchè non lo schiaccio di nuovo, e così via 

* **Timer**
Scrivi un programma che faccia lampeggiare un led sempre più velocement. All'inizio il led deve lampeggiare ogni 1000ms ma ogni volta che lampeggia dura un po' di meno, (ossia lampeggia più velocemente), fino ad arrivare a 100ms. Deve fare 10 lampeggi. Arrivato a 100ms deve ritornare a 1000ms, sempre in 10 lampeggi. *(Difficile, ma non impossibile... Pensateci bene!)*

* **LED asincroni**
*Programma MOLTO difficile!*
Scrivi un programma che faccia lampeggiare un led ogni 500ms e, in contemporanea, un altro led ogni 300ms.
Per farlo, servirà la funzione *millis()*, che restituisce da quanto tempo è stato acceso Arduino (da mettere in una variabile long int)... Per maggiori info guarda nella cartella di esempi, c'è una spiegazione più dettagliata.
