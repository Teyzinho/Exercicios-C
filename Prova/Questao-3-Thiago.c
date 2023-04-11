#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void par(num){
	if(num%2==0){
		printf("%d é par\n",num);
	}
	else{
		printf("%d é impar\n",num);
	}
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1,num2;
	
	printf("Digite 2 números: ");
	scanf("%d %d",&num1,&num2);
	
	par(num1);
	par(num2);
	
}
