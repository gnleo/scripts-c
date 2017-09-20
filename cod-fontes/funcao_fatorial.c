#include <stdio.h>
#include <stdlib.h>
#include <math.h>

processo(int numero){
	int fatorial = 1;
	while(numero >= 1) {
		fatorial=fatorial*numero;
	    numero=numero-1;
	}
	return fatorial;
}

void main() {

	int numero, resultado;
	printf("Insira um numero: ");
	scanf(" %d",&numero);
	resultado=processo(numero);
	printf("\nO fatorial deste numero e: %d\n",resultado);

}
