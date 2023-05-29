#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

 int main() {
	system("cls");
	setlocale(LC_ALL,"");
	/*
	//Ex 1
	int val1, anos, meses, dias;
	printf("\nPor favor, insira a sua idade (em dias): ");
	scanf("%d",&val1);
	anos = val1/365;
	val1 %= 365;
	meses = val1/30;
	dias = val1 % 30;
	printf("\n %d ano(s), %d mese(s), %d dia(s)", anos, meses, dias);
	
	//Ex2
	float a,b,c, delta, x1,x2;
	printf("\nPor favor, insira os valores de A, B e C: ");
	scanf("%f%f%f",&a,&b,&c);
	if (a != 0){
		delta = ((b*b) - (4*(a*c)));
		if (delta < 0){
			x1 = 0;
			x2 = 0;
			printf("\nO valor de delta é menor que zero, portanto: \nDelta: %.2f \nX1: %.2f \nX2: %.2f", delta, x1,x2);
		}else if (delta == 0){
			 x1= x2 = ((-b) + sqrt(delta)) / (2*a);
			 printf("\nDelta é igual a zero, portanto x1=x2 = %.2f",x1);
		}else{
				x1 = ((-b) + sqrt(delta)) / (2*a);
 				x2 = ((-b) - sqrt(delta)) / (2*a);
 				printf("\nDelta: %.2f", delta);
 				printf("\n \nRaízes: \n-X1: %.2f  \n-X2: %.2f", x1,x2);
		}
	}else{
		printf("\nOperação inválida, A precisa ser diferente de zero");
	}
	
	//Ex 3
	float sal, sal1;
	printf("\nPor favor, insira o seu salário: ");
	scanf("%f",&sal);
	if (sal < 0){
		printf("\nSalário inválido");
	}else if (sal > 0 && sal <= 400){
		sal1 = sal * 0.15;
		sal1 = sal1+sal;
		printf("\n-Salário novo: %.2f \n-Reajuste ganho: %.2f \n-Percentual: 15%%", sal1, sal1-sal);
	}else if(sal > 400 & sal <= 800){
		sal1 = sal * 0.12;
		sal1 = sal1+sal;
		printf("\n-Salário novo: %.2f \n-Reajuste ganho: %.2f \n-Percentual: 12%%", sal1, sal1-sal);
	}else if(sal > 800 & sal <= 1200){
		sal1 = sal * 0.10;
		sal1 = sal1+sal;
		printf("\n-Salário novo: %.2f \n-Reajuste ganho: %.2f \n-Percentual: 10%%", sal1, sal1-sal);
	}else if(sal > 1200 & sal <= 2000){
		sal1 = sal * 0.07;
		sal1 = sal1+sal;
		printf("\n-Salário novo: %.2f \n-Reajuste ganho: %.2f \n-Percentual: 7%%", sal1, sal1-sal);
	}else{
		sal1 = sal * 0.04;
		sal1 = sal1+sal;
		printf("\n-Salário novo: %.2f \n-Reajuste ganho: %.2f \n-Percentual: 4%%", sal1, sal1-sal);
	}
	//Ex 4 
	int val1, i=0;
	printf("\nPor favor, insira um valor (2 < Valor < 100,): ");
	scanf("%d",&val1);
	if (val1 > 2 && val1 <1000){
	
		for (i=1; i<=10; i++){
			printf("\n %d x %d = %d", i, val1, val1*i);
		}
	}else{
		printf("\n O valor %d está fora do intervalo estabelecido",val1);
	}
	*/
	
	//Ex5 
	int i=0, cont = 0;
	float val1[10], aux=0;
	printf("\nPor favor, insira seis valores: ");
	for(i=0; i<=5;i++){
		scanf("%f",&val1[i]);
		if (val1[i] > 0){
			cont++;
			aux += val1[i];
		}
	}
	if (cont > 0){
		printf("\nTotal de números: %d",cont);
		printf("\nMédia: %.1f",aux/cont);
	}
	return 0;
}



