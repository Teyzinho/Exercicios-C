#include <stdio.h>

int main(){
	
	int i,a,tamanho,espaco;
	
	printf("Insira o Tamanho do triangulo : ");
	scanf("%d",&tamanho);
	espaco = tamanho;
	while(i<=tamanho){
		for(espaco;espaco>=i;espaco--){
			printf(" ");
		}
		
		for(a=1;a<=i;a++){
			printf("o");
		}
		printf("\n");
		i++;
	}
}
