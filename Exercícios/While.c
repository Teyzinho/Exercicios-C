#include <stdio.h>
int main(){
	
	//while = enquanto
	//while = estrutura de repetição
	
	int i;
	char menu;
	i = 1;
	menu = 's';
	
	while(i>0){
		printf("Oi\n");
		i--;
	}
	while(menu=='s'){
		printf("Menu\n");
		printf("Batata R$2.00\n");
		
		printf("Deseja ver o menu novamente S - SIM | N - Nao\n");
		scanf("%c",&menu);
		fflush(stdin);
	}
	
	
}
