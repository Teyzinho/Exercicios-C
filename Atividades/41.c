#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,j,aposta[6],sorteio[6],acertos,loop;
	
	do{
	
	acertos=0;
	
	printf("Insira 6 numeros para aposta\n");
	
	for(i=0;i<6;i++){
	
		scanf("%d",&aposta[i]);
	}
	
	printf("Insira os numeros sorteados\n");
	
	for(i=0;i<6;i++){
		
		scanf("%d",&sorteio[i]);
	}
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(aposta[i]==sorteio[j]){
				acertos++;
			}
		}
	}
	
	printf("A quantidade de acertos foi : %d \n\n",acertos);
	printf("Deseja continuar?\n");
	printf("1 - Sim\n");
	printf("Outro - Não\n");
	scanf("%d",&loop);
	system("cls");
}while(loop==1);
}
