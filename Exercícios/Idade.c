int main(){
	
	int idade;
	
	printf("Insira a sua idade:");
	scanf("%d",&idade);
	
	if(idade>60){
		printf("\nSeu idoso");
	}
	else if(idade>=18&&idade<=59){
		printf("\nTa jovem");
	}
	else if(idade>=12&&idade<=17){
		printf("\nMuleke");
	}
	else{
		printf("\nbebe");
	}
}
