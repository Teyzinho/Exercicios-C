#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nume,i,quant=0,loop,ze;
	
	
	do{
	
	quant=0;
	
	printf("Digite um numero para saber se é primo : ");
	scanf("%d", &nume);
	fflush(stdin);
	printf("\n");
	
	for(i=1;i<=nume;i++){
		if(nume%i == 0){
			quant++;
		}
	}
	if(quant==2){
		printf("Numero primo\n");
	}
	else{
		printf("numero não é primo\n");
	}
	
	printf("\nDeseja continuar o programa?\n");
	printf("01 - Sim\n");
	printf("Outro - não\n");
	scanf("%d",&ze);
	switch(ze){
		case 01:
			loop = 1;
			system("cls");
			break;
		default:
			loop = 2;
			break;
	}
	}while(loop == 1);
	
	return 0;
}
