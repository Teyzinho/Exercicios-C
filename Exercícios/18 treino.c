#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//variaveis
	int i,quantidade,idade,contf=0,maioridade=0,menoridade=999;
	float salario[100],media,soma;
	char sexo;
	
	//Quantidade
	printf("Quantos sal�rios voc� ir� registrar? : ");
	scanf("%d",&quantidade);
	
	//Registro
	printf("******Registro******\n");
	for(i=0;i<quantidade;i++){
		printf("%d� Funcion�rio\n",i+1);
		
		//salario
		printf("Insira o Sal�rio : R$");
		scanf("%f",&salario[i]);
		
		//idade
		printf("Insira a idade : ");
		scanf("%d",&idade);
		if(maioridade<=idade){
			maioridade=idade;
		}
		if(menoridade>=idade){
			menoridade=idade;
		}
		
		//sexo
		fflush(stdin);
		printf("Insira o Sexo : ");
		scanf("%ch",&sexo);
		fflush(stdin);
		
		if(salario[i]<=2000&&(sexo == 'F'||sexo == 'f')){
			contf++;
		}
		
		//somas
		soma+=salario[i];
		
		printf("**************\n");
		
		
	}
	
	media = soma/i;
	
	printf("A M�dia de salarios � de : R$%.2f\n",media);
	printf("A maior idade � : %d\n",maioridade);
	printf("A menor idade � : %d\n",menoridade);
	printf("A quantidade de mulheres com renda menor ou igual a 2000 � : %d",contf);
	
}
