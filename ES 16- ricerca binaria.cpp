//ES 16- Ricerca binaria in un array
#include<stdio.h>
int main(){
	int n,min,max,trovato,i,centro;
	int num[]={1,12,15,23,30,31,37,41,50};
	printf("\nInserire il numero da cercare nell'array:");
	scanf("%d",&n);
	min=0;
	i=0;
	max=9;
	trovato=0;
	while((trovato==0)&&(min<=max)){
		centro=(min+max/2);
		if(n==num[centro]){
			trovato=1;
		}else{
			if(n>num[centro]){
				min=centro+1;
			}else{
				max=centro-1;
			}
		}
		i++;
	}
	if(trovato==1){
		printf("\nIl numero e' stato trovato");
	}else{
		printf("\nIl numero non e' stato trovato");
	}
	getchar();
	getchar();
}
