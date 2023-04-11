#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>



void triangulo(int a, int b){
	int area;
	area = (a * b)/2;
	printf("\nA area do triângulo é %d\n",area);
}

void retangulo(int a, int b){
	int area;
	area = a*b;
	printf("\nA área do retângulo é %d\n",area);
}

void trapezio(int a, int b, int c){
	int area;
	area = ((a+c)*b)/2;
	printf("\nA área do trapézio é %d\n",area);
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int escolha,a,b,c,loop;
	
	do{
	
	printf("***Cálculo de áreas***\n");
	printf("01 - Área triângulo\n");
	printf("02 - Área do retângulo\n");
	printf("03 - Área do trapézio\n");
	printf("Escolha : ");
	scanf("%d",&escolha);
	fflush(stdin);
	
	printf("Insira a base : ");
	scanf("%d",&a);
	printf("Insira a altura : ");
	scanf("%d",&b);
	
	
	switch(escolha){
		case 01:
			triangulo(a,b);
			break;
		case 02:
			retangulo(a,b);
			break;
		case 03:
			printf("Insira a segunda base : ");
			scanf("%d",&c);
			trapezio(a,b,c);
			break;
		default:
			printf("Opção inválida");
			break;
	}
	
	printf("Deseja Continuar?\n01 - Sim\nOutro - Não\n");
	scanf("%d",&loop);
	system("cls");
	}while(loop==1);
}
