/* Alessandro Petrini 3INA 21/11/2016
ES 4- Biglietto Mirabilandia */
#include <stdio.h>
#include <stdlib.h>
main(){
	float prezzo; /*Variabile contenente il prezzo da pagare */
	int h; /*Variabile contenente l'altezza */
	int e; /*Variabile contenente l'età */
	int disabile; /*Variabile utilizzata per sapere se l'utente è disabile o no*/
	int supp; /*Variabile utilizzata per sapere se l'utente desidera il supplemento Mirabeach o no*/
printf(" \n Inserire 1 se la persona è disabile, 0 se non lo è" );
scanf ("%d", &disabile);
if(disabile==1) {  // controllo se utente  è disabile in tal caso prezzo=0
	prezzo=0;
	printf("\n Il prezzo da pagare è di 0 euro");
}
printf(" \n Inserire l'altezza");
scanf ("%d",&h);
printf(" \n Inserire l'età'");
scanf ("%d",&e);
if(100<h<140) {
	prezzo=28;
}else{
	if(h<100){
		prezzo=0;
	}else{
		if(e>60){
			prezzo=25;
		}else{
			prezzo=34,90;
		}
	}
}
printf("\n Inserire 1 se si vuole il supplemento Mirabeach, 0 se non lo si vuole");
scanf("%d",&supp);
if(supp=1){
	if(prezzo==34,90){
		prezzo=prezzo+9,50;
		printf("\n Il prezzo da pagare è di %f euro",prezzo);
	}else{
		prezzo=prezzo+7,50;
		printf("\n Il prezzo da pagare è di %f euro",prezzo);		
	}
}else{
	printf("\n Il prezzo da pagare è di %f euro",prezzo);
}
}









