#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//variaveis
	int i=1,loop,opcao,retomar;
	float mult, num,num1,num2;
	char circulo;
	
	//Exebi��o calculadora
	do{
	
		printf("&&&&&&Calculadora Mais Braba&&&&&&\n");
		printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
		printf("\t   Oque voc� deseja?\n");
		printf("|01| - Multiplicacao \t|06| - Porcentagem\n");
		printf("|02| - Divisao \t\t|07| - �rea Quadrado \n");
		printf("|03| - Adicao \t\t|08| - �rea Tri�ngulo\n");
		printf("|04| - Divisao \t\t|09| - �rea Ret�ngulo\n");
		printf("|05| - Tabuada \t\t|10| - �rea circulo\n");
		printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
		
		printf("Insira o codigo da op��o desejada : ");
		scanf("%d",&opcao);
		printf("\n");
	
		
		switch(opcao){
			//Multiplica��o
			case 1:
				printf("****Multiplicao****\n");
				printf("Insira o primeiro n�mero : ");
				scanf("%f",&num1);
				printf("Insira o segundo n�mero : ");
				scanf("%f",&num2);
				printf("O resultado da multiplicacao � : %.2f\n\n",num1*num2);
				break;
			//Divis�o
			case 2:
				printf("****Divis�o****\n");
				printf("Insira o primeiro n�mero : ");
				scanf("%f",&num1);
				printf("Insira o segundo n�mero : ");
				scanf("%f",&num2);
				printf("O resultado da divis�o � : %.2f\n\n",num1/num2);
				break;
			//ad��o
			case 3:
				printf("****Adi��o****\n");
				printf("Insira o primeiro n�mero : ");
				scanf("%f",&num1);
				printf("Insira o segundo n�mero : ");
				scanf("%f",&num2);
				printf("O resultado da Adi��o � : %.2f\n\n",num1+num2);
				break;
			//subtra��o
			case 4:
				printf("****Subtra��o****\n");
				printf("Insira o primeiro n�mero : ");
				scanf("%f",&num1);
				printf("Insira o segundo n�mero : ");
				scanf("%f",&num2);
				printf("O resultado da Subtra��o � : %.2f\n\n",num1-num2);
				break;
			//Tabuada
			case 5:
				i=1;
				printf("****TABUADA****\n");
				printf("Insira um n�mero : ");
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
			printf("%.0f porcento de %.2f � : %.2f\n\n",num1,num2,num2*(num1/100));
			break;
			//�rea do quadrado
			case 7:
			printf("****�rea do quadrado****\n");
			printf("Insira  A altura ou lado: ");
			scanf("%f",&num1);
			printf("A �rea do quadrado � igual a : %.2f",num1*num1);
			break;
			//triangulo
			case 8:
				printf("****�rea tri�ngulo****\n");
				printf("Insira o lado : ");
				scanf("%f",&num1);
				printf("Insira a altura: ");
				scanf("%f",&num2);
				printf("A �rea do tri�ngulo � igual a : %.2f",(num1*num2)/2);
				break;
			case 9:
				printf("****�rea Ret�ngulo****\n");
				printf("Insira o lado : ");
				scanf("%f",&num1);
				printf("Insira a altura: ");
				scanf("%f",&num2);
				printf("A �rea do ret�ngulo � igual a : %.2f",num1*num2);
				break;
			//circulo
			case 10:
				printf("****�rea Ciurculo****\n");
				printf("Voc� deseja caucular a �rea pelo\n");
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
						printf("A �rea do circulo � igual a : %.2f",3.14*(num1*num1));
						break;
						
					case 'd':
					case 'D':
						printf("Insira o Diametro : ");
						scanf("%f",&num1);
						num2 = num1/2;
						printf("A �rea do circulo � igual a : %.2f",3.14*(num2*num2));
						break;	
				}
				
				break;
			default:
				printf("\nInsira Codigo v�lido : ");
				break;
				
		 }
		 
		 //Op��o de Reiniciar
		  printf("\n\nDeseja Retomar a calculadora?\n");
			printf("Sim - 1\n");
			printf("N�o - Outro\n");
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
