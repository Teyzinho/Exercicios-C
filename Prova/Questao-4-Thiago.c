#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void soma(){
	int num1,num2;
	printf("***Soma***\n");
	printf("Digite o primeiro numero:");
	scanf("%d",&num1);
	printf("Digite o segundo numero:");
	scanf("%d",&num2);
	printf("\nA Soma = %d",num1+num2);
	
}

void subtracao(){
	int num1,num2;
	printf("***Subtra��o***\n");
	printf("Digite o primeiro numero:");
	scanf("%d",&num1);
	printf("Digite o segundo numero:");
	scanf("%d",&num2);
	printf("\nASubtra��o = %d",num1-num2);
}

void divisao(){
	int num1,num2;
	printf("***Divis�o***\n");
	printf("Digite o primeiro numero:");
	scanf("%d",&num1);
	printf("Digite o segundo numero:");
	scanf("%d",&num2);
	printf("\nA Divis�o = %d",num1/num2);
}

void multiplicacao(){
	int num1,num2;
	printf("***Multiplicacao***\n");
	printf("Digite o primeiro numero:");
	scanf("%d",&num1);
	printf("Digite o segundo numero:");
	scanf("%d",&num2);
	printf("\nA Multiplica��o = %d",num1*num2);
}

void calculadora(){
	
	int escolha;
	
	printf("******Calculadora******\n");
	printf("01 - Soma\n");
	printf("02 - Subtra��o\n");
	printf("03 - Divis�o\n");
	printf("04 - Multiplica��o\n");
	printf("\nInsira um c�digo : ");
	scanf("%d",&escolha);
	
	system("cls");
	
	switch(escolha){
		case 01:
			soma();
			break;
		case 02:
			subtracao();
			break;
		case 03:
			divisao();
			break;
		case 04:
			multiplicacao();
			break;
		default:
			printf("Escolha inv�lida.");
			break;
	}
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int loop;
	
	do{
		
		calculadora();
		
		printf("\n\nDeseja continuar? 01-Sim Outro-N�o");
		scanf("%d",&loop);
		system("cls");
		
	}while(loop==1);
	
}
