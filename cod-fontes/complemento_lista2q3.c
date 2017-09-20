#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  Faça uma função que recebe uma matriz A[5][5] e retorna a soma dos seus elementos (todos elementos da matriz)  */

int processo(int matrizA[5][5]){
	int i, j, soma =0;
	for(i = 0 ; i < 5; i++){
		for(j = 0; j < 5; j++){
			soma = soma + matrizA[i][j];
		}
	}
	
	return soma;
}

//Início
void main(){
	
	int matrizA[5][5], i,j;
	printf("\nInforme a matriz[5][5] desejada!\n\n");
	for(i = 0 ; i < 5; i++){
		for(j = 0; j < 5; j++){
	 		printf("Informe valores [%d][%d]: ", i,j);
	 		scanf(" %d",&matrizA[i][j]);
	 	}
	}
	printf("\nA soma dos elementos da matriz e: %d\n",processo(matrizA));
	
}
