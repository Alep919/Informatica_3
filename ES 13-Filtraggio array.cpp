//ES 13- dato un array di 10 elementi contenente numeri interi chiesti in input copiare i numeri pari in un secondo array

#include<stdio.h>
int main(){
	int num[10];
	int pari[10];
	int i,c;
	for(i=0;i<10;i++){
		printf("Inserire un numero:");
		scanf("%d",&num[i]);
	}
	c=0;
	for(i=0;i<10;i++){
		if((num[i]%2)==0){
			pari[c++]=num[i];
		}
	}
	for(i=0;i<c;i++){
		printf("%d-",pari[i]);
	}
	getchar();
	getchar();
}
