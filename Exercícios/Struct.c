#include <stdio.h>
#include <locale.h>


typedef struct ficha{
	char nome[100];
	char endereco[100];
	float renda;
}Ficha;

void cadastro(){
	Ficha a;
	printf("Insira nome ");
	gets(a.nome);
	fflush(stdin);
	printf("Insira Endereço ");
	gets(a.endereco);
	fflush(stdin);
	printf("Insira a renda ");
	scanf("%f",&a.renda);
	printf("%s       %s       %.2f",a.nome,a.endereco,a.renda);	
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cadastro();
}
