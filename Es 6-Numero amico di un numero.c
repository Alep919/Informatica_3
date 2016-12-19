#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){
	int m; 		//somma divisori di n
	int n; 		//numero di cui si vuole conoscere il numero amico
	int i;		//divisori
	int x;		//somma divisori m
	printf("Inserire il numero di cui si vuole conoscere un eventuale numero amico     ");
	scanf("%d",&n);
	i=1;
	while(i<=n/2){
		if(n%i==0){
			m=m+i;
		}
		i++;
	}
	x=0;
	i=1;
	while(i<=m/2){
		if(m%i==0){
			x=x+i;
		}
		i++;
	}
	if(x==n){
		printf("\n Il numero amico del numero n inserito e': %d",m);
	}else{
		printf("\n Il numero inserito non ha un numero amico \n ");
	}
	system("PAUSE");
}
