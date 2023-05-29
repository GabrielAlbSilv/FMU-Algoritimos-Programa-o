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
	
	//Questão 1
	if (esc==1)	{
			int val;
			printf("\n -Atividade 1");
			printf("\nEsse programa identifica o DD");
			printf("\nPor favor, insira o DD:");
			scanf("%d",&val);
			if (val==61){
				printf("\nO DD: %d é de Brasília",val);
			}else if (val==71){
				printf("\nO DD: %d é de Salvador",val);
			}else if (val==11){
				printf("\nO DD: %d é de São Paulo",val);
			}else if (val==21){
				printf("\nO DD: %d é de Rio de Janeiro",val);
			}else if (val==32){
				printf("\nO DD: %d é de Juíz de Fora",val);
			}else if (val==19){
				printf("\nO DD: %d é de Campinas",val);
			}else if (val==27){
				printf("\nO DD: %d é de Vitória",val);
			}else if (val==31){
				printf("\nO DD: %d é de Belo Horizonte",val);
			}else{
				printf("\nO DD: %d não está cadastrado",val);
			}
		}
			
	//Questão 2
	else if (esc==2){
			float val;
			printf("\n -Atividade 2");
			printf("\nEsse programa recebe um número e indica em qual intervalo está inserido");
			printf("\nPor favor, insira um número:");
			scanf("%f", &val);
			if (val >= 0 && val <=25){
				printf("\nO número: %.2f está no Intervalo [0,25]",val);
			}else if (val > 25 && val <=50){
				printf("\nO número: %.2f está no Intervalo [25,50]",val);
			}else if (val > 50 && val <=75){
				printf("\nO número: %.2f está no Intervalo [50,75]",val);
			}else if (val > 75 && val <=100){
				printf("\nO número: %.2f está no Intervalo [75,100]",val);
			}else{
				printf("\nO número: %.2f está fora de qualquer intervalo",val);
			}
		}
	//Questão 3
	else if (esc==3){
			int id, qtde;
			printf("\n -Atividade 3");
			printf("\nEsse programa cálcula o valor de uma compra");
			printf("\n -------- Preços -------- ");
			printf("\n 1-Cachorro Quente: R$4,00  \n 2-X-Salada: R$4,50 \n 3-X-Bacon: R$5,00 \n 4-Torrada Simples: R$2,00 \n 5-Refrigerante: R$1,50");
			printf("\n ------------------------ ");
			printf("\nPor favor, insira o código e a quantidade comprada:");
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
				printf("\nItem inválido");
			}
		}
		//Questão 4
	else if (esc==4)	{
		float morang, maca, premorang, premaca, total;
			printf("\n -Atividade 3");
			printf("\nEsse programa cálcula o valor de uma compra");
			printf("\n -------- Preços -------- ");
			printf("\n            Até 5 KG       Acima de 5 Kg  ");
			printf("\n Morango: R$2,50 por kg  | R$2,20 por kg   ");
			printf("\n Maça:    R$1,80 por kg  | R$1,50 por kg   ");
			printf("\n ------------------------ ");
			printf("\nPor favor, insira a quantidade (em quilos) comprada de morangos:");
			scanf("%f",&morang);
			printf("\nPor favor, insira a quantidade (em quilos) comprada de maçãs:");
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
	//Questão 5
	else if (esc==5){
		float val1, val2, val3, val4;
		printf("\nEsse programa recebe três valores e os coloca em ordem crescente");
	    printf("\nDigite os três valores (ordem aleatória):");
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
	    printf("Númeors em ordem crescente: %.2f, %.2f, %.2f\n", val1, val2, val3);
			}else{
				printf("\nValor inválido");
			}
	return 0;
}
