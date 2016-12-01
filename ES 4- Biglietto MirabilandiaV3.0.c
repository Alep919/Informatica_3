/* Alessandro Petrini 3INA 21/11/2016
ES 4- Biglietto Mirabilandia */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float prezzo;  //variabile prezzo
	float h; //variabile altezza
	float e;  //variabile età
	float disabile; //variabile disabile
	float supp;  //variabile supplemento mirabeach
	float accomp;  //variabile accompagnatore
	printf("\n Inserire 1 se l'utente è disabile, 0 se non lo è  ");
	scanf("%f",&disabile);
	if (disabile==0){ //chiedo se l'utente è un accompagnatore
		printf(" \n Inserire 1 se l'utente è un accompagnatore, 0 se non lo è");  //chiedo se l'utente è un accompagnatore
		scanf("%f",&accomp);
		if (accomp==0){  //dato che il cliente non è un accompagnatore gli chiedo l'età
			printf("\n Inserire l'età dell'utente");
			scanf("%f",&e);
			if (e>60){ //verifico se il cliente ha più di 60 anni, in tal casso prezzo025
				prezzo=25;
				printf("\n Inserire 1 se si vuole il supplemento mirabeach, 0 se non lo si vuole");  //chiedo se vuole il supplemento mirabeach
				scanf("%f",&supp);
				if(supp==1)
					prezzo=prezzo+7.50;
				}else{
					printf("\n Inserire l'altezza dell'utente"); //chiedo l'altezza dell'utente
					scanf("%f",&h);
					if(h<=100){  //verifico se l'altezza dell'utente è minore di 100cm se lo è prezzo=o
						prezzo=0;
						printf("\n Inserire 1 se si vuole il supplemento mirabeach, 0 se non lo si vuole");  //chiedo se vuole il supplemento mirabeach
						scanf("%f",&supp);
						if(supp==1)
							prezzo=prezzo+7.50;
						}else{
							if(h<=140){  //verifio se l'altezza dell'utente è minore o uguale a 140 cm
								prezzo=28;
								printf("\n Inserire 1 se si vuole il supplemento mirabeach, 0 se non lo si vuole");  //chiedo se vuole il supplemento mirabeach
								scanf("%f",&supp);
								if(supp==1)
									prezzo=prezzo+7.50;								
								}else{  //dato che l'utente è più alto di 140 cm prezzo=34,90
									prezzo=34.90;
									printf("\n Inserire 1 se si vuole il supplemento mirabeach, 0 se non lo si vuole");  //chiedo se vuole il supplemento mirabeach
									scanf("%f",&supp);
									if(supp==1)
										prezzo=prezzo+9.50;
								}
						}
				}
		}
		else{
		prezzo=25.50; //dato che il cliente è un accompagnatore prezzo=25
		printf("\n Inserire 1 se si vuole il supplemento mirabeach, 0 se non lo si vuole");  //chiedo se vuole il supplemento mirabeach
		scanf("%f",&supp);
		if(supp==1)
			prezzo=prezzo+9.50;
		}
	}else{
		prezzo=0;  //dato che il cliente è disabile prezzo=0
		printf("\n Inserire 1 se si vuole il supplemento mirabeach, 0 se non lo si vuole");  //chiedo se vuole il supplemento mirabeach
		scanf("%f",&supp);
		if(supp==1)
		prezzo=prezzo+9.50;
	}
printf("\n Il costo totale è di %f euro ",prezzo);  //stampo il prezzo totale da pagare
system("PAUSE");
}
