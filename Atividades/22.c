#include <stdio.h>
int main(){
	
	//variaveis
	char operacao;
	float num1,num2;
	
	printf("Digite o primeiro numero da operacao : ");
	scanf("%f",&num1);
	fflush(stdin);
	printf("Digite o segundo numero da operacao : ");
	scanf("%f",&num2);
	fflush(stdin);
	printf("Qual a operacao voce quer fazer? +, -, * ou / : ");
	scanf("%c",&operacao);
	
	switch(operacao){
		case '*':
			printf("\nO resultado da operacao e : %.2f",num1*num2);
			break;
		case '/':
			printf("\nO resultado da operacao e : %.2f",num1/num2);
			break;
		case '+':
			printf("\nO resultado da operacao e : %.2f",num1+num2);
			break;
		case '-':
			printf("\nO resultado da operacao e : %.2f",num1-num2);
			break;
		default:
			printf("Operacao invalida");
			break;
	}
	
	
}
