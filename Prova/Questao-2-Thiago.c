#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	for(i=1;i<=55100;i++){
		if(i%5==0){
			printf("%d\n",i);
		}
	}
}
