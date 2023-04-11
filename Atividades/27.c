 #include <stdio.h>
 int main(){
 	
 	//variaveis
 	int i;
 	float velocidade,tempo;
 	i = 1;
 	
 	while(i==1){
 		printf("***Calculo de distancia***\n");
 		printf("Insira a velocidade em km/h : ");
 		scanf("%f",&velocidade);
 		printf("Insira o tempo em Horas : ");
 		scanf("%f",&tempo);
 		fflush(stdin);
 		printf("A distancia percorrida e de : %f\n\n",velocidade*tempo);
 		printf("Deseja Calcular novamente? 1 - Sim | 2 - Nao :");
 		scanf("%d",&i);
 		printf("\n\n");
 		
	 }
 }
