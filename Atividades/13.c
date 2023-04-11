int main(){
	
	//variáveis
	char pro1[20],pro2[20],pro3[20],pro4[20],pro5[20],pro6[20],pro7[20],pro8[20],pro9[20],pro10[20];
	float val1,val2,val3,val4,val5,val6,val7,val8,val9,val10;
	int qua1,qua2,qua3,qua4,qua5,qua6,qua7,qua8,qua9,qua10,totalq;
	float tot1,tot2,tot3,tot4,tot5,tot6,tot7,tot8,tot9,tot10;
	float total;
	
	//cadastro
	printf("------------Cadastro------------");
	printf("\nNome:");
	scanf("%s",&pro1);
	printf("Valor:");
	scanf("%f",&val1);
	printf("Quantidade:");
	scanf("%d",&qua1);
	
	printf("--------------------------------");
	printf("\nNome:");
	scanf("%s",&pro2);
	printf("Valor:");
	scanf("%f",&val2);
	printf("Quantidade:");
	scanf("%d",&qua2);
	
	printf("--------------------------------");
	printf("\nNome:");
	scanf("%s",&pro3);
	printf("Valor:");
	scanf("%f",&val3);
	printf("Quantidade:");
	scanf("%d",&qua3);
	
	printf("--------------------------------");
	printf("\nNome:");
	scanf("%s",&pro4);
	printf("Valor:");
	scanf("%f",&val4);
	printf("Quantidade:");
	scanf("%d",&qua4);
	
	printf("--------------------------------");
	printf("\nNome:");
	scanf("%s",&pro5);
	printf("Valor:");
	scanf("%f",&val5);
	printf("Quantidade:");
	scanf("%d",&qua5);
	
	printf("--------------------------------");
	printf("\nNome:");
	scanf("%s",&pro6);
	printf("Valor:");
	scanf("%f",&val6);
	printf("Quantidade:");
	scanf("%d",&qua6);
	
	printf("--------------------------------");
	printf("\nNome:");
	scanf("%s",&pro7);
	printf("Valor:");
	scanf("%f",&val7);
	printf("Quantidade:");
	scanf("%d",&qua7);
	
	printf("--------------------------------");
	printf("\nNome:");
	scanf("%s",&pro8);
	printf("Valor:");
	scanf("%f",&val8);
	printf("Quantidade:");
	scanf("%d",&qua8);
	
	printf("--------------------------------");
	printf("\nNome:");
	scanf("%s",&pro9);
	printf("Valor:");
	scanf("%f",&val9);
	printf("Quantidade:");
	scanf("%d",&qua9);
	
	printf("--------------------------------");
	printf("\nNome:");
	scanf("%s",&pro10);
	printf("Valor:");
	scanf("%f",&val10);
	printf("Quantidade:");
	scanf("%d",&qua10);
	printf("--------------------------------");	
	
	
	//soma variáveis
	tot1 = val1*qua1;
	tot2 = val2*qua2;
	tot3 = val3*qua3;
	tot4 = val4*qua4;
	tot5 = val5*qua5;
	tot6 = val6*qua6;
	tot7 = val7*val7;
	tot8 = val8*val8;
	tot9 = val9*val9;
	tot10 = val10*qua10;
	total = tot1+tot2+tot3+tot4+tot5+tot6+tot7+tot8+tot9+tot10;
	totalq = qua1+qua2+qua3+qua4+qua5+qua6+qua7+qua8+qua9+qua10;
	
	
	//Relatório]
	printf("\n            Relatorio");
	printf("\n--------------------------------------");
	printf("\n%s:   R$%.2f   Quant:%d   Valor:R$%.2f",pro1,val1,qua1,tot1);
	
	printf("\n--------------------------------------");
	printf("\n%s:   R$%.2f   Quant:%d   Valor:R$%.2f",pro2,val2,qua2,tot2);
	
	printf("\n--------------------------------------");
	printf("\n%s:   R$%.2f   Quant:%d   Valor:R$%.2f",pro3,val3,qua3,tot3);
	
	printf("\n--------------------------------------");
	printf("\n%s:   R$%.2f   Quant:%d   Valor:R$%.2f",pro4,val4,qua4,tot4);
	
	printf("\n--------------------------------------");
	printf("\n%s:   R$%.2f   Quant:%d   Valor:R$%.2f",pro5,val5,qua5,tot5);
	
	printf("\n--------------------------------------");
	printf("\n%s:   R$%.2f   Quant:%d   Valor:R$%.2f",pro6,val6,qua6,tot6);
	
	printf("\n--------------------------------------");
	printf("\n%s:   R$%.2f   Quant:%d   Valor:R$%.2f",pro7,val7,qua7,tot7);
	
	printf("\n--------------------------------------");
	printf("\n%s:   R$%.2f   Quant:%d   Valor:R$%.2f",pro8,val8,qua8,tot8);
	
	printf("\n--------------------------------------");
	printf("\n%s:   R$%.2f   Quant:%d   Valor:R$%.2f",pro9,val9,qua9,tot9);
	
	printf("\n--------------------------------------");
	printf("\n%s:   R$%.2f   Quant:%d   Valor:R$%.2f",pro10,val10,qua10,tot10);
	
	
	printf("\n--------------------------------------");
	printf("\nTotal:            %d        R$%.2f",totalq,total);
	
	
	
	
	
}
