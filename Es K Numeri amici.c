#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int k;		//numero di coppie numeri amici
	int i;		//divisori
	int m;		//somma divisori di n
	int n;		//numero di cui vedo il numero amico
	int x;		//somma divisori di m
	int y;		//contatore del numero dei cicli in base a k
	printf("\n Inserire il numero delle coppie di numeri amicali che si vogliono conoscere");
	scanf("%d",&k);
	y=0;
	n=10;
	while(y<k){
		m=0;
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
			printf("\n Una coppia di numeri amici è %d e %d ",n ,m);
			y++;
		}
		n++;	
	}
}
