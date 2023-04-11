#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,tam;
	char nomes[20][20];
	
	printf("Registro de nomes\n");
	
	for(i=0;i<20;i++){
		printf("%d° Nome :",i+1);
		gets(nomes[i]);
		fflush(stdin);
	}
	
	system("cls");
	
	printf("Nomes com 5 caracteres\n");
	
	for(i=0;i<20;i++){
		tam = strlen(nomes[i]);
		if(tam==5){
			printf("%s\n",nomes[i]);
		}
	}
}

	
