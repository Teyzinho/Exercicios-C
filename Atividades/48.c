#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	Funções math.h
		1° 
		pow(variável, expoente)	potenciação
		Ex: pow(a,2)
		
		2°
		sqrt( )	Calcula raiz quadrada
		Ex: sqrt(a);
*/
	
void bhaskara(){
	float a,b,b2,c;
	float delta,bhaskara,bhaskara2;
	
	printf("Insira o valor de a :");
	scanf("%f",&a);
	printf("Insira o valor de b :");
	scanf("%f",&b);
	printf("Insira o valor de c :");
	scanf("%f",&c);
	
	b2 = pow(b,2);
	delta = b2 -4*a*c;
	
	printf("\n\nValor de delta :%.2f\n",delta);
	if(delta<0){
		printf("bhaskara não tem valor real\n");
	}
	
	else{
	bhaskara = (-b + sqrt(delta))/(2*a);
	bhaskara2 = (-b - sqrt(delta))/(2*a);
	printf("\nO valor de bhaskara  é %.2f ou %.2f\n",bhaskara,bhaskara2);
	}
	
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int loop;
	do{
	
	bhaskara();
	
	printf("\n\nDeseja continuar? 1-sim  Outro-Não");
	scanf("%d",&loop);
	system("cls");
	}while(loop==1);
}


