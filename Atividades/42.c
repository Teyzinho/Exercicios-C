#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,j;
	float valor[5][3],media1,media[5];
	char produto[5][10]={"arroz","sansung","bola","quatro","cinc"};
	
	for(i=0;i<5;i++){
		printf("Produto : %s\n",produto[i]);
		media1=0;
		for(j=0;j<3;j++){
			printf("%d° Valor :",j+1);
			scanf("%f",&valor[i][j]);
			media1 += valor[i][j];
		}
		media1 /=3;
		media[i] = media1;
		system("cls");
	}
	for(i=0;i<5;i++){
		printf("Média do produto %s - R$%.2f \n",produto[i],media[i]);
	}
	
}
