#include <locale.h>
#include <stdio.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char aluno[5][20];
	int nota[5][4],i,j,soma[5],soma1;
	
	for(i=0;i<5;i++){
		printf("\nInsira o nome do %d° Aluno : ",i+1);
		gets(aluno[i]);
		fflush(stdin);
		
	}
	
	for(i=0;i<5;i++){
		printf("\nNota Aluno %s",aluno[i]);
		soma1=0;
		for(j=0;j<4;j++){
			printf("\n%d° Bimestre : ",j+1);
			scanf("%d",&nota[i][j]);
			soma1 += nota[i][j];
			fflush(stdin);
		}
		soma[i] = soma1;
	}
	
	printf("\nNota filnal dos alunos\n\n");
	
	for(i=0;i<5;i++){
		printf("%s : %d",aluno[i],soma[i]);
		if(soma[i]>=60){
			printf(" - Aprovado\n");
		}
		else{
			printf(" - Reprovado\n");
		}
	}
	
	
}
