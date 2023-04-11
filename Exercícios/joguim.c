#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//ataque
int ataque(int ataque,int defesa, int vida){
	int dano;
	dano = ataque - defesa/2;
	printf("Inimigo rescebeu %d de dano\n",dano);
	return dano;
}
int habilidade(int ataque,int defesa, int vida){
	int dano;
	dano = ataque - defesa*0.2;
	printf("Inimigo rescebeu %d de dano\n",dano);
	return dano;
}

// struct personages
struct PERSONAGEM
	{
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
	
	int i,opcao,dano,edano,enter,enemy;
	
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de personagens e inimigos
	struct PERSONAGEM personagem[1];
	struct PERSONAGEM inimigo[20];
	
	//Declaração inimigo
	strcpy(inimigo[0].nome, "seu ze");
		inimigo[0].vida = 100;
		inimigo[0].mana = 5;
		inimigo[0].ataque = 5;
		inimigo[0].defesa = 5;
		inimigo[0].nivel = 1;
		inimigo[0].velocidade = 5;
	
	//Criação personagem
	for(i=0;i<1;i++){
		personagem[i].vida = 25;
		personagem[i].mana = 10;
		personagem[i].ataque = 15;
		personagem[i].defesa = 5;
		personagem[i].velocidade = 10;
		personagem[i].xp = 0;
		personagem[i].nivel = 1;
	}
	
	
	
	printf("Diga o nome do seu personagem :");
	gets(personagem[0].nome);
	fflush(stdin);
	system("cls");
	//teste batalha
	
	while(personagem[0].vida>0 && inimigo[0].vida>0){
		printf("****\n");
		printf("%s vida : %d\n\n",inimigo[0].nome,inimigo[0].vida);
		printf("****\n");
		printf("%s \nvida:  %d\nMana: %d\n\n",personagem[0].nome,personagem[0].vida,personagem[0].mana);
		printf("****\n");
		
		printf("01 - Atacar\n");
		printf("02 - Defender\n");
		printf("03 - Habilidades\n");
		scanf("%d",&opcao);
		fflush(stdin);
		system("cls");
		
		enemy = rand () %3 +1;
		
		switch(opcao){
			case 01:
				//dano ao inimigo
				inimigo[0].vida -= ataque(personagem[0].ataque,inimigo[0].defesa,inimigo[0].vida);
				 
				break;
			case 02:
				if(enemy==2){
					edano=0;
				}
				break;
			case 03:
				//dano ao inimigo
				inimigo[0].vida -= habilidade(personagem[0].ataque,inimigo[0].defesa,inimigo[0].vida);
					break;
				
			
			default:
				printf("??\n");
				break;
		}
		switch(enemy){
			case 01:
				
				if(opcao==1||opcao==3){
				edano = inimigo[0].ataque - personagem[0].defesa*0.5;
				printf("Você tomou %d de dano\n",edano);
				personagem[0].vida -= edano;
				}
				
				break;
			case 02:
				printf("Inimigo Defendeu!!\n");
			case 03:
				if(opcao==1||opcao==3){
					if(inimigo[0].mana>0){	
						inimigo[0].mana - 5;
						edano = (inimigo[0].ataque*1.5) - personagem[0].defesa*0.5;
						printf("Você tomou %d de dano\n",edano);
						personagem[0].vida -= edano;
					}
			}
				break;
		}
		printf("Pressione 'Enter' para continuar\n");
		getch(enter);
		fflush(stdin);
		system("cls");
	}
}
