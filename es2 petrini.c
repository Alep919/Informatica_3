/*2- scrivere un programma in pseudocodifica e in linguaggio c che consenta di prendere in input un vettore di k elementi con k minore di 100
e un valore num. Il programma deve cercare il valore num e stampare il messaggio "num non trovato" nel caso num non fosse presente nella lista;
qualora num fosse presente nella lista il programma deve eliminarlo dalla lista con il metodo dello shift */
#include <stdio.h>
main(){
    int k;
    int i;
    int trovato;
    int x;
    int num;
    do{
    	printf("Inserire k \n");
    	scanf("%d",&k);
	}while(k>100);
	int numeri[k];
	i=0;
	while(i<k){
		printf("Inserire numero \n");
		scanf("%d",&numeri[i]);
		i++;
	}
	i=0;
	while(i<k){
		if(numeri[i]==num){
			trovato=1;
			x=i;
		}else{
			printf("Numero non trovato \n");
		}
	}
	if(trovato==1){
		while(x<k){
			numeri[x]=numeri[x+1];
			x++;
		}else{
			i=0;
			while(i<k){
				printf("%d",numeri[i]);
				i++;
			}
		}
	}
}
        
