#include <stdio.h>
int main(){
	char parola1[100];
	char parola2[100];
	int i;
	int uguali;
	printf("Inserisci la prima parola: ");
	scanf("%s",parola1);
	printf("\nInserisci la seconda parola: ");
	scanf("%s",parola2);
	i=0;
	uguali=1;
	while(uguali==1 && (parola1[i]!=0 || parola2[i]!=0)){
		if(parola1[i]!=parola2[i]){
			uguali=0;
		}
		i++;
	}
	if(uguali==1){
		printf("\nLe due stringhe sono uguali.");
	}else{
		printf("\nLe due stringhe sono diverse.");
	}
	system("PAUSE");
}
