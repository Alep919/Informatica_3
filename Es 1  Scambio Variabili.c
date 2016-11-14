// Esercizio 1 - Scambio di valori tra due variabili. //
//Alessandro Petrini 3INA - 14/11/2016 //
#include<stdlib.h>
#include<stdio.h>
main(){
	int A,B,C; // Definisco le variabili //
	printf ("\n Inserire A"); // Richiesta di inserimento variabile A //
	scanf ("%d", & A); // Lettura variabile A //
	printf ("\n Inserire B"); // Richiesta di inserimento variabile B//
	scanf ("%d", & B ); // Lettura variabile B //
	C=A; // Inserisco il contenuto della variabile A all'interno della variabile C//
	A=B; // Inserisco il contenuto della variabile B all'interno della variabile A//
	B=C; // Inserisco il contenuto della variabile C all'interno della variabile B//
	printf ("\n %d", A);
	printf ("\n %d", B);
	system ("PAUSE");	
}
