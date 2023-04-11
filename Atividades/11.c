int main(){
	
	//Variáveis
	float televisor;
	int quantidadet;
	float tq;
	float xboxone;
	int quantidadexboxone;
	float xboxonepreco;
	float ps4;
	int quantidadeps4;
	float ps4preco;
	float xboxseries;
	int quantidadexboxseries;
	float xboxseriespreco;
	float ps5;
	int quantidadeps5;
	float ps5preco;
	
	
	
	//exebição e perguntas
	
	//Televisor
	printf ("--------------------------------------------");
	printf("\n----------------ENTRADA DE NF----------------");
	printf ("\nTelevisor: R$");
	scanf ("%f",&televisor);
	printf ("Quantidade: ");
	scanf ("%d",&quantidadet);
	
	tq = televisor*quantidadet;
	
	printf ("Valor Total Televisor: R$%.2f",tq);
	printf ("\n--------------------------------------------");
	
	//Ps4
	printf("\nValor ps4: R$");
	scanf("%f",&ps4);
	printf("Quantidade: ");
	scanf("%d",&quantidadeps4);
	
	ps4preco = ps4*quantidadeps4;
	
	printf("Valor Total ps4: R$%.2f",ps4preco);
	printf ("\n--------------------------------------------");
	
	//xbox one
	printf("\nValor Xbox One: R$");
	scanf("%f",&xboxone);
	printf("Quantidade: ");
	scanf("%d",&quantidadexboxone);
	
	xboxonepreco = xboxone*quantidadexboxone;
	
	printf("Valor Total Xbox One: R$%.2f",xboxonepreco);
	printf ("\n--------------------------------------------");
	
	//Xboxseries
	printf("\nValor Xbox Series: R$");
	scanf("%f",&xboxseries);
	printf("Quantidade: ");
	scanf("%d",&quantidadexboxseries);
	
	xboxseriespreco = xboxseries*quantidadexboxseries;
	
	printf("Valor Total Xboxseries: R$%.2f",xboxseriespreco);
	printf ("\n--------------------------------------------");
	
	//ps5
	printf("\nValor Ps5: R$");
	scanf("%f",&ps5);
	printf("Quantidade:");
	scanf("%d",&quantidadeps5);
	
	ps5preco = ps5*quantidadeps5;
	
	printf("Valor Final ps5: R$%.2f",ps5preco);
	
	//valor final
	printf ("\n--------------------------------------------");
	printf("\n Valor Final da compra: R$%.2f",tq+ps5preco+ps4preco+xboxonepreco+xboxseriespreco);
	printf ("\n--------------------------------------------");
	
	
	
	
}
