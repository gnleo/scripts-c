// Escreva uma função que recebe as 3 notas de um aluno por parâmetro e uma
// letra. Se a letra for “a”, a função calcula a média aritmética das notas do aluno, se
// for “p”, a sua média ponderada (pesos: 5, 3 e 2). A função deve retornar a média
// calculada.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(float nota1,float nota2,float nota3, char tipo) {
	if(tipo == 'a') {
		return (nota1 + nota2 + nota3) / 3;
	} else {
		return (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
	}
}

void main(){

	float nota1, nota2, nota3, mediafinal;
	char c;
	printf("Informe a nota1: ");
	scanf(" %f",&nota1);
	printf("Informe a nota2: ");
	scanf(" %f",&nota2);
	printf("Informe a nota3: ");
	scanf(" %f",&nota3);
	printf("Informe o tipo de media (a - p): ");	
	scanf(" %c",&c);
	mediafinal=media(nota1,nota2,nota3,c);
	printf("\nMedia final:%.1f\n",mediafinal);
}

