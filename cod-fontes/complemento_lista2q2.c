#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef int boolean;
#define true 1
#define false 0

/*	Faça uma função que receba X e verifica se a maioria dos elementos é par.
	A função deve retornar um valor boleano verdadeiro caso sim, e falso caso a maioria dos elementos sejam impares;
	Faça outra função que receba o vetor X, por referência, e retorna, também por referência, o vetor com seus elementos (valores) invertidos  */

processo(int vetorA[6]){
	int contpar = 0, contimpar = 0, i;
    for(i = 0; i < 6; i++){ //varre os elementos do vetor A
		if(vetorA[i] % 2 == 0){ //verifica se o número é par ou ímpar
			contpar+=1;
        }
        else{
        	contimpar+=1;
    	}
    }
    
	// IMPLEMENTAR TRATAMENTO CASO A QUANTIDADE DE NUMEROS PARES E IMPARES FOREM IGUAIS
	
	if(contpar > 3){ //retorna o valor booleano
		return true;
    }
    else{
       	return false;
    }
}


//Início
void main(){

	int vetorA[6], i; //inicialização do vetor A
	for(i = 0; i < 6; i++){
       printf("Informe valores numericos a serem comparados %d: ", i);
       scanf(" %d",&vetorA[i]);
	}
	if(processo(vetorA)){
		printf("\nA maioria dos numeros sao pares\n");
	}
	else{
		printf("\nA maioria dos numeros sao impares\n");
	}
	//IMPLEMENTAR FUNÇÃO PARA INVERTER OS VALORES DO VETOR A

}
