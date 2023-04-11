#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

void soma(int a, int b){
	int soma;
	soma = a+b;
	printf("Soma %d\n",soma);
}
int sub(int a, int b){
	int sub;
	sub = a-b;
	return sub;
}

int main(){
	
	int a,b,subtra;
	scanf("%d \n%d",&a,&b);
	soma(a,b);
	subtra=sub(a,b);
	printf("%d\n",subtra);
}
