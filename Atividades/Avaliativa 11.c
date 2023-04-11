int main(){
	
	//variaveis
	char nome[20],cidade[20];
	int idade;
	
	//perguntas
	printf("#######Cadastro para doadores de sangue#######");
	printf("\nInforme seu nome : ");
	gets(nome);
	printf("Insira sua cidade : ");
	gets(cidade);
	printf("Insira sua idade : ");
	scanf("%d",&idade);
	
	if (idade>=18&&idade<=69){
		printf("Prezado(a), %s, voce agora e um(a) doador(a) de sangue, muitas vidas te agradecem!",nome);
	}
	else{
		printf("Prezado(a), %s, agradecemos sua intencao, mas infelizmente voce nao atende os criterios para ser doador(a) de sangue. GRATIDAO!",nome);
	}
}
