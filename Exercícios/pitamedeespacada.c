#include <stdio.h>

int main(){
	
	int i,a,tamanho,tamanho2,espaco,b;
	
	printf("Insira o Tamanho do triangulo : ");
	scanf("%d",&tamanho);
	i=1;
	while(i<=tamanho){
		
		for(espaco=tamanho;espaco>=i;espaco--){
			printf(" ");
		}
		
		for(a=1;a<=i;a++){
			printf("o");
		}
		
		for(a=2;a<=i;a++){
			printf("o");
		}
		printf("\n");
		i++;
	}
	i=1;
	tamanho2 = tamanho - 1;
	while(tamanho2>i){
		
		for(espaco=i;espaco<=tamanho2;espaco++){
			printf(" ");
		}
		
		for(a=tamanho2;a<=i;a--){
			printf("o");
		}
		
		for(a=tamanho2;a<=i;a--){
			printf("o");
		}
		printf("\n");
		i--;
	}
}
