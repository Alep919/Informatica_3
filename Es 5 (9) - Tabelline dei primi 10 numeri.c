#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int n;
	int i;
	int tab;
	n=2;
	i=0;
	do{
		while(i<=10){
			tab=n*i;
			printf("Tabellina: %d ",tab);
			i++;
		}
		i=0;
	printf("\n");
	n++;	
	}while(n<=10);
	system("PAUSE");
}
