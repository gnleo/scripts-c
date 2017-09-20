#include <stdio.h>

/* 	Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
	mecanismo para decidir o número de notas de cada valor que deve ser
	disponibilizado para o cliente que realizou o saque. Um possível critério seria o da
	"distribuição ótima" no sentido de que as notas de menor valor fossem
	distribuídas em número mínimo possível. Por exemplo, se a quantia solicitada
	fosse R$ 87,00, o programa deveria indicar uma nota de R$ 50,00, três notas de
	R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00. Escreva um programa
	que receba o valor da quantia solicitada e retorne a distribuição das notas de
	acordo com o critério da distribuição ótima.*/

//Início
void main(){

	int quantia, nota_100 = 0, nota_50 = 0, nota_20 = 0, nota_10 = 0, nota_5 = 0, nota_2 = 0, calculo;
	printf("Informe a quantia desejada para saque: ");
	scanf(" %d", &quantia);
	if(quantia > 100){
		while(quantia > 100){
			calculo = quantia - 100;
			quantia = calculo;
			nota_100 += 1;
		}
	}
	if(quantia >= 50){
		while(quantia >= 50){
			calculo = quantia - 50;
			quantia = calculo;
			nota_50 += 1;
		}
	}
	if(quantia >= 20){
		while(quantia >= 20){
			calculo = quantia - 20;
			quantia = calculo;
			nota_20 += 1;
		}
	}
	if(quantia >= 10){
		while(quantia >= 10){
			calculo = quantia - 10;
			quantia = calculo;
			nota_10 += 1;
		}
	}
	if(quantia >= 5){
		while(quantia >= 5){
			calculo = quantia - 5;
			quantia = calculo;
			nota_5 += 1;
		}	
	}
	if(quantia >= 2){
		while(quantia >= 2){
			calculo = quantia - 2;
			quantia = calculo;
			nota_2 += 1;
		}
	}
	printf("\t\t RECOMENDAMOS QUE O SAQUE PARA A QUANTIA INFORMADA SEJA DE:\n\n");
	printf("\t %d, nota(s) de 100\n", nota_100);
	printf("\t %d, nota(s) de 50\n", nota_50);
	printf("\t %d, nota(s) de 20\n", nota_20);
	printf("\t %d, nota(s) de 10\n", nota_10);
	printf("\t %d, nota(s) de 5\n", nota_5);
	printf("\t %d, nota(s) de 2\n", nota_2);

}
