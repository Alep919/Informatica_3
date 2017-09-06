// Esercizio 3 - Somma dei primi 100 numeri //
//Alessandro Petrini 3INA - 14/11/2016 //
#include<stdlib.h>
#include<stdio.h>
main(){
	int I,SOMMA;
	SOMMA=0;
	I=1;
	while(I<=100){
		SOMMA=SOMMA+I;
		I=I+1;
	}
	printf("\n %d", SOMMA);
	system ("PAUSE");
}
