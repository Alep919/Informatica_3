//ES 12-dati 10 numeri interi inseriti dall'utente stampare i numeri in ordine inverso rispetto a quello di inserimento. il numero 0 non deve essere stampato
#include<stdio.h>
int main(){
	int x;
	int num[10];
	for(x=0;x<10;x++){
		printf("\nInserire numero:");
		scanf("%d",&num[x]);
	}
	for(x=9;x>=0;x--){
		if(num[x]!=0){
			printf("%d",num[x]);
			
		}
	}
}
