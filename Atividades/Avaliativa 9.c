int main(){
	//variaveis
	char nome[20];
	float salario,despesas;
	
	printf("Insira seu nome : ");
	gets(nome);
	printf("Insira seu salario : ");
	scanf("%f",&salario);
	printf("Informe suas despesas : ");
	scanf("%f",&despesas);
	printf("####RESULTADO####");
	
	if(salario>despesas){
		printf("\nO salario e suficiente para suas despesas");
	}
	else{
		printf("\nSeu salario nao e suficiente para suas despesas :(");
	}
}
