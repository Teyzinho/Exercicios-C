#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float salario[10],novosalario,percentual;
	
	
	for(i=0;i<10;i++){
		
		printf("%d� Funcin�rio\n",i+1);
		printf("Insira o sal�rio : ");
		scanf("%f",&salario[i]);
		
	}
	
	printf("\n");
	printf("Insira o porcentual de reajuste ");
	scanf("%f",&percentual);
	printf("\n");
	
	for(i=0;i<10;i++){
		
		novosalario = salario[i]*(percentual/100+1);
		
		printf("Novo salario Do %d� Funcion�rio � de R$%.2f\n",i+1,novosalario);
		
	}
	
	
}
