//ES 7- Dati n numeri interi trovare il numero minimo
#include<stdio.h>
int main(){
	int n_num;
	int i=0;
	int min;
	int n;
	int primonumero=0;
	printf("numeri da inserire:");
	scanf("%d",&n_num);
	while(i<n_num){
		printf("\nInserire numero:");
		scanf("%d",&n);
		i++;
		if(primonumero==0){
			min=n;
			primonumero++;
		}else{
			if(n<min){
				min=n;
			}
		}
	}
	printf("\nIl numero minore e':%d",min);
	getchar();
	getchar();	
}
