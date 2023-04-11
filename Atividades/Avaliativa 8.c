int main(){
	
	//variaveis
	float valor1, valor2;
	
	printf("Insira o primeiro valor : ");
	scanf("%f",&valor1);
	printf("Insira o segundo valor : ");
	scanf("%f",&valor2);
	
	if(valor1>valor2){
		printf("O valor maior e : %.2f",valor1);
	}
	else{
		printf("O valor maior e : %.2f",valor2);
	}
}
