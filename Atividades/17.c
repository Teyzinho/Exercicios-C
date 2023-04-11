int main(){
	
	//variáveis
	float distancia,quantidade,consumo;
	
	//perguntas
	printf("=========================================================");
	printf("\nQual a distancia percorrida em KM? :");
	scanf("%f",&distancia);
	printf("Qual a quantidade de litros de gasolina gasta por hora? :");
	scanf("%f",&quantidade);
	
	consumo = distancia/quantidade;
	
	//Opçoes
	if (consumo>=15){
		printf("\n\nResultado");
		printf("\n========================================================");
		printf("\nConsumo de litros de gasolina e de :%.2f km/l",consumo);
		printf("\nSeu veiculo e economico!!");
	}
	else{
		printf("Resultado");
		printf("\n========================================================");
		printf("\nConsumo de litros de gasolina e de :%.2f km/l",consumo);
		printf("\nSeu veiculo nao e economico :(");
	}
}
