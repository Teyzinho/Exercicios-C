#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float valor[10],novovalor,reajuste,acrescimo;
	
	printf("Registro de produtos\n");
	
	for(i=0;i<10;i++){
		printf("\nValor %d° Produto : R$",i+1);
		scanf("%f",&valor[i]);
		
	}
	
	printf("\n\nQual o percentual de reajuste? : ");
	scanf("%f",&reajuste);
	
	reajuste = reajuste/100;
	
	
	
	for(i=0;i<10;i++){
		printf("\n");
		printf("*****%d°Produto*****\n",i+1);
		printf("Valor anterior R$%.2f\n",valor[i]);
		novovalor = valor[i]*(reajuste+1);
		printf("Novo valor R$%.2f\n",novovalor);
		acrescimo = valor[i]*reajuste;
		printf("Acréscimo de R$%.2f\n",acrescimo);
		
	}
	
	
}

