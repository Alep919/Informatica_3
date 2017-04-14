#include<stdio.h>
int main(){
	int cont;
	int i;
	char parola[100];
	int palindromo;
	int medio;
	printf("Inserire una parola:");
	scanf("%s",parola);
	cont=0;
	while(parola[cont]!=0){
		cont++;
	}
	i=0;
	palindromo=1;
	medio=cont/2;
	while(i<medio && palindromo==1){
		if(parola[cont-1]==parola[i]){
			palindromo=0;
		}
		cont--;
		i++;
	}
	if(palindromo==0){
		printf("\nPalindromo.");
	}else{
		printf("\nNon palindromo.");
	}
	system("PAUSE");
}
