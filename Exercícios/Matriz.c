#include <locale.h>
#include <stdio.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char produto[5][10]={"feijao","batata","pimentao","sacola","iphone"};
	char nome[10][10]={"pedro","jose","ele","gabriel","bernardo","josias","judeus","oito","nove","dez"};
	float valor[5][3];
	int i,j;
	
	for(i=0;i<5;i++){
		printf("%s \n",produto[i]);
	}
	
	printf("\n");
	
	
	for(i=0;i<5;i++){
		printf("%s \n",nome[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("\nInforme o preço %d do %s:",j+1,produto[i]);
			scanf("%f",&valor[i][j]);
		}
	}
}
