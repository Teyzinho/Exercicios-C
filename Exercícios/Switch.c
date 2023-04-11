#include <stdio.h>
int main(){
	
	int num;
	
	printf("digite um numero de 1 a 5 : ");
	scanf("%d",&num);
	fflush(stdin);
	
	switch(num){
		case 1:
			printf("numero 1");
			break;
		case 2:
			printf("numero 2");
			break;
		case 3:
			printf("numero 3");
			break;
		case 4:
			printf("numero 4");
			break;
		case 5:
			printf("numero 5");
			break;
		default:
			printf("numero errado");
			break;
	}
	
}
