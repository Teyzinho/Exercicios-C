#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,valor[5];
	
	for(i=0;i<5;i++){
		printf("Valor %d :",i+1);
		scanf("%d",&valor[i]);
	}
	system("cls");
	
	for(i=0;i<5;i++){
		printf("%d° Valor : %d\n",i+1,valor[i]);
	}
	
	
}
