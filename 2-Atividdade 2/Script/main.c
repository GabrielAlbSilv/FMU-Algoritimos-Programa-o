#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	int esc = 0;
	setlocale(LC_ALL,"");
	system ("cls");
	printf("\nEscolha uma atividade (1-5):");
	scanf("%d",&esc);
	
	//Quest�o 1
	if (esc==1)	{
			int val;
			printf("\n -Atividade 1");
			printf("\nEsse programa identifica o DD");
			printf("\nPor favor, insira o DD:");
			scanf("%d",&val);
			if (val==61){
				printf("\nO DD: %d � de Bras�lia",val);
			}else if (val==71){
				printf("\nO DD: %d � de Salvador",val);
			}else if (val==11){
				printf("\nO DD: %d � de S�o Paulo",val);
			}else if (val==21){
				printf("\nO DD: %d � de Rio de Janeiro",val);
			}else if (val==32){
				printf("\nO DD: %d � de Ju�z de Fora",val);
			}else if (val==19){
				printf("\nO DD: %d � de Campinas",val);
			}else if (val==27){
				printf("\nO DD: %d � de Vit�ria",val);
			}else if (val==31){
				printf("\nO DD: %d � de Belo Horizonte",val);
			}else{
				printf("\nO DD: %d n�o est� cadastrado",val);
			}
		}
			
	//Quest�o 2
	else if (esc==2){
			float val;
			printf("\n -Atividade 2");
			printf("\nEsse programa recebe um n�mero e indica em qual intervalo est� inserido");
			printf("\nPor favor, insira um n�mero:");
			scanf("%f", &val);
			if (val >= 0 && val <=25){
				printf("\nO n�mero: %.2f est� no Intervalo [0,25]",val);
			}else if (val > 25 && val <=50){
				printf("\nO n�mero: %.2f est� no Intervalo [25,50]",val);
			}else if (val > 50 && val <=75){
				printf("\nO n�mero: %.2f est� no Intervalo [50,75]",val);
			}else if (val > 75 && val <=100){
				printf("\nO n�mero: %.2f est� no Intervalo [75,100]",val);
			}else{
				printf("\nO n�mero: %.2f est� fora de qualquer intervalo",val);
			}
		}
	//Quest�o 3
	else if (esc==3){
			int id, qtde;
			printf("\n -Atividade 3");
			printf("\nEsse programa c�lcula o valor de uma compra");
			printf("\n -------- Pre�os -------- ");
			printf("\n 1-Cachorro Quente: R$4,00  \n 2-X-Salada: R$4,50 \n 3-X-Bacon: R$5,00 \n 4-Torrada Simples: R$2,00 \n 5-Refrigerante: R$1,50");
			printf("\n ------------------------ ");
			printf("\nPor favor, insira o c�digo e a quantidade comprada:");
			scanf("%d%d",&id,&qtde);
			if (id == 1){
				printf("\nItem comprado: Cachorro Quente \nQuantidade: %d",id);
				printf("\nTotal a pagar: %.2f", qtde*4.00);
			}else if (id == 2){
				printf("\nItem comprado: X-Salada \nQuantidade: %d",id);
				printf("\nTotal a pagar: %.2f", qtde*4.50);
			}else if (id == 3){
				printf("\nItem comprado: X-Bacon \nQuantidade: %d",id);
				printf("\nTotal a pagar: %.2f", qtde*5.00);
			}else if (id == 4){
				printf("\nItem comprado: Torrada Simples \nQuantidade: %d",id);
				printf("\nTotal a pagar: %.2f", qtde*2.00);
			}else if (id == 5){
				printf("\nItem comprado: Refrigerante \nQuantidade: %d",id);
				printf("\nTotal a pagar: %.2f", qtde*2.00);
			}else{
				printf("\nItem inv�lido");
			}
		}
		//Quest�o 4
	else if (esc==4)	{
		float morang, maca, premorang, premaca, total;
			printf("\n -Atividade 3");
			printf("\nEsse programa c�lcula o valor de uma compra");
			printf("\n -------- Pre�os -------- ");
			printf("\n            At� 5 KG       Acima de 5 Kg  ");
			printf("\n Morango: R$2,50 por kg  | R$2,20 por kg   ");
			printf("\n Ma�a:    R$1,80 por kg  | R$1,50 por kg   ");
			printf("\n ------------------------ ");
			printf("\nPor favor, insira a quantidade (em quilos) comprada de morangos:");
			scanf("%f",&morang);
			printf("\nPor favor, insira a quantidade (em quilos) comprada de ma��s:");
			scanf("%f",&maca);
			if (morang <= 5){
				premorang = morang * 2.50;
			}else{
				premorang = morang * 2.20;
			}
			if (maca <= 5){
				premaca = maca*1.80;
			}else{
				premaca = maca*1.50;
			}
			if((morang+maca)>=8 || (premorang+premaca)>25.00){
				total = (premorang+premaca)*0.1;
				total = (premorang+premaca)-total;
				printf("Valor total: %.2f",total);
			}else{
				printf("\nValor total: %.2f", premorang+premaca);
			}
			
		}
	//Quest�o 5
	else if (esc==5){
		float val1, val2, val3, val4;
		printf("\nEsse programa recebe tr�s valores e os coloca em ordem crescente");
	    printf("\nDigite os tr�s valores (ordem aleat�ria):");
	    scanf("%f%f%f",&val1,&val2,&val3);
	    if (val1 > val2) {
	        val4 = val1;
	        val1 = val2;
	        val2 = val4;
	    }
	    if (val1 > val3) {
	        val4 = val1;
	        val1 = val3;
	        val3 = val4;
	    }
	    if (val2 > val3) {
	        val4 = val2;
	        val2 = val3;
	        val3 = val4;
	    }
	    printf("N�meors em ordem crescente: %.2f, %.2f, %.2f\n", val1, val2, val3);
			}else{
				printf("\nValor inv�lido");
			}
	return 0;
}
