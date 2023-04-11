int main(){
	
	//variáveis
	float peso,altura,imc;
	
	//Perguntas
	printf("Informe o peso do paciente: ");
	scanf("%f",&peso);
	printf("Informe a altura do paciente: ");
	scanf("%f",&altura);
	
	imc = peso/(altura*altura);
	
	//Se
	if(imc<18.5){
		printf("Abaixo do peso");
	}
	else if(imc>=18.5&&imc<=24.9){
		printf("Peso normal");
	}
	else if (imc>=25&&imc<29.9){
		printf("Sobrepeso");
	}
	else if (imc>=30&&imc<=34.9){
		printf("Obesidade Grau I");
	}
	else if (imc>=35&&imc<=39.9){
		printf("Obesidade Grau II");
	}
	else{
		printf("Obesidade Grau III ou Mórbita");
	}
}
