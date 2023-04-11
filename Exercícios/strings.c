#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	/*
	strlen - Mostra quantidade de letras em uma strings
		strlen (nome da variável);
	
	strcmp == 0 - compara se as strings são iguais
		strcmp(variavel,variavel2)==0;	
	
	strcmp < 0 - compara o tamanho das strings
		strcmp(variavel,variavel2)<0;
	*/
	
	setlocale(LC_ALL,"Portuguese");
	
	char pesquisa[10],nomes[10][20]={"pedro","jonatam","gabriel","renato","gabriela","eris","yasmin","andreia","tamara","thais"};
	int i,tam,existe=0;
	
	for(i=0;i<10;i++){
		tam = strlen(nomes[i]);
		printf("%s tem %d letras\n",nomes[i],tam);
	}
	
	printf("\n\nInsira um nome para a pesquisa : ");
	gets(pesquisa);
	fflush(stdin);
	
	for(i=0;i<10;i++){
		if(strcmp(pesquisa,nomes[i])==0){
			printf("Existe");
			existe++;
		}
		else if(i==9&&existe==0)
			printf("Não existe");
	}
}
