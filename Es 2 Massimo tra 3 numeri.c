// Esercizio 2 - Massimo tra 3 Numeri //
//Alessandro Petrini 3INA - 14/11/2016 //
#include<stdlib.h>
#include<stdio.h>
main(){
	int N1,N2,N3,MAX; // Definisco le variabili//
	printf ("\n Inserire N1");
	scanf ("%d", & N1);
	printf ("\n Inserire N2");
	scanf ("%d", & N2);
	printf ("\n Inserire N3");
	scanf ("%d", & N3);
	if(N1>N2){  // Selezione attraverso cui stabilisco quale sia il numero maggiore tra N1 e N2 //
		MAX=N1;
	} else{
		MAX=N2;
	}
	if(N3>MAX){ // Selezione attraverso cui stabilisco quale sia il numero maggiore tra N3 e MAX //
		MAX=N3;
	} 
	printf("\n Il numero maggiore è = %d ", MAX);
	system ("PAUSE");
	
}
