#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"Portuguese" );	
	int ano,i,loop;
	do{
		loop=1;
		printf("Digite um ano para saber se � bissexto ou n�o : ");
		scanf("%d",&ano);
		fflush(stdin);
		
		if(ano%400==0 || (ano%100!=0 && ano%4==0)){
			printf("� ano bissexto\n\n");
			
		}
		else{
			printf("O ano n�o � bissexto\n\n");
		}
		printf("Deseja Continuar o programa?\n");
		printf("01 - \tSim\n");
		printf("Outro - N�o\n");
		scanf("%d",&loop);
		system("cls");
		
	}while(loop==1);
}
