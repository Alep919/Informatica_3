//ES 21- Dati due numeri compresi tra 0 e 100 stampare il maggiore dei due
#include<stdio.h>
int main(){
	int n1,n2;
	do{
		printf("\nInserire un numero compreso tra 0 e 100:");
		scanf("%d",&n1);
	}while(n1<0 || n1>100);
	do{
		printf("\nInserire un numero compreso tra 0 e 100:");
		scanf("%d",&n2);
	}while(n2<0 || n2>100);
	if(n1>n2){
		printf("\nIl maggiore è %d",n1);
	}else{
		printf("\nIl maggiore è %d",n2);
	}
	getchar();
	getchar();
}
