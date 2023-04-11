#include<stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i=1,num1,num2,num3,soma;
	
	printf("Insira dois numeros para multiplicação : ");
	scanf("%d %d",&num1,&num2);
	
	num3 = num1;
	
	for(i;i<num2;i++){
		
		soma = num1 + num3;
		num3 = soma;
		
		
	}
	printf("%d",soma);
}
