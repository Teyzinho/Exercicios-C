#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//variaveis
	int i=1,loop,opcao,retomar;
	float mult, num,num1,num2;
	char circulo;
	
	//Exebição calculadora
	do{
	
		printf("&&&&&&Calculadora Mais Braba&&&&&&\n");
		printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
		printf("\t   Oque você deseja?\n");
		printf("|01| - Multiplicacao \t|06| - Porcentagem\n");
		printf("|02| - Divisao \t\t|07| - Área Quadrado \n");
		printf("|03| - Adicao \t\t|08| - Área Triângulo\n");
		printf("|04| - Divisao \t\t|09| - Área Retângulo\n");
		printf("|05| - Tabuada \t\t|10| - Área circulo\n");
		printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
		
		printf("Insira o codigo da opção desejada : ");
		scanf("%d",&opcao);
		printf("\n");
	
		
		switch(opcao){
			//Multiplicação
			case 1:
				printf("****Multiplicao****\n");
				printf("Insira o primeiro número : ");
				scanf("%f",&num1);
				printf("Insira o segundo número : ");
				scanf("%f",&num2);
				printf("O resultado da multiplicacao é : %.2f\n\n",num1*num2);
				break;
			//Divisão
			case 2:
				printf("****Divisão****\n");
				printf("Insira o primeiro número : ");
				scanf("%f",&num1);
				printf("Insira o segundo número : ");
				scanf("%f",&num2);
				printf("O resultado da divisão é : %.2f\n\n",num1/num2);
				break;
			//adção
			case 3:
				printf("****Adição****\n");
				printf("Insira o primeiro número : ");
				scanf("%f",&num1);
				printf("Insira o segundo número : ");
				scanf("%f",&num2);
				printf("O resultado da Adição é : %.2f\n\n",num1+num2);
				break;
			//subtração
			case 4:
				printf("****Subtração****\n");
				printf("Insira o primeiro número : ");
				scanf("%f",&num1);
				printf("Insira o segundo número : ");
				scanf("%f",&num2);
				printf("O resultado da Subtração é : %.2f\n\n",num1-num2);
				break;
			//Tabuada
			case 5:
				i=1;
				printf("****TABUADA****\n");
				printf("Insira um número : ");
				scanf("%f",&num);
				 
				 
				 while(i<=10){
					
					mult = i * num;
				 	
					printf("%d X %.0f = %.0f \n",i,num,mult);
					
					i++;
				 }
				 break;
			//Porcentagem
			case 6:
			printf("****Porcetagem****\n");
			printf("Insira  A porcentagem : ");
			scanf("%f",&num1);
			printf("Insira O numero : ");
			scanf("%f",&num2);
			printf("%.0f porcento de %.2f é : %.2f\n\n",num1,num2,num2*(num1/100));
			break;
			//Área do quadrado
			case 7:
			printf("****Área do quadrado****\n");
			printf("Insira  A altura ou lado: ");
			scanf("%f",&num1);
			printf("A área do quadrado é igual a : %.2f",num1*num1);
			break;
			//triangulo
			case 8:
				printf("****Área triângulo****\n");
				printf("Insira o lado : ");
				scanf("%f",&num1);
				printf("Insira a altura: ");
				scanf("%f",&num2);
				printf("A área do triângulo é igual a : %.2f",(num1*num2)/2);
				break;
			case 9:
				printf("****Área Retângulo****\n");
				printf("Insira o lado : ");
				scanf("%f",&num1);
				printf("Insira a altura: ");
				scanf("%f",&num2);
				printf("A área do retângulo é igual a : %.2f",num1*num2);
				break;
			//circulo
			case 10:
				printf("****Área Ciurculo****\n");
				printf("Você deseja caucular a área pelo\n");
				printf("Diametro - D\n");
				printf("Raio - R \n");
				fflush(stdin);
				scanf("%c",&circulo);
				fflush(stdin);
				
				printf("\n");
				switch(circulo){
				
					case 'r':
					case 'R':
						printf("Insira o Raio : ");
						scanf("%f",&num1);
						printf("A área do circulo é igual a : %.2f",3.14*(num1*num1));
						break;
						
					case 'd':
					case 'D':
						printf("Insira o Diametro : ");
						scanf("%f",&num1);
						num2 = num1/2;
						printf("A área do circulo é igual a : %.2f",3.14*(num2*num2));
						break;	
				}
				
				break;
			default:
				printf("\nInsira Codigo válido : ");
				break;
				
		 }
		 
		 //Opção de Reiniciar
		  printf("\n\nDeseja Retomar a calculadora?\n");
			printf("Sim - 1\n");
			printf("Não - Outro\n");
			scanf("%d",&retomar);
			if(retomar==1){
				loop = 1;
				printf("\n\n");
				system("cls");
			}
			else{
				return 0;
			}
				 
	}while(loop=1);
}
