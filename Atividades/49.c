#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct aluno{
	
	char nome[100];
	char endereco[100];
	char nomeMae[100];
	char nomePai[100];
	char data_de_nascimento[100];
	
}Aluno;

void cadastro(){
	
	Aluno turma1;
	printf("Insira o nome do aluno : ");
	gets(turma1.nome);
	fflush(stdin);
	
	printf("Insira o endere�o : ");
	gets(turma1.endereco);
	fflush(stdin);
	
	printf("Nome do pai : ");
	gets(turma1.nomePai);
	fflush(stdin);
	
	printf("Nome da m�e : ");
	gets(turma1.nomeMae);
	fflush(stdin);
	
	printf("Data de nascimento : ");
	gets(turma1.data_de_nascimento);
	fflush(stdin);
	
	system("cls");
	
}

void exibircadastro(){
	Aluno turma1;
	printf("Nome do aluno : %s\t Endere�o : %s\n",turma1.nome,turma1.endereco);
	printf("Nome do pai : %s\t Nome da m�e : %s\n",turma1.nomePai,turma1.nomeMae);
	printf("Data de nascimento \t: %s",turma1.data_de_nascimento);
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	cadastro();
	exibircadastro();
}
