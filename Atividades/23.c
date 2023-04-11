#include <stdio.h>
int main(){
	
	//variaveis
	int salgado,bebida;
	float desconto, valors,valorb,valortotal;
	
	printf("                  CARDAPIO");
	printf("\n---------------------------------------------");
	printf("\n              SALGADOS ASSADOS");
	printf("\n---------------------------------------------");
	printf("\n555|Pastel|R$ 5.00");
	printf("\n556|Rocambole|R$ 6.00");
	printf("\n557|Mini-Pizza|R$ 8.00");
	printf("\n558|Empanada Pequena|R$ 2.00");
	printf("\n559|Empanada Media|R$ 4.00");
	printf("\n560|Empanada Grande|R$ 5.50");
	printf("\n---------------------------------------------");
	printf("\n                 BEBIDAS");
	printf("\n---------------------------------------------");
	printf("\n100|Suco Natural 200ml|R$ 3.00");
	printf("\n101|Suco Natural 500ml|R$ 5.00");
	printf("\n102|Refrigerante 600ml|R$ 4.00");
	printf("\n103|Refrigerante 2l| R$ 10.00");
	
	//escolhas
	printf("\n---------------------------------------------");
	printf("\nESCOLHA SEU SALGADO : ");
	scanf("%d",&salgado);
	printf("---------------------------------------------");
	printf("\nESCOLHA SUA BEBIDA : ");
	scanf("%d",&bebida);
	printf("---------------------------------------------");
	printf("\nCUPOM DE DESCONTO : ");
	scanf("%f",&desconto);
	
	switch(salgado){
		case 555:
			valors = 5;
			break;
		case 556:
			valors = 6;
			break;
		case 557:
			valors = 8;
			break;
		case 558:
			valors = 2;
			break;
		case 559:
			valors = 4;
			break;
		case 560:
			valors = 5.50;
			break;
		default:
			printf("\n**Salgado nao selecionado ou codigo invalido**");
			valors = 0;
			break;
			
	}
	switch(bebida){
		case 100:
			valorb = 3;
			break;
		case 101:
			valorb = 5;
			break;
		case 102:
			valorb = 4;
			break;
		case 103:
			valorb =10;
			break;
		default:
			printf("\n\n**Bebida nao secelionada ou codigo invalido**\n");
			valorb = 0;
			break;
	}
	
	valortotal = valors+valorb-desconto;
	
	printf("\n---------------------------------------------");
	printf("\nVALOR A PAGAR: R$ %.2f",valortotal);
	printf("\n---------------------------------------------");
	
	
	
	
	
	
	
}
