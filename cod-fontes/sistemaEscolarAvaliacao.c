#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

	int contador=0, codigo;
	float nota1, nota2, nota3, maior, notamenor1, notamenor2, mediageral, mediaponderada, somadasmedias;

	printf("Informe o codigo do aluno:\n");
	scanf("%d",&codigo);
	
	while(codigo >= 0){
		printf("Nota 1 avaliacao\n");
		scanf("%f",&nota1);
		printf("Nota 2 avaliacao\n");
		scanf("%f",&nota2);
		printf("Nota 3 avaliacao\n");
		scanf("%f",&nota3);
		maior=0;
		if(nota1 > maior){
			maior = nota1;
		}
		if(nota2 > maior){
			maior = nota2;
			notamenor1 = nota1;
		}
		else{
			notamenor1 = nota2;
		}
		if(nota3 > maior){
			maior = nota3;
			notamenor1 = nota1;
			notamenor2 = nota2;
		}
		else{
			notamenor2 = nota3;
		}
		mediaponderada = ( (maior * 4) + (notamenor1 * 3) + (notamenor2 * 3) ) / 10;
		if(mediaponderada >= 5){
			printf("Codigo do aluno: %d\n",codigo);
			printf("Nota 1 avaliacao: %.2f\n",nota1);
			printf("Nota 2 avaliacao: %.2f\n",nota2);
			printf("Nota 3 avaliacao: %.2f\n",nota3);
			printf("Media ponderada: %.2f\n",mediaponderada);
			printf("APROVADO\n");
		}
		else{
			printf("Codigo do aluno: %d\n",codigo);
			printf("Nota 1 avaliacao: %.2f\n",nota1);
			printf("Nota 2 avaliacao: %.2f\n",nota2);
			printf("Nota 3 avaliacao: %.2f\n",nota3);
			printf("Media ponderada: %.2f\n",mediaponderada);
			printf("REPROVADO\n");
		}
		somadasmedias = somadasmedias + mediaponderada;
		contador = contador + 1;
		printf("Informe o código do aluno:\n");
		scanf("%d",&codigo);
	}
	mediageral = somadasmedias / contador;
	printf("Media geral: %.2f\n",mediageral);

}
