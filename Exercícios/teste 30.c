int main(){
	
	int i,numero;
	i = 1;
	
	printf("Insira um numero");
	scanf("%d",&numero);
	
	while(i<=numero){
		if(i%2==0){
			printf("O numero %d � par\n",i);
		}
		else{
			printf("O numero %d � impar\n",i);
		}
	}
}
