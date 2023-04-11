#include <stdio.h>

int main(){
	
	//variaveis
	char opcao,nome[20];
	int pacote,quantidade,pais,estado;
	float valor;
	
	//Pacote
	printf("#####Agencia de viangens JHS#####\n");
	printf("Informe seu nome : ");
	gets(nome);
	fflush(stdin);
	printf("\n#################################");
	printf("\nDeseja o pacote voce deseja?\n");
	printf("I - Internacional\n");
	printf("N - Nacional\n");
	scanf("%c",&opcao);
	
	switch(opcao){
		//nacional
		case 'n':
			printf("\n**********************************************************");
			printf("\n****************Pacote de viagens nacional****************");
			printf("\n01 |Rio de Janeiro - Rio de Janeiro|R$ 580");
			printf("\n02 |Sao paulo - Sao Paulo|R$ 470");
			printf("\n03 |Belo Horizonte - Minas Gerais|R$ 450");
			printf("\n04 |Salvador - Bahia|R$ 680");
			printf("\n05 |Fortaleza - Ceara|R$ 500");
			printf("\n**********************************************************");
			printf("\nQual Estado deseja selecionar? (insira o codigo) : ");
			scanf("%d",&pacote);
			printf("Insira quantidade de pessoas ira transportar : ");
			scanf("%d",&quantidade);
			switch(pacote){
				case 01:
					valor = 580*quantidade;
					break;
				case 02:
					valor = 470*quantidade;
					break;
				case 03: 
					valor = 450*quantidade;
					break;
				case 04:
					valor = 680*quantidade;
					break;
				case 05:
					valor = 500*quantidade;
					break;
				default:
					valor = 0;
					printf("Codigo invalido");
					break;		
			}
			printf("O valor do pecote sera de : R$%.2f",valor);
			break;

	//Internacional
		case 'i':
			printf("\n**********************************************************");
			printf("\n************Pacote de viagens Internacional***************");
			printf("\n111 |Estados unidos");
			printf("\n112 |Canada");
			printf("\n113 |Portugal");
			printf("\n**********************************************************");
			printf("\nQual pais deseja Selecionar : ");
			scanf("%d",&pais);
			switch(pais){
				//EUA
				case 111:
					printf("\n**********************************************************");
					printf("\n************Pacote de Viagens Estados Unidos**************");
					printf("\n101 |Austin - Texas| R$1200");
					printf("\n102 |Sacramento - California| R$1350");
					printf("\n103 |Washington| R$1470");
					printf("\n**********************************************************");
					printf("\nQual estado deseja selecionar? : ");
					scanf("%d",&estado);
					printf("Insira a quantidade de pessoas ira transportar : ");
					scanf("%d",&quantidade);
					switch(estado){
						case 101:
							valor = 1200*quantidade;
							break;
						case 102:
							valor = 1350*quantidade;
							break;
						case 103:
							valor = 1470*quantidade;
							break;
						default:
							printf("opcao de estado invalida");
							valor = 0;
							break;
							}
						printf("O valor do pecote sera de : R$%.2f",valor);
						break;
				//CANADA
				case 112:
					printf("\n**********************************************************");
					printf("\n****************Pacote de Viagens Canada******************");
					printf("\n101 |Edmonton - Alberta| R$1300");
					printf("\n102 |Winnipeg - Manitoba| R$1450");
					printf("\n103 |Otawwa - Otawwa| R$1570");
					printf("\n**********************************************************");
					printf("\nQual estado deseja selecionar? : ");
					scanf("%d",&estado);
					printf("Insira a quantidade de pessoas ira transportar : ");
					scanf("%d",&quantidade);
					switch(estado){
						case 101:
							valor = 1300*quantidade;
							break;
						case 102:
							valor = 11450*quantidade;
							break;
						case 103:
							valor = 1570*quantidade;
							break;
						default:
							printf("opcao de estado invalida");
							valor = 0;
							break;
							}
						printf("O valor do pecote sera de : R$%.2f",valor);
						break;
				//PORTUGAL
				case 113:
					printf("\n**********************************************************");
					printf("\n***************Pacote de Viagens Portugal****************");
					printf("\n101 |Lisboa| R$800");
					printf("\n102 |Porto| R$740");
					printf("\n103 |Faro| R$700");
					printf("\n**********************************************************");
					printf("\nQual estado deseja selecionar? : ");
					scanf("%d",&estado);
					printf("Insira a quantidade de pessoas ira transportar : ");
					scanf("%d",&quantidade);
					switch(estado){
						case 101:
							valor = 800*quantidade;
							break;
						case 102:
							valor = 740*quantidade;
							break;
						case 103:
							valor = 700*quantidade;
							break;
						default:
							printf("opcao de estado invalida");
							valor = 0;
							break;
							}
						printf("O valor do pecote sera de : R$%.2f",valor);
						break;
				default:
					printf("Opcao invalida, favor reiniciar a aplicacao");
					break;
		
			
			}
		default:
			printf("Opcao invalida, favor reiniciar aplicacao");	
			
		
	}
}
