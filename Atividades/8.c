int main(){
	
	//declaração variáveis
	int altura;
	int base;
	int area;
	
	area = altura * base / 2;
	
	printf("Insira a Altura do triangulo: ");
	scanf("\n%d",&altura);
	printf("Insira a base do triangulo: ");
	scanf("\n%d",&base);
	
	area = altura * base / 2;
	
	printf("\n A area do triangulo e: %d",area);
}
