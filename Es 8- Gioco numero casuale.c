#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int diff;
	int try;
	int num;
	int n;
	printf(" Inserire 1 per la difficolta' difficile, 0 per la difficolta' facile ");
	scanf("%d",&diff);
	if(diff==1){
		try=5;
	}else{
		try=10;
	}
	num= rand() % 100 + 1;
	while(try!=0){
		printf("Inserire un numero     ");
		scanf("%d",&n);
		if(n==num){
			try--;
			printf(" \n Hai vinto con ancora %d tentativi!",try);
			try=0;			
		}else{
			try--;
			if(diff==0){
				if(n>num){
					printf(" \n Hai sbagliato, il numero che hai inserito e' maggiore del numero da indovinare. Ti rimangono ancora %d tentativi.  ",try);
				}else{
					printf(" \n Hai sbagliato, il numero che hai inserito e' minore del numero da indovinare. Ti rimangono ancora %d tentativi.  ",try);
				}
			}else{
				printf(" \n Hai sbagliato, hai ancora %d tentativi.  ",try);
			}
		}
	}
	system("PAUSE");
}
