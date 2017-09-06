//ES 15- Eliminazione di un elemento di un array con shift
#include<stdio.h>
int main(){
	int v[10];
	int pos,tot;
	int i;
	tot=10;
	for(i=0;i<10;i++){
		printf("\nInserire 10 numeri nell'array:");
		scanf("%d",&v[i]);
	}
	printf("\nInserire la posizione dell'array da shiftare:");
	scanf("%d",&pos);
	while(pos<tot){
		v[pos]=v[pos+1];
		pos++;
	}
	tot--;
	for(i=0;i<tot;i++){
		printf("%d-",v[i]);
	}
	getchar();
	getchar();
}
