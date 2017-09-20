#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*	Desenvolva uma função que receba uma matriz A[12][12] e um vetor B[12].
O vetor deve retornar, por referência, com a soma de cada uma das linhas de A */

void processo(int matrizA[][12]){
	int i, j, vetorB[12], somaLinha = 0;

	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
			somaLinha = somaLinha + matrizA [i][j];
			vetorB[i] = somaLinha;
		}
		somaLinha = 0;
	
		printf("Linha [%d] = %d \n", i, vetorB[i]);
	}
}


void main(){
	
	int matrizA[12][12], i, j, soma = 0;


	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
			//printf("Informe valores [%d][%d]: ", i,j);
			//scanf(" %d",&matrizA[i][j]);
			matrizA[i][j] = soma;
			soma++;
		}
	}

	printf("\nValores da soma das linhas da matriz:\n\n");
	processo(matrizA);
	printf("\n\n");

}
