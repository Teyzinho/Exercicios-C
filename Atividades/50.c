#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct cliente{
	char nome[50];
	char endereco[50];
	float renda;
	int telefone;
	char email[50];
	char cpf[50];
}Cliente;

void cadastro(){
	int i;
	Cliente consumidor[20];
	
	for(i=0;i<20;i++){
		printf("Cliente N° %d\n",i+1);
		printf("Insira o nome do cliente : ");
		gets(consumidor[i].nome);
		fflush(stdin);
		
		printf("Insira o endereço do cliente : ");
		gets(consumidor[i].endereco);
		fflush(stdin);
		
		printf("Insira a renda do cliente : ");
		scanf("%f",&consumidor[i].renda);
		fflush(stdin);
		
		printf("Insira o Telefone do cliente : ");
		scanf("%d",&consumidor[i].telefone);
		fflush(stdin);
		
		printf("Insira o e-mail do cliente : ");
		gets(consumidor[i].email);
		fflush(stdin);
		
		printf("Insira o CPF do cliente : ");
		gets(consumidor[i].cpf);
		fflush(stdin);
		system("cls");
	}
	
}

void exibicao(){
	int i;
	Cliente consumidor[5];
	
	for(i=0;i<5;i++){
		printf("Cliente N° %d\n",i+1);
		printf("Nome : %s\n",consumidor[i].nome);
		printf("Endereço : %s\n",consumidor[i].endereco);
		printf("Renda : R$%.2f\n",consumidor[i].renda);
		printf("Telefone : %d\n",consumidor[i].telefone);
		printf("E-maiol : %s\n",consumidor[i].email);
		printf("CPF : %s\n\n",consumidor[i].cpf);
	}
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	cadastro();
	exibicao();
	
}
