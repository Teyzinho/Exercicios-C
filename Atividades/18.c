int main(){
	
	//variaveis
	int escolha;
	float area,base,altura,base1;
	
	//perguntas
	printf("----------------CALCULO DE AREAS----------------");
	printf("\n1| Area do retangulo");
	printf("\n2| Area do quadrado");
	printf("\n3| Area do trapezio");
	printf("\n4| Area do triangulo");
	printf("\n5| Area do circulo");
	printf("\n-----------------------------------------------");
	printf("\nQual area deseja calcular? ");
	scanf("%d",&escolha);
	printf("-----------------------------------------------");
	
	//Triangulo
	if(escolha==1){
	printf("\n----------------AREA DO RETANGULO----------------");
	printf("\nInforme a base : ");
	scanf("%f",&base);
	printf("Informe a altura : ");
	scanf("%f",&altura);
	
	area = base*altura;
	
	printf("A area do retangulo = %.2f",area);
	printf("\n-----------------------------------------------");
	}
	//Quadrado
	else if(escolha==2){
	printf("\n----------------AREA DO QUADRADO----------------");	
	printf("\nInforme a base ou a altura : ");
	scanf("%f",&base);
	
	area = base*base;
	
	printf("A area do quadrado = %.2f",area);
	printf("\n-----------------------------------------------");
	
	}
	//Trapezio
	else if(escolha==3){
		printf("\n----------------AREA DO TRAPEZIO----------------");
		printf("\n Informe a base maior : ");
		scanf("%f",&base);
		printf("Informe a base menor : ");
		scanf("%f",&base1);
		printf("Informe a altura : ");
		scanf("%f",&altura);
		
		area = (base+base1*altura)/2;
		
		printf("A area do trapezio = %.2f",area);
		printf("\n-----------------------------------------------");
			
	}
	//Triangulo
	else if(escolha==4){
		printf("\n----------------AREA DO TRIANGULO----------------");
		printf("\n Indorme a base : ");
		scanf("%f",&base);
		printf("Informe a altura : ");
		scanf("%f",&altura);
		
		area = (base*altura)/2;
		
		printf("Area do triangulo = %.2f",area);
		printf("\n-----------------------------------------------");
		
	}
	//Circulo
	else if(escolha==5){
		printf("\n----------------AREA DO CIRCULO----------------");
		printf("\nInforme o raio : ");
		scanf("%f",&base);
		
		area = 3.14*(base*base);
		
		printf("A area do circulo = %.2f",area);
		printf("\n-----------------------------------------------");
	}
	else{
		printf("\n1 2 3 4 5 burro");
	}
	
}
