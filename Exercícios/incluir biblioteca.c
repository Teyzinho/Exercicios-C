#include <stdio.h>
int main(){
	
	//include <stdio.h> incluir biblioteca
	//fflush(stdin) - Limpar o codigo
	
	//variaveis
	char nome[20],endereco[20];
	int valor;
	printf("Digite seu nome completo: ");
	gets(nome);
	fflush(stdin);
	printf("digite sua idade: ");
	scanf("%d",&valor);
	fflush(stdin);
	printf("digite seu endereco: ");
	gets(endereco);
}
