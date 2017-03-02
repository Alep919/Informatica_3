#include <stdio.h>
int main(){
	int numeri[]={4,5,13,22,27,34,35,37,40,48,51,55,70,77,80,81,84,89,95,99};		//Numeri ordinati da controllare
	int min;
	int max;
	int medio;
	int numero;
	int trovato;
	int i;
	printf("Inserire il numero che si vuole trovare all'interno dell'Array. \n");
	scanf("%d",&numero);
	max=19;
	min=0;
	i=0;
	trovato=0;
	while((trovato==0)&&(i==0)){
		medio=(max+min)/2;
		if(numero==numeri[medio]){
			trovato=1;
		}else{
			if(numero>numeri[medio]){
				min=medio;
			}else{
				max=medio;
			}
		}
		if(max==min){
			i=1;
		}
	}
	if(trovato==1){
		printf("Il numero %d e' stato trovato all'interno dell'Array \n",numero);
	}else{
		printf("Il numero %d non e' stato trovato all'interno dell'Array \n",numero);
	}
	system("PAUSE");
}
