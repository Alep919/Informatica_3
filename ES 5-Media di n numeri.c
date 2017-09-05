//es 5 media di n numeri
#include <stdio.h>
int main(){
	int k;
	int i=0;
	int somma=0;
	int n;
	int media;
	printf("\nQuanti numeri si vogliono inserire:");
	scanf("%d",&k);
	while(i<k){
		printf("\nInserire un numero:");
		scanf("%d",&n);
		i++;
		somma=somma+n;
	}
	media=somma/k;
	printf("\nLa media e' %d",media);
	getchar();
	getchar();
}
