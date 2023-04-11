#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nota[4], soma,i;
	
	i = 0;
	
	while(i<4){
		printf("Insira as 4 notas bimestrais do aluno : ");
		scanf("%d",&nota[i]);
		i++;
	}
	
	i = 0;
	
	printf("\nA notas bimestrais do aluno foram \n");
	
	while(i<4){
		printf("%d° Bimestre : %d \n",i+1,nota[i]);
		soma+=nota[i];
		i++;
	}
	
	printf("\nA soma das notas foi de : %d\n",soma);
	
	printf("A média de notas por bimestre é : %d",soma/i);
	
}

