#include <locale.h>

int main(){
	
	
	setlocale(LC_ALL,"Portuguese");
	
	int numero,i=1;
	
	
	printf("Insira um numero");
	scanf("%d",&numero);
	
	while(i<=numero){
		if(i==2){
		
			printf("%d � par\n",i);
		}
		else
			printf("%d � impar\n",i);
			i++;
		}
		
	}
	
	

