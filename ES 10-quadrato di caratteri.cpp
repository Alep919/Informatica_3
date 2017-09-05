//ES 11-Disegnare tramite l'uso del carattere # un quarato di lato n compreso tra 2 e 20
#include<stdio.h>
int main(){
	int n,i,x;
	do{
		printf("\nInserire il lato del quadrato:");
		scanf("%d",&n);
	}while(n<2||n>20);
	i=0;
	while(i<n){
		x=0;
		while(x<n){
			printf("#");
			x++;
		}
		printf("\n");
		i++;
	}
}
