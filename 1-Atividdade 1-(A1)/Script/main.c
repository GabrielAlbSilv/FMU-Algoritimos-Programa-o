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
			float val1=0;
			printf("\n -Atividade 1");
			printf("\nEsse programa cálcula o volume de esfera a partir do seu raio");
			printf("\nPor favor, insira o valor do raio:");
			scanf("%f",&val1);
			printf("\nO volume da esfera é: %.2f", (4.0/3.0)*3.14159*pow(val1,3));
			}
			
	//Questão 2
	if (esc==2)	{
			float n1, n2, n3;
			printf("\n -Atividade 2");
			printf("\nEsse programa cálcula a média de um aluno com base em três notas");
			printf("\nPor favor, insira as notas:");
			scanf("%f%f%f", &n1,  &n2, &n3);
			printf("\nMédia: %.2f", n1*0.2 + n2*0.3 + n3*0.5);
			printf("\nCom base nas notas: \n -n1: %.2f \n -n2: %.2f \n -n3: %.2f", n1,n2,n3);
			}
	//Questão 3
	if (esc==3)	{
			float km;
			printf("\n -Atividade 3");
			printf("\nEsse programa cálcula o valor de uma corrida");
			printf("\nPor favor, insira o quilômetro rodado:");
			scanf("%f",&km);
			printf("\nO valor da corrida é: %.2f", 4.90+(km*3.00));
			printf("\nCom base nos valores: \n -Quilômetros rodados: %.2f \n -Taxa da corrida: R$4,90 \n -Valor por quilômetro: R$3,00", km);
			}
		//Questão 4
	if (esc==4)	{
			float val1, val2, val3;
			printf("\n -Atividade 4");
			printf("\nEsse programa recebe dois números reais e um inteiro e realiza cálculos diversos");
			printf("\nPor favor, insira os dois números reais e um número inteiro:");
			scanf("%f%f%f", &val1, &val2,&val3);
			printf("\n -Números inseridos: %.2f; %.2f; %.0f", val1,val2,val3);
			printf("\n Operação 1: o produto do dobro do primeiro com metade do segundo");
			printf("\n -Resultado: %.2f", (val1*2)+(val2/2));
			printf("\n Operação 2: a soma do triplo do primeiro com o terceiro");
			printf("\n -Resultado: %.2f", (val1*3)+val3);
			printf("\n Operação 3: o terceiro elevado ao cubo");
			printf("\n -Resultado: %.2f", pow(val3,3));
			}
	//Questão 5
	if (esc==5)	{
			float x1, y1, x2, y2;
			printf("\n -Atividade 5");
			printf("\nEsse programa cálcula a distância entre dois pontos");
			printf("\nPor favor, insira o valor dos pontos x1 e y1:");
			scanf("%f%f", &x1, &y1);
			printf("\nPor favor, insira o valor dos pontos x2 e y2:");
			scanf("%f%f", &x2, &y2);
			printf("\n Distância entre dois pontos: %.5f",sqrt(pow((y2-y1),2) + pow((x2-x1),2)));
			}
	return 0;
}
