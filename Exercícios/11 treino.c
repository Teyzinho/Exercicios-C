#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float massa,tempo,calculotempo;
	
	printf("Insira a massa em gramas : ");
	scanf("%f",&massa);
	
	
	while(massa>=0.05){
		
		massa = massa/2;
		tempo++;
		printf("%.2f \n",massa);
		
	}
	
	calculotempo=tempo*50;
	
	printf("Demora %.1f segundos",calculotempo);
	
	
}
