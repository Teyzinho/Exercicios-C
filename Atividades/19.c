int main(){
	
	//variáveis
	int codigo,quantidade;
	float valor;
	
	//produtos
	printf("#####################CARDAPIO#####################");
	printf("\n101 - Suco de maracuja R$12.00");
	printf("\n102 - Coca-Cola R$6.00");
	printf("\n103 - Pepsi R$5.50");
	printf("\n104 - Fanta R$5.50");
	printf("\n105 - Pinga da boa R$9.99");
	printf("\n106 - Suco de cafe R$0.30");
	printf("\n107 - Vinhozin R$14.00");
	printf("\n108 - Whiskyy R$20.00");
	printf("\n109 - Suco de uva R$4.00");
	printf("\n110 - Suco de melancia R$6.00");
	printf("\n##################################################");
	printf("\nInsira o codigo de barra desejado : ");
	scanf("%d",&codigo);
	printf("##################################################");
	printf("\nInsira a quantidade desejada : ");
	scanf("%d",&quantidade);
	printf("##################################################");
	
	if(codigo==101){
		valor = 12;
	}
	else if(codigo==102){
		valor = 6;
	}
	else if(codigo==103){
		valor = 5.5;
	}
	else if(codigo==104){
		valor = 5.5;
	}
	else if(codigo==105){
		valor = 9.99;
	}
	else if(codigo==106){
		valor = 0.3;
	}
	else if(codigo==107){
		valor = 14;
	}
	else if(codigo==108){
		valor = 20;
	}
	else if(codigo==109){
		valor = 4;
	}
	else if (codigo==110){
		valor = 6;
	}
	else{
		printf("\nCodigo nao registrado");
	}
	printf("\nValor a pagar = R$%.2f",valor*quantidade);
	printf("\n##################################################");
}

