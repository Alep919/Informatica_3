#include <stdio.h>
int main(){
	char nome[100];
	int scelta;
	int c;
	int i;
	int k;
	int x;
	do{
	printf("\t \t \t CALCOLO OCCORRENZE \n");
	printf("Parti del programma da svolgere.\n");
	printf("1-Inserisci il tuo nome \n");
	printf("2-Calcola lunghezza del nome\n");
	printf("3-Calcolo occorrenze\n");
	printf("0-EXIT \n");
		printf("Scegli la parte di programma da eseguire\t");
		scanf("%d",&scelta);
		switch(scelta){
			case 1:
				printf("\nInserisci il tuo nome (Massimo 100 caratteri): ");
				scanf("%s",nome);
				printf("\n Nome Inserito: %s \n",nome);
				break;
			case 2:
				c=0;
				while(nome[c]!='\0'){
					c++;
				}
				printf("Il tuo nome e' lungo %d caratteri \n",c);
				break;
			case 3:
				c=0;
				while(nome[c]!='\0'){
					c++;
				}
				for(i=0;i<c;i++){
					k=1;
					if(nome[i]!=0){
						for(x=i+1;x<c;x++){
							if(nome[i]==nome[x]){
								k++;
								nome[x]=0;
							}							
						}
					}
					if(nome[i]!=0){
						printf("Il carattere %c viene ripetuto %d volte\n",nome[i],k);
					}
				}
				break;
		}
	}while(scelta !=0);
	getchar();
	getchar();
}
