#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int velha[3][3],continuar;
	int i,coluna,linha,jogador=1,j,a=1;
	
	char espaco[3][3][3],enter;
	
	do{
	
	int preenchido[3][3]={0},prenchido,vitoria,jogada=1;
	
	a=1;
	
	for(i=0;i<9;i++){
		for(j=0;j<3;j++){
		strcpy(espaco[i][j], " ");
		}	
	}
	
	do{
	do{ 
	
	for(i=0;i<3;i++){
		for(j=0;j<1;j++){
			printf("\t  %s|%s|%s\n",espaco[i][j],espaco[i][j+1],espaco[i][j+2]);
		}
		printf("\t---------\n");
	}
	printf("jogaor %d jogada %d\n",jogador,jogada);
	printf("Escolha a coluna : ");
	scanf("%d",&coluna);
	printf("Escolha a linha : ");
	scanf("%d",&linha);
	
	prenchido =1;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if((coluna-1)==i&&(linha-1)==j){
				if(preenchido[i][j]==0){
					if(jogador==1){
						strcpy(espaco[i][j], "X");
						jogador=2;
						preenchido[i][j]=1;
						jogada++;
					}
					else if(jogador==2){
						strcpy(espaco[i][j], "O");
						jogador=1;
						preenchido[i][j]=1;
						jogada++;
						}
					}
				else{
				printf("Local já preenchido\n");
				printf("enter");
				getch(enter);
				fflush(stdin);
				prenchido = 2;
				}
		}
	}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<1;j++){
			if(strcmp(espaco[i][j], "X")==0&&strcmp(espaco[i][j+1], "X")==0&&strcmp(espaco[i][j+2], "X")==0){
				a=2;
				jogada=1;
			}
			else if(strcmp(espaco[i][j], "O")==0&&strcmp(espaco[i][j+1], "O")==0&&strcmp(espaco[i][j+2], "O")==0){
				a=2;
				jogada=1;
			}
		}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(strcmp(espaco[i][j], "X")==0&&strcmp(espaco[i+1][j], "X")==0&&strcmp(espaco[i+2][j], "X")==0){
				a=2;
				jogada=1;
			}
			else if(strcmp(espaco[i][j], "O")==0&&strcmp(espaco[i+1][j], "O")==0&&strcmp(espaco[i+2][j], "O")==0){
				a=2;
				jogada=1;
			}
		}
	}
		
	}
	
	if(strcmp(espaco[0][0], "X")==0&&strcmp(espaco[1][1], "X")==0&&strcmp(espaco[2][2], "X")==0){
		a=2;
		jogada=1;
	}
	else if(strcmp(espaco[0][0], "O")==0&&strcmp(espaco[1][1], "O")==0&&strcmp(espaco[2][2], "O")==0){
		a=2;
		jogada=1;
	}
	else if(strcmp(espaco[0][2], "X")==0&&strcmp(espaco[1][1], "X")==0&&strcmp(espaco[2][0], "X")==0){
		a=2;
		jogada=1;
	}
	else if(strcmp(espaco[0][2], "O")==0&&strcmp(espaco[1][1], "O")==0&&strcmp(espaco[2][0], "O")==0){
		a=2;
		jogada=1;
	}
	else if(jogada==10){
		a=2;
	}				
	system("cls");	
			
	}while(prenchido==2);
	}while(a==1);
	
	if(jogador==1)
		vitoria = 2;
	else
		vitoria=1;
		
	for(i=0;i<3;i++){
		for(j=0;j<1;j++){
			printf("\t  %s|%s|%s\n",espaco[i][j],espaco[i][j+1],espaco[i][j+2]);
		}
		printf("\t---------\n");
	}
	
	if(jogada<10)
		printf("\nVitoriaaaa  Do Jogador %d",vitoria);
	else
		printf("\nvelha");
	printf("\n\nDeseja continuar jogando? \n1-Sim\nOutro-Não\n");
	scanf("%d",&continuar);
	system("cls");

}while(continuar==1);
}
