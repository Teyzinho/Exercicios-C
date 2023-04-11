#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>




int main(){
	srand(time(NULL));
	setlocale(LC_ALL,"Portuguese");
	
	int i,j,aposta[6],sorteio[6],acertos,loop,sort;
	
	do{
	
	acertos=0;
	
	printf("Insira 6 numeros para aposta\n");
	
	for(i=0;i<6;i++){
	
		scanf("%d",&aposta[i]);
	}
	
	printf("------Numeros Da Sorte------\n");

		for(i=0;i<6;i++){
			sorteio[i] = rand () %60;
			
			for(j=0;j<6;j++){
				
				if(sorteio[i]==sorteio[j]){
					
					sorteio[i] = rand () %60;
					
				}
				
			}
			printf("  %d",sorteio[i]);
		}
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(aposta[i]==sorteio[j]){
				acertos++;
			}
		}
	}
	printf("\n----------------------------\n");
	
	printf("\nA quantidade de acertos foi : %d \n\n",acertos);
	printf("Deseja continuar?\n");
	printf("1 - Sim\n");
	printf("Outro - Não\n");
	scanf("%d",&loop);
	system("cls");
}while(loop==1);
}
