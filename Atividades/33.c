#include <stdio.h>

int main(){
	
	int i,a,tamanho;
	
	printf("Insira o Tamanho do triangulo : ");
	scanf("%d",&tamanho);
	
	while(i<=tamanho){
		for(a=1;a<=i-1;a++){
			if(a==1){
				printf("o ");
			}
			else if(a==i-1){
				printf("o");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
		if(i==tamanho){
			for(a=1;a<=i;a++){
			printf("o ");
		}
	}
		i++;
	}
}
