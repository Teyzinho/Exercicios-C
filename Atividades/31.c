#include <stdio.h>

int main(){
	
	int i,a,tamanho;
	
	printf("Insira o Tamanho do triangulo : ");
	scanf("%d",&tamanho);
	
	while(i<=tamanho){
		for(a=1;a<=i;a++){
			printf("o");
		}
		printf("\n");
		i++;
	}
}
