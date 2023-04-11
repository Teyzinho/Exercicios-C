int main(){
	
	//variáveis
	float b1,b2,b3,b4,bt;
	int f1,f2,f3,f4,ft;
	
	//Perguntas
	printf("Insira a nota do primeiro bimestre do aluno:");
	scanf("%f",&b1);
	printf("Insira a quantidade de faltas do primeiro bimestre:");
	scanf("%d",&f1);
	printf("Insira a nota do segundo Bimestre do aluno:");
	scanf("%f",&b2);
	printf("Insira a quantidade de faltas do segundo bimestre:");
	scanf("%d",&f2);
	printf("Insira a nota do terceiro bimestre:");
	scanf("%f",&b3);
	printf("Insira a quantidade de faltas do terceiro bimestre");
	scanf("%d",&f3);
	printf("Insira a nota do quarto bimestre:");
	scanf("%f",&b4);
	printf("Insira a quantidade de faltas do quarto bimestre:");
	scanf("%d",&f4);
	
	bt = b1+b2+b3+b4;
	ft = f1+f2+f3+f4;
	
	if (bt>=60&&ft<50){
		printf("\nNota final: %1.f  \tNumero de faltas: %d  \tSituacao: Aprovado",bt,ft);
		
	}
	else {
		printf("\nNota final: %1.f  \tNumero de faltas: %d  \tSituacao: Reprovado",bt,ft);
	}
}
