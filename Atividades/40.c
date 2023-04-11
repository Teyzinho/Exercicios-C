#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,loop;
	float media,nota[20];
	
	do{
		media=0;
		for(i=0;i<20;i++){
			printf("%d° Aluno \n",i+1);
			printf("Insira a Nota do Aluno : ");
			scanf("%f",&nota[i]);
			printf("**********\n\n");
			media += nota[i];
		}
		printf("A média das notas dos alunos é %.2f\n\n",media/20);
		printf("Deseja encerrar o programa? \n");
		printf("1 - Não\n");
		printf("Outro - Sim\n");
		scanf("%d",&loop);
		system("cls");
		
	}while(loop==1);
}
