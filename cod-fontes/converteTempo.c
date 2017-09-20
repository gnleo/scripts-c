#include <stdio.h>

/* Escreva um programa que converta um intervalo de tempo dado em minutos, em
horas, minutos e segundos. Por exemplo, se o tempo dado for 145,87 min, o
programa deve fornecer 2h 25min 52,2s.*/

//Início
void main(){

	int hora, min_c ;
	float  tempo, hora_f, min, min_f, seg, seg_f;
	printf("Informe o tempo a ser convertido: ");
	scanf(" %f", &tempo);
	hora_f = tempo / 60;
	hora = (int)hora_f; // pega apenas a parte inteira do numero flutuante
	min_f = hora_f - hora;
	min = min_f * 60;
	min_c = (int)min; // pega apenas a parte inteira do numero flutuante
	seg_f = min - min_c;
	seg = seg_f * 60;
	printf(" %d horas, %d minutos e %.1f segundos\n\n", hora, min_c, seg);
		
}
