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
	printf("***Subtração***\n");
	printf("Digite o primeiro numero:");
	scanf("%d",&num1);
	printf("Digite o segundo numero:");
	scanf("%d",&num2);
	printf("\nASubtração = %d",num1-num2);
}

void divisao(){
	int num1,num2;
	printf("***Divisão***\n");
	printf("Digite o primeiro numero:");
	scanf("%d",&num1);
	printf("Digite o segundo numero:");
	scanf("%d",&num2);
	printf("\nA Divisão = %d",num1/num2);
}

void multiplicacao(){
	int num1,num2;
	printf("***Multiplicacao***\n");
	printf("Digite o primeiro numero:");
	scanf("%d",&num1);
	printf("Digite o segundo numero:");
	scanf("%d",&num2);
	printf("\nA Multiplicação = %d",num1*num2);
}

void calculadora(){
	
	int escolha;
	
	printf("******Calculadora******\n");
	printf("01 - Soma\n");
	printf("02 - Subtração\n");
	printf("03 - Divisão\n");
	printf("04 - Multiplicação\n");
	printf("\nInsira um código : ");
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
			printf("Escolha inválida.");
			break;
	}
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int loop;
	
	do{
		
		calculadora();
		
		printf("\n\nDeseja continuar? 01-Sim Outro-Não");
		scanf("%d",&loop);
		system("cls");
		
	}while(loop==1);
	
}
