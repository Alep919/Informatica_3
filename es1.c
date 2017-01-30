/*1-Scrivere un programma in pseudocodifica e in linguaggio c che dato un vettore di k elementi con k compreso tra n1 e n2 con n2 minore di 1000 e dispari
e uno scalare num intero effettui il prodotto tra lo scalare e il vettore*/
#include <stdio.h>
int main (){
	int prod;
	int i;
	int n1;
	int n2;
	int k;
	int num;
	do{
		printf("Inserire N2 \n");
		scanf("%d",&n2);
	}while(n2>1000 || (n2%2)==0);
	do{
		printf("Inserire N1 \n");
		scanf("%d",&n1);
	}while(n1>=n2);
	do{
		printf("Inserire k \n");
		scanf("%d",&k);
	}while(k<n1 || k>n2);
	int numeri[k];
	i=0;
	printf("Inserire num \n");
	scanf("%d",&num);
	while(i<k){
		printf("Inserire un numero \n");
		scanf("%d",&numeri[i]);	
        num=num*numeri[i];
		i++;
	}
	printf("Il totale e' %d",num);
	getchar();
    getchar();
}
