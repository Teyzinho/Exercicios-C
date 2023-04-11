#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int i=1,j,y;
	
	for(i;i<=10;i+=2){
		j=i+6;
		y=j-3;
		for(j;j>y;j--){
			printf("I=%d J=%d \n",i,j);
		}
	}
}

