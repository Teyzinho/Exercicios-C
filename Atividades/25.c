#include <stdio.h>

int main(){
	
	
	int valor,i,mult;
	
	printf("Insira um valor para calcular a tabuada: ");
	scanf("%d",&valor);
	i = 1;
	
	for(i=1;i<=10;i++){
		mult=i*valor;
		printf("%d * %d = %d\n",valor,i,mult);
	}
	return 0;
	
}
