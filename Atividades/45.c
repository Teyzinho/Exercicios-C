#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,j,existe=0;
	float salario[3];
	char nome[3][20],enter,busca[20];
	
	for(i=0;i<5;i++){
		printf("Informe o nome do %d� Funcion�rio : ",i+1);
		gets(nome[i]);
		fflush(stdin);
		printf("Informe o sal�rio deste funcion�rio : R$");
		scanf("%f",&salario[i]);
		fflush(stdin);
	}
	printf("\n\nCadastro completo!!\n");
	printf("Press 'Enter'");
	getch(enter);
	fflush(stdin);
	system("cls");
	
	printf("Sistema de busca Funcion�rio\n");
	printf("Digite o nome : ");
	gets(busca);
	fflush(stdin);
	
	for(i=0;i<5;i++){
		if(strcmp(busca,nome[i])==0){
			printf("\nNome : %s \nSal�rio : R$%.2f",nome[i],salario[i]);
			existe = 1;
		}
 		else if(i==4&&existe==0)
			printf("Funcion�rio n�o cadastrado");
	}
}
