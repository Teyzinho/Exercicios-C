#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	
	int i,j,z,y,r,tamanho,pinho,espaco;
	
	scanf("%d",&tamanho);
	
	for(i=1;i<=tamanho;i++){
		for(z=tamanho;z>=i;z--){
			printf(" ");
		}
			for(j=1;j<i;j++){
				
				r = rand() % i;
				z = rand() % i;
				
				if(j==1||i==tamanho||j==r||j==z){
					
					printf("*");
					}
				else{
					printf(" ");
				}
			}
		for(y=1;y<=i;y++){
			
			r = rand() % i;
			z = rand() % i;
			
			if(y==i||i==tamanho||y==z||y==r){
				printf("*");
				}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	pinho = tamanho;
	espaco = pinho-(tamanho*0.25);
	
	for(i=1;i<tamanho*0.20;i++){
		for(z=0;z<=espaco;z++){
			printf(" ");
			
		}
		for(y=1;y<=pinho/2;y++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=1;i++){
		for(z=1;z<=tamanho*0.3;z++){
			printf(" ");
	}
		for(j=1;j<=tamanho*1.5;j++){
			printf("*");	
		}		
}
}
