//ES 17 -Inserimento in un array ordinato con shift
#include<stdio.h>
int main(){
	int n;
	int max=10;
	int trovato;
	int num[10];
	int x;
	int i;
	for(i=0;i<10;i++){
		printf("\nInserire numero nell'array:");
		scanf("%d",&num[i]);
	}
	printf("\nInserire il numero:");
	scanf("%d",&n);
	trovato=0;
	i=0;
	while(i<10 && trovato==0){
		if(n<=num[i]){
			trovato=1;
		}else{
			i++;
		}
	}
	x=9;
	while(x>=i){
		num[x]=num[x-1];
		x--;
	}
	num[i]=n;
	printf("\n");
	for(i=0;i<10;i++){
		printf("%d-",num[i]);
	}
	getchar();
	getchar();
}
