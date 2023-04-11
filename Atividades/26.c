#include <stdio.h>

int main() {

//variáveis
	int i,esc;
	int quantram = 0, quantgpu= 0 , quantarm = 0, a, comprestante = 0;
	char escolhac;
    float proc=0,gpu1 =0,gpu2=0,gpu3=0,ram1=0,ram2=0,ram3=0,ram4=0,arm1=0,arm2=0,arm3=0,arm4=0,fonte=0,mae=0,gab=0,valortotal=0;
	
 	printf("************Eletronica TeyKev************\n");

	printf("Escolha quantos componentes : ");
	scanf("%d", &comprestante);
    fflush(stdin);
	
	//Escolha componente	
	for(i=0;i<=comprestante;i++){
		printf("\nP - Processador\n");
		printf("V - GPU\n");
		printf("R - Memoria RAM\n");
		printf("A - Armazenamento\n");
		printf("F - Fonte de alimentacao\n");
		printf("M - Placa mae\n");
		printf("G - Gabinete\n");
		printf("S - Sair\n");
		
		printf("\nComponentes restantes: %d\n\n",comprestante-i);
        printf("\nEscolha qual componente deseja : ");
        scanf("%c",&escolhac);
		fflush(stdin);
        
		switch(escolhac){
			
			case 'P':
			case 'p':
	  			printf("01 | AMD RYZE 5 5600g \t\t|R$2000.00\n");
	  			printf("02 | AMD RYZEN 7 5700g\t\t|R$2300.00\n");
	  			printf("03 | Intel Core i7 10700F \t|R$2235.00\n");
	 			printf("04 | Intel core i5 9400f \t|R$1410.00\n");
	 			printf("05 | Intel core i9 10900k \t|R$3800.00\n");
				printf("Escolha seu processador : \n");
                scanf("%d",&esc);
                switch(esc){
                    case 01:
                        proc = 2000;
                        break;
                    case 02:
                        proc = 2300;
                        break;
                    case 03:
                        proc = 2350;
                        break;
                    case 04:
                        proc = 1410;
                        break;
                    case 05:
                        proc = 3800;
                        break;
					default:
						printf("Opcao invalida");
						proc = 0;
                }
                fflush(stdin);
            //Restante -1
            //comprestante-=1;
			break; //Fim processador
			
			case 'V':
			case 'v':
				printf("Escolha quantas GPUs (0 a 3) : ");
				scanf("%d", &quantgpu);
				fflush(stdin);
				
				printf("01 | Gtx 1660 super \t|R$3500.00\n");
 	 			printf("02 | Gtx 1050 ti \t|R$1000.00\n");
 	 			printf("03 | Rtx 3060 \t\t|R$4700.00\n");
				printf("04 | Rtx 3080 \t\t|R$8500.00\n");
 	 			printf("05 | RX 6600 \t\t|R$3100.00\n");
                
                
                for (i=1;i<=quantgpu;i++){
					printf("Escoha sua GPU : \n");
                    scanf("%d",&esc);
                    fflush(stdin);
						
                    switch(esc){
                        case 01:
                            a = 3500;
                        break;
                        case 02:
                            a = 1000;
                            break;
                        case 03:
                            a = 4700;
                            break;
                        case 04:
                             a = 8500;
                        	break;
                        case 05:
                            a = 3100;
                             break;
				    	default:
							printf("Opcao invalida");
							a = 0;
                            break;
						}
						
						switch(i){
							case 1:
								gpu1 = a;
								break;
							case 2:
								gpu2 = a;
								break;
							case 3:
								gpu3 = a;
								break;
							default:
								break;
						}
					//comprestante-=1;
					printf("\nComponentes restantes: %d\n\n",comprestante-i);
					}//Switch gpui
				 
			
			fflush(stdin);
  	 	 	break; //Fim gpu
			
			case 'f':
			case 'F':
				printf("01 | Fonte Atx 650W \t\t\t|R$543.00\n");
  				printf("02 | FONTE 430W TT SMART \t\t|R$370.00\n");
  				printf("03 | Fonte 600w C3Tech ATX Gamer \t|R$400.00\n");
				printf("04 | Fonte 600W Thermaltake \t\t|R$450.00\n");
  				printf("05 | Fonte 650W Cooler Master Elite \t|R$550.00\n");
                printf("Escoha sua fonte de alimentacao : ");
				scanf("%d", &esc);
				fflush(stdin);

				switch(esc){
					case 01:
                        fonte = 543;
						break;
					case 02:
                        fonte = 370;
						break;
					case 03:
                        fonte = 400;
						break;
					case 04:
                        fonte = 450;
						break;
					case 05:
                        fonte = 550;
						break;
					default:
						printf("Opcao invalida");
						fonte = 0;
				} //Switcha fonte
			//comprestante-=1;
			fflush(stdin);
  		  	break; //fim fonte
			
			case 'G':
			case 'g':
				printf("01 | Aerocool Mini Tower RGB \t\t|R$380.00\n");
 	 			printf("02 | Fortrek Cruiser \t\t\t|R$400.00\n");
 	 			printf("03 | Corsair Carbide Series 275R Airflow|R$330.00\n");
				printf("04 | Corsair Carbide Series Spec Delta \t|R$470.00\n");
 	 			printf("05 | Cooler Master Cosmos C700M \t|R$800.00\n");
                printf("Escoha seu gabinete : \n");
                scanf("%d", &esc);
				fflush(stdin);

				switch(esc){
					case 01:
                        gab = 380;
						break;
					case 02:
                        gab = 400;
						break;
					case 03:
                        gab = 330;
						break;
					case 04:
                        gab = 470;
						break;
					case 05:
                        gab = 880;
						break;
					default:
						printf("Opcao invalida");
						gab = 0;
                        break;
				} //Switch cooler
				//comprestante-=1;
				fflush(stdin);
   		 		break;
			
            case 'a':
            case 'A':
				printf("01 | SSD Samsung 970 EVO 500GB \t|R$380.00\n");
 	 			printf("02 | SSD San Disk Plus 480GB \t|R$400.00\n");
 	 			printf("03 | SSD Kingston 480GB \t|R$400.00\n");
				printf("04 | SSD Kingston 240GB \t|R$300.00\n");
 	 			printf("05 | HDD Seagate BarraCuda 1TB \t|R$260.00\n");
                

                printf("escolha a quantidade : ");
                scanf("%d",&quantarm);
                fflush(stdin);
				
				for (i=1;i<=quantarm;i++){
					
						printf("Escoha seu Armazenamento : \n");
                        scanf("%d",&esc);
                        fflush(stdin);
						
                        switch(esc){
                            case 01:
                                a = 380;
                                break;
                            case 02:
                                a = 400;
                                break;
                            case 03:
                                a = 400;
                                break;
                            case 04:
                                a = 300;
                                break;
                            case 05:
                                a = 260;
                                break;
							default:
								printf("Opcao invalida");
								a = 0;
						}
						switch(i){
							case 1:
								arm1 = a;
								break;
							case 2:
								arm2 = a;
								break;
							case 3:
								arm3 = a;
								break;
							default:
								break;
						}
				}//Switch armazenamento
				//comprestante-=1;
				fflush(stdin);
				break; //fim armazenamento
			
            case 'r':
            case 'R':
				printf("01 | Vengeance RGB Pro de 32GB \t\t|R$1100.00\n");
 	 			printf("02 | HyperX Fury RGB de16GB \t\t|R$800.00\n");
 	 			printf("03 | LPX 8GB \t\t\t\t|R$440.00\n");
				printf("04 | Memória G.SKill Trident Z 16GB \t|R$880.00\n");
 	 			printf("05 | Corsair Vengeance LPX 4GB \t\t|R$200.00\n");
                printf("Escolha a quantidade : ");
                scanf("%d",&quantram);
				fflush(stdin);

				for (i=1;i<=quantram;i++){
                    
                    printf("Escoha sua Memoria Ram : \n");
                    scanf("%d", &esc);
                    fflush(stdin);
                    
					switch(esc){
						case 01:
              		        a = 1100;
							break;
						case 02:
                	        a = 800;
							break;
						case 03:
                	        a = 440;
							break;
						case 04:
               		        a = 880;
							break;
						case 05:
                	        a = 200;
							break;
					
					}//for Esc7
					//comprestante-=1;
					printf("\nComponentes restantes: %d\n\n",comprestante-i);
					switch(i){ 
						case 1:
							ram1 = a;
							break;
						case 2:
							ram2 = a;
							break;
						case 3:
							ram3 = a;
							break;
						case 4:
							ram4 = a;
							break;
						default:
							break;
					} //Quantram
				}//Switch ram
				
				fflush(stdin);
                break; //fim memoria ram
			
            case 'M':
            case 'm':
				printf("01 | Asus ROG Maximus XII HERO Wi-Fi \t|R$2800.00\n");
 	 			printf("02 | GIGABYTE Z490 Gaming X \t\t|R$1000.00\n");
 	 			printf("03 | GIGABYTE Gaming Z390M \t\t|R$780.00\n");
				printf("04 | Asus ROG Strix Z490-E Gaming \t|R$829.00\n");
 	 			printf("05 | Asus ROG Strix B550-E Gaming \t|R$1000.00\n");
                printf("Escoha sua placa mãe : \n");
                scanf("%d", &esc);
				fflush(stdin);

				switch(esc){
					case 01:
                        mae = 2800;
						break;
					case 02:
                        mae = 1000;
						break;
					case 03:
                        mae = 780;
						break;
					case 04:
                        mae = 829;
						break;
					case 05:
                        mae = 1000;
						break;
				}
				//comprestante-=1;
				fflush(stdin);
				break; //fim placa mae
			case 'S':
			case 's':
				default:
					return 0;
					break;	
		} //Fim do switch
	} //Escolha dos pcs/Fim do for
	
    printf("Compra conlcuida\n");
    valortotal = proc+gpu1+gpu2+gpu3+ram1+ram2+ram3+ram4+arm1+arm2+arm3+arm4+fonte+mae+gab;
    printf("O valor Total de sua compra e de : R$%.2f",valortotal);   
}

