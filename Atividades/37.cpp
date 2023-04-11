#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float salario[10],soma=0;
	
	for(i=0;i<10;i++){
		printf("Insira o %d° Salário : ",i+1);
		scanf("%f",&salario[i]);
		soma+=salario[i];
	}
	printf("\nO salário total a ser pago é de : R$%.2f\n",soma);
	printf("O ticket a ser pago é de : R$%.2f",soma*0.05);
	
}
