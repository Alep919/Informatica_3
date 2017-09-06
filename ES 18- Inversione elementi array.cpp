//ES 18- Inversione elementi di un array
#include<stdio.h>
int main(){
	int n[10];
	int a,i;
	int x=0;
	for(i=0;i<10;i++){
		printf("\nInserire numeri nell'array:");
		scanf("%d",&n[i]);
	}
	for(i=9;i>x;i--){
		a=n[i];
		n[i]=n[x];
		n[x]=a;
		x++;
	}
	for(i=0;i<10;i++){
		printf("%d-",n[i]);
	}
	getchar();
	getchar();
}
