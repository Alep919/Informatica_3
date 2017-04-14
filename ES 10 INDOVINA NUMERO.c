#include<stdio.h>
int main(){
	int n;
	int indovinato;
	int try;
	int num;
	int diff;
	printf("Inserire la difficolta' (1 difficile,0 semplice):");
	scanf("%d",&diff);
	indovinato=0;
	if(diff==1){
		try=5;
	}else{
		try=15;
	}
	num=srand()%30;
	while(try!=0 && indovinato!=1){
		printf("\nInserisci il numero:");
		scanf("%d",&n);
		printf("%d",num);
		if(n==num){
			printf("\nHai vinto con ancora %d tentativi disponibili\n!",try-1);
			indovinato=1;
		}else{
			if(diff!=1){
				if(n>num){
					printf("\nIl numero che hai inserito è maggiore del numero casuale.");
				}else{
					printf("\nIl numero che hai inserito è minore del numero casuale.");
				}
			}
			try--;
		}
	}
	if(indovinato==0){
		printf("\nHai perso! Il numero era %d\n",num);
	}
	system("PAUSE");
}
	
