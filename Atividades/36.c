#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,num,quant=0,z;
	
	printf("Insira um numero : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		for(z=1;z<=i;z++){
		
			if(i%z == 0){
				quant++;
			}
		}
		if(quant<=2){
			printf("%d \n",i);
			}
		quant = 0;
		}
		
	}

