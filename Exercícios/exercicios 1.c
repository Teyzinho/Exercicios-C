#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,va1,va2;
	
	printf("Insira dois valores \n");
	scanf("%d \n %d",&va1,&va2);
	
	printf("*********\n");
	
	if(va1>va2){
		for(va2;va2<=va1;va2++){
			printf("%d\n",va2);
		}
	}
	else if(va2>va1){
		for(va2;va2>=va1;va2--){
			printf("%d\n",va2);
		}
	}
	else{
		printf("Valores iguais");
	}
	printf("*********\n");
	
}
