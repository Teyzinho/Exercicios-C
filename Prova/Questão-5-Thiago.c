#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

typedef struct cadastro{
	char nome[50];
	char endereco[50];
	int telefone;
}Cadastro;

void cadastrof(){
	
	Cadastro funcionario;
	
	printf("Digite o nome do Funcion�rio : ");
	gets(funcionario.nome);
	fflush(stdin);
	printf("Insira o endere�o do funcion�rio : ");
	gets(funcionario.endereco);
	fflush(stdin);
	printf("Insira o telefone : ");
	scanf("%d",&funcionario.telefone);
	fflush(stdin);
	system("cls");
	
}

void ExibicaoCadastro(){
	
	Cadastro funcionario;
	
	printf("Nome : %s\n",funcionario.nome);
	printf("Endere�o : %s\n",funcionario.endereco);
	printf("Telefone : %d",funcionario.telefone);
	
}



int main(){
	
	
	setlocale(LC_ALL,"Portuguese");
	
	cadastrof();
	
	ExibicaoCadastro();
	
}
