//ES 8-Dato un numero naturale compreso tra 2 e 10 stampare la relativa tabellina

#include<stdio.h>
int main(){
	int n;
	int i=1;
	int tab=0;
	do{
		printf("\nInserire numero compreso tra 2 e 10:");
		scanf("%d",&n);
	}while(n<2 || n>10);
	while(i<=10){
		tab=n*i;
		printf("%d-",tab);
		i++;
	}
	getchar();
	getchar();
}
