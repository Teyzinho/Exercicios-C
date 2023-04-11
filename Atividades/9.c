int main(){
	
	//declaração variaveis
	int v1, v2, v3 ,v4 ,v5;
	
	//Perguntas
	printf("Insira o primeiro valor: ");
	scanf("\n %d",&v1);
	printf("Insira o segundo valor: ");
	scanf("\n %d",&v2);
	printf("Insira o terceiro valor: ");
	scanf("\n %d",&v3);
	printf("Insira o quarto valor: ");
	scanf("\n %d",&v4);
	printf("Insira o quinto valor: ");
	scanf("\n %d",&v5);
	
	//Somas
	int somav1v2 = v1 + v2;
	int somav3v4 = v3 + v4;
	int somav4v5 = v4 + v5;
	
	//Resultados	
	printf("\nA soma entre os valores 1 e 2 e de: %d",somav1v2);
	printf("\nA soma entre os valores 3 e 4 e de: %d",somav3v4);
	printf("\nA soma entre os valores 4 e 5 e de: %d",somav4v5);
	
}
