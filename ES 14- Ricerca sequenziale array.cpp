//ES 14- RICERCA SEQUENZIALE IN UN ARRAY	
#include<stdio.h>
int main(){
	int i,n,trovato,pos;
	int v[10];
	for(i=0;i<10;i++){
		printf("\nInserire 10 numeri all'interno dell'array:");
		scanf("%d",&v[i]);
	}
	printf("\nInserire il numero che si vuole cercare:");
	scanf("%d",&n);
	trovato=0;
	i=0;
	while(i<10 && !trovato){
		if(n==v[i]){
			pos=i;
			trovato=1;
		}
		i++;
	}
	if(trovato==1){
		printf("\nIl numero si trova in posizione %d",pos);
	}else{
		printf("\nIl numero non e' presente all'interno dell'array");
	}
	getchar();
	getchar();
}
