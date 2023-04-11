#include <locale.h>

int main(){
	
	
	setlocale(LC_ALL,"Portuguese");
	
	int numero,i=1;
	
	
	printf("Insira um numero");
	scanf("%d",&numero);
	
	while(i<=numero){
		if(i==2){
		
			printf("%d é par\n",i);
		}
		else
			printf("%d é impar\n",i);
			i++;
		}
		
	}
	
	

