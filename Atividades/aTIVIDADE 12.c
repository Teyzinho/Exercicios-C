int main(){
	
	//variaveis
	int codigo1,codigo2,quantidade1,quantidade2;
	float valor1,valor2,combo1,combo2,combo;
	
	//Menus
	printf("##########MENU DE BEBIDAS###########   ##########MENU DE SALGADOS##########");
	printf("\n      101 - COCA-COLA R$7.00     |   |         201 - Coxinha       R$ 4.00");
	printf("\n      102 - Pepsi     R$6.00     |   |         202 - Impadão       R$ 3.00");
	printf("\n      103 - Dolly     R$5.00     |   |         203 - Pastel        R$ 3.00");
	printf("\n      104 - Fanta     R$6.50     |   |         204 - Hamburguer    R$ 9.00");
	printf("\n      105 - Toddynho  R$3.00     |   |         205 - Pao de queijo R$ 4.00");
	printf("\n##################################   ######################################");
	
	printf("\nInforme a bebida desejada : ");
	scanf("%d",&codigo1);
	printf("Informe a quantidade de bebida desejada : ");
	scanf("%d",&quantidade1);
	printf("Informe o salgado desejado : ");
	scanf("%d",&codigo2);
	printf("Indorme a quantidade de salgado dejado : ");
	scanf("%d",&quantidade2);
	
	//bebidas
	if(codigo1==101){
		valor1 = 7;
	}
	else if(codigo1==102){
		valor1 = 6;
	}
	else if(codigo1==103){
		valor1 = 5;
	}
	else if(codigo1==104){
		valor1 = 6.5;
	}
	else if(codigo1==105){
		valor1 = 3;
	}
	
	//salgados
	if (codigo2==201){
		valor2 = 4;
	}
	else if(codigo2==202){
		valor2 = 3;
	}
	else if(codigo2==203){
		valor2 = 3;
	}
	else if(codigo2==204){
		valor2 = 9;
	}
	else if(codigo2==205){
		valor2 = 4;
	}
	else{
		printf("\nOpcao invalida, reinicie a aplicacao");
	}
	combo1 = valor1*quantidade1;
	combo2 = valor2*quantidade2;
	combo = combo1+combo2;
	
	
	printf("##########VALOR DO COMBO###########");
	printf("\n o valor e de : R$%.2f",combo);

	
	
	
	
	
}
