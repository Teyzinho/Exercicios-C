#include <stdio.h>

int main(){
	
	int i,a,tamanho,tamanho2;
	
	printf("Insira o Tamanho do triangulo : ");
	scanf("%d",&tamanho);
	
	while(i<=tamanho){
		for(a=1;a<=i;a++){
			printf("o");
		}
		printf("\n");
		i++;
	}
	i=1;
	tamanho2 = tamanho - 1;
	while(tamanho2>=i){
		for(a=tamanho2;a>=i;a--){
			printf("o");
		}
		printf("\n");
		i++;
	}
	
	
}
