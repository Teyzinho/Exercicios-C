#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	int i,j,z,y,tamanho,pinho,espaco;
	
	scanf("%d",&tamanho);
	
	for(i=1;i<=tamanho;i++){
		for(z=tamanho;z>=i;z--){
			printf(" ");
		}
			for(j=1;j<i;j++){
				if(j==1||i==tamanho||(j>i*0.2&&j<i*0.3)||(j>i*0.4&&j<i*0.5)||(j>i*0.6&&j<i*0.7)||(j>i*0.8&&j<i*0.9)||(j>i*0.05&&j<i*0.1)){
					printf("*");
					}
				else{
					printf(" ");
				}
			}
		for(y=1;y<=i;y++){
			if(y==i||i==tamanho||(y>i*0.2&&y<i*0.3)||(y>i*0.4&&y<i*0.5)||(y>i*0.6&&y<i*0.7)||(y>i*0.8&&y<i*0.9)||(y>i*0.05&&y<i*0.1)){
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
