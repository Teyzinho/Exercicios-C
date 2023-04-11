#include <string.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main(){
	
	int a,i;
	
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		a = 5 + rand() %8;
		
		printf("%d\n",a);
	}
	getch();
}
