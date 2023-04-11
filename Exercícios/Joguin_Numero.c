#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int verificar(int a){
	
	int b,vitoria;
	
	do{
		printf("Insira um n�mero : ");
		scanf("%d",&b);
		
		if(a<b){
			printf("O n�mero � menor!\n\n");
			vitoria=0;
		}
		else if(a>b){
			printf("O numero � maior!\n\n");
			vitoria=0;
		}
		else if (a==b){
			printf("Parab�ns voc� acertou\n\n");
			vitoria=1;
		}
	}while(vitoria==0);
	
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num,vitoria,chute,continuar;
	char escolha[10];
	
	do{
		
	srand(time(NULL));
	
	printf("Advinhe o n�mero\n");
	printf("Dificuldade\n");
	printf("F�cil - 0 a 10\n");
	printf("Normal - 0 a 100\n");
	printf("Dif�cil - 0 a 1000\n\n");
	printf("Escolha : ");
	gets(escolha);
	fflush(stdin);
	system("cls");
	
	
		if(strcmp(escolha,"facil")==0){
			num = rand () %10;
			verificar(num);
		}
		
		else if(strcmp(escolha,"normal")==0){
			num = rand () %100;
			verificar(num);
		}
		
		else if(strcmp(escolha,"dificil")==0){
			num = rand () %1000;
			verificar(num);
		}
		else{
			printf("Escolha n�o dispon�vel\n");
			vitoria=1;
		}
		
	printf("Deseja continuar?\n01 - Sim\n02 - N�o\n");
	scanf("%d",&continuar);
	fflush(stdin);
	system("cls");
	}while(continuar==1);
}
