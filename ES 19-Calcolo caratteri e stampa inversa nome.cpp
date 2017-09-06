//ES 19
#include<stdio.h>
int main(){
	int c,i;
	char nome[50];
	printf("Come ti chiami?");
	scanf("%s",nome);
	c=0;
	while(nome[c]!='\0'){
		c++;
	}
	printf("Il tuo nome ha %d caratteri\n",c);
	for(i=c-1;i>=0;i--){
		printf("%c",nome[i]);
	}
	getchar();
	getchar();
}
