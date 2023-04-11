int main(){
	
	//O programa ira dizer se voce e alto
	//variaveis
	float altura;
	
	printf("Insira sua altura em metros : ");
	scanf("%f",&altura);
	
	if(altura<=1.20&&altura>=1.00){
		printf("Voce e um anao");
	}
	else if(altura<1.00){
		printf("Voce e um smurf");
	}
	else if(altura>1.20&&altura<=1.40){
		printf("Voce e um anao grande");
	}
	else if(altura>1.40&&altura<=1.60){
		printf("Tamanho normal de uma criança de 12 anos");
	}
	else if(altura>1.60&&altura<=1.70){
		printf("Tamanho normal");
	}
	else if(altura>1.70&&altura<=1.85){
		printf("Acima da media humana");
	}
	else{
		printf("Gigante");
	}
}
