#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float n;		// n da inserire 
	float e;		// costante di nepero
	float i;		// contatore per il fattoriale
	float f;		// fattoriale
	do{
		printf("Inserire N");
		scanf("%f",&n);
	}while(n>100);
		do{
			f=1;
			for(i=n; i>0; i--){		//ciclo con cui calcolo il fattoriale
				f=f*i;
			}
			e=e+1/f;		//calcolo la costante di nepero
			n--;
		}while(n>-1);		
		printf("\n %f ",e);
	system("PAUSE");
}
