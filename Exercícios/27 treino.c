#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i,j,tamanho,y,z;
	
	printf("Insira um numero para o tamanho do triângulo : ");
	scanf("%d",&tamanho);
		
	for(i=1;i<=tamanho;i++){
		for(y=tamanho;y>=i;y--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			if(j==1 || i==tamanho){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		for(z=2;z<=i;z++){
			if(j==1 || z==i || i==tamanho){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
}
