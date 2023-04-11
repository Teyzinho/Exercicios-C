#include <locale.h>
#include <stdio.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,sequencia,num,j;
	
	printf("Insira Dois valores para sequência : ");
	scanf("%d %d",&sequencia,&num);
	
	for(i=1;i<=num;){
		
		for(j=1;j<=sequencia;j++){
			printf("%d ",i);
			i++;
		}
		printf("\n");
	}
}
