#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	
	setlocale (LC_ALL,"Portuguese");
	int i,producao[3][12],j,soma[3],soma1;
	char mes[12][5]={"jan","fev","mar","abr","mai","jun","jul","ago","set","out","nov","dez"};
	char turno[3][15]={"Matutino","Verspertino","Noturno"};
	
	for(i=0;i<3;i++){
		
		soma1=0;
		
		printf("Registro Produção turno %s\n",turno[i]);
		
		for(j=0;j<12;j++){
			printf("produção %s : ",mes[j]);
			scanf("%d",&producao[i][j]);
			fflush(stdin);
			soma1 +=producao [i][j];
		}
		soma[i]=soma1;
		system ("cls");
	}
	for(i=0;i<3;i++){
		
		printf("******Produção %s*******\n",turno[i]);
		
		for(j=0;j<12;j++){
			printf("%s : %d\n",mes[j],producao[i][j]);
		}
		printf("Total de produção %d\n",soma[i]);
		printf("****************");
	}
	
}
