#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

void catalogo(){
	int loop;
	loop=1;
	int selecionado,quantidade;
	float preco,total,desconto,precoNovo;
	
	do{
		printf("ola! BEM VINDO A MASQUEICO COMPANY\n\n");
		
		preco=0;
		
		printf("01 -Cadeira Gamer Mx5 Giratoria Preto/Azul R$703,00 \n");
		printf("02 - HyperX - Cloud Headset R$ 399,99\n");
		printf("03 - Cloud Stinger 2 Core  - Headset R$449,99\n");
		printf("04 - Alloy Origins Mechanical Gaming Keyboard - R$ 419,99\n");
		printf("05 - Pulsefire FPS Pro – RGB Gaming Mouse - R$ 199,99\n");
		printf("06 - QuadCast S – USB Condenser Gaming Microphone - R$1.001,97\n\n");
		printf("Qual produto deseja comprar?\n");
		

		scanf("%d",&selecionado);
		
		switch(selecionado){
			case 01:
				preco = 703;
				break;
			case 02:
				preco = 399.99;
				break;
			case 03:
				preco = 449.99;
				break;
			case 04:
				preco = 419.99;
				break;
			case 05:
				preco = 199.99;
				break;
			case 06:
				preco = 1001.97;
				break;
		}
		printf("Quantos deseja comprar?\n");
		scanf("%d",&quantidade);
		preco = preco *quantidade;
		
		//printf("preco = %f\n",preco);
		
		precoNovo += preco;
		
		//printf("precoNovo = %f\n",precoNovo);
		
		printf("deseja continuar comprando? \n 01 - Sim \n outro-NÃO\n");
		scanf("%d",&loop);
		system("cls");
		
	}while(loop==1);
	
	printf("Qual o valor do desconto?\n");
	scanf("%f",&desconto);
	total = precoNovo-desconto;
	
	printf("Desconto = R$%.2f\n",desconto);
	printf("O valor total é: R$%.2f\n",total);
		

	
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	catalogo();
	
}
