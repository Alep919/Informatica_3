//ES-9 Stampare le tabelline di tutti i numeri naturali comrpesi tra 2 e 10. Stampare una tabellina per riga
#include<stdio.h>
int main(){
	int n=2;
	int i=0;
	int tab;
	do{
		while(i<=10){
			tab=n*i;
			printf("%d-",tab);
			i++;
		}
		printf("\n");
		n++;
		i=0;
	}while(n<=10);
}
