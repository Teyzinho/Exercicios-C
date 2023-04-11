#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"Portuguese" );	
	int ano,i,loop;
	do{
		loop=1;
		printf("Digite um ano para saber se é bissexto ou não : ");
		scanf("%d",&ano);
		fflush(stdin);
		
		if(ano%400==0 || (ano%100!=0 && ano%4==0)){
			printf("É ano bissexto\n\n");
			
		}
		else{
			printf("O ano não é bissexto\n\n");
		}
		printf("Deseja Continuar o programa?\n");
		printf("01 - \tSim\n");
		printf("Outro - Não\n");
		scanf("%d",&loop);
		system("cls");
		
	}while(loop==1);
}
