int main(){
	
	//variáveis
	char nome[20],data[40],cpf[44],rua[40],numero[4],bairro[20],cidade[20],cep[20];
	float renda,ame;
	
	//Perguntas
	printf("Nome:");
	gets(nome);
	printf("Data de nascimento:");
	gets(data);
	printf("CPF:");
	gets(cpf);
	printf("Nome da Rua:");
	gets(rua);
	printf("Numero:");
	gets(numero);
	printf("Bairro:");
	gets(bairro);
	printf("Cidade:");
	gets(cidade);
	printf("CEP:");
	gets(cep);
	printf("Renda per Capita:R$");
	scanf("%f",&renda);
	
	
	//Resultado
	printf("****************************AME*******************************");
	printf("\nNome:%s",nome);
	printf("\nData de nascimento:%s",data);
	printf("\nCPF:%s",cpf);
	printf("\nRua:%s",rua);
	printf("   Numero:%s",nome);
	printf("   Bairro:%s",bairro);
	printf("\nCidade:%s",cidade);
	printf("   CEP:%s",cep);
	printf("\n****************************AME*******************************");
	printf("\nRenda pre Capita:R$%.2f",renda);
	printf("\n****************************AME*******************************");
	ame = renda * 0.225;
	printf("\nAME:R$%.2f",ame);
	printf("\n****************************AME*******************************");
	

	
	
	
	
}
