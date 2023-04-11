#include <string.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <Windows.h>

//Exebição
int exibir(nome,vida,mana,vida2){
	int escolha;
	
	printf("%s vida : %d\n",nome,vida);
	printf("%s mana : %d\n\n",nome,mana);
	printf("Vida do boss : %d\n\n",vida2);
	
	printf("01 - [Atacar]\n");
	printf("02 - [Defender]\n");
	printf("03 - [Curar] - Gasta 5 de mana\n");
	
	scanf("%d",&escolha);
	fflush(stdin);
	return escolha;
}

int atacar(nome,ataque,defesa){
	
	system("cls");
	
	int dano;
	
	dano = ataque-(defesa*0.7);
	printf("%s causou %d de dano!!\n",nome,dano);
	Sleep(1000);
	printf("Aperte 'enter' para continuar\n");
	getch();
	fflush(stdin);
	
	system("cls");
	return dano;
	
}

int ataquepesado(nome,ataque,defesa){
	
	system("cls");
	
	int dano;
	printf("%s usou ataque pesado!!\n",nome);
	Sleep(1000);
	dano = ataque-(defesa*0.2);
	printf("%s causou %d de dano!!\n",nome,dano);
	Sleep(1000);
	printf("Aperte 'enter' para continuar\n");
	getch();
	fflush(stdin);
	
	system("cls");
	return dano;
	
}

int curar(){
	int cura;
	system("cls");
	cura = 10 + rand() %8;
	printf("Você cura %d de vida!!\n",cura);
	Sleep(1000);
	printf("Sua mana diminui em 5\n");
	Sleep(1000);
	printf("Pressione 'Enter'");
	getch();
	fflush(stdin);
	system("cls");
	return cura;
}

void vezdoboss(){
	printf("Vez do boss");
	 Sleep(500);
	 printf(".");
	 Sleep(500);
	 printf(".");
	 Sleep(500);
	 printf(".");
	 Sleep(500);
	 system("cls");
}


struct Personagem{
	char nome[20];
	int vida;
	int mana;
	int ataque;
	int defesa;
	int velocidade;
	int xp;
	int nivel;	
};

int main(){
	
	srand(time(NULL));
	setlocale(LC_ALL,"Portuguese");
	
	struct Personagem prota[1];
	struct Personagem boss[1];
	
	prota[0].vida = 30;
	prota[0].mana = 20;
	prota[0].ataque = 17;
	prota[0].defesa = 5;
	
	strcpy(boss[0].nome, "Boss");
	boss[0].vida = 100;
	boss[0].mana = 10;
	boss[0].ataque = 10;
	boss[0].defesa = 5;
	
	//variáveis
	int vitoria,escolha,escolhaboss,novamente;
	
	
	
do{
	
	printf(" ____   ____   _____ _____   ______ _____ _____ _    _ _______\n"
 "|  _ \\ / __ \\ / ____/ ____| |  ____|_   _/ ____| |  | |__   __|\n"
 "| |_) | |  | | (___| (___   | |__    | || |  __| |__| |  | |\n"
 "|  _ <| |  | |\\___ \\\\___ \\  |  __|   | || | |_ |  __  |  | |\n" 
 "| |_) | |__| |____) |___) | | |     _| || |__| | |  | |  | |\n"  
 "|____/ \\____/|_____/_____/  |_|    |_____\\_____|_|  |_|  |_|\n\n");
 
 	printf("Diga o nome do seu personagem :");
	gets(prota[0].nome);
	fflush(stdin);
	system("cls");
 
 
 
 //batalha
 do{
 	
 	escolha = exibir(prota[0].nome,prota[0].vida,prota[0].mana,boss[0].vida);
 	
 	escolhaboss = rand() %3+1;
 	
 	switch(escolha){
 		case 01:
 			//atacar
 			boss[0].vida -= atacar(prota[0].nome,prota[0].ataque,boss[0].defesa);
 			break;
 		case 02:
 			system("cls");
 			printf("Você fica em guarda\n");
 			Sleep(1000);
 			printf("'enter' para continuar");
 			getch();
 			fflush(stdin);
 			system("cls");
 			break;
 		case 03:
 			if(prota[0].mana>=5){
 				prota[0].vida += curar();
 				prota[0].mana -= 5;
			 }
			else{
				system("cls");
				printf("\nMana Insuficiente\n");
				Sleep(1000);
				printf("'enter' para continuar");
 				getch();
				system("cls");
			}
 			break;
	 }
	 if(boss[0].vida>0){
		 vezdoboss();
		 
		switch(escolhaboss){
			case 01:
			case 02:
	 			//atacar
	 			if(escolha==2){
	 				printf("Boss ataca!!");
	 				Sleep(1000);
	 				printf("\nVocê consegue defeder o ataque do boss\n");
				 }
				 else{
	 				prota[0].vida -= atacar(boss[0].nome,boss[0].ataque,prota[0].defesa);
				 }
	 			break;
	 		case 03:
	 			if(escolha==2){
	 				printf("Boss Usa ataque pesado!!");
	 				Sleep(1000);
	 				printf("\nVocê consegue defeder o ataque do boss\n");
				 }
				 else{
	 				prota[0].vida -= ataquepesado(boss[0].nome,boss[0].ataque,prota[0].defesa);
				 }
	 			break;
		}
	 }
 	
 }while(prota[0].vida>0&&boss[0].vida>0);
	system("cls");

	if(prota[0].vida>0){
		printf("Parabéns!! VocÊ derrotou o boss\n");
	}
	else{
		printf("Boss ri da sua expressão de derrota");
	}
 	Sleep(1000);
 	printf("Deseja jogar novamente?\n");
 	printf("1-Sim\n");
 	printf("2-Não\n");
 	scanf("%d",&novamente);
 	}while(novamente==1);
}
