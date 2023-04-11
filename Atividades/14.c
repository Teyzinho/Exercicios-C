int main(){
	
	//variáveis
	float valor;
	float desconto;
	
	//pergunta
	printf("Insira o valor: ");
	scanf("%f",&valor);

	//descontos
	if(valor>1000){
		desconto = valor*0.15;
		
	}
	else if(valor<1000&&valor>500){
		desconto = valor*0.1;
		
	}
	else if(valor<500&&valor>100){
		desconto = valor*0.07;
	}
	else{
		desconto = valor*0.05;
		
		
	}
	printf("Valor do desconto R$:%.2f",desconto);
	printf("\nValor final a pagar R$:%.2f",valor-desconto);
}
