#include <stdio.h>
#include <stdlib.h>

/*	Em uma eleição presidencial existem três candidatos. Os votos são informados
	através de códigos. Os dados utilizados para a contagem dos votos obedecem à
	seguinte codificação:
		1 = Candidato A, 2 = Candidato B, 3 = Candidato C;
		4 = voto nulo;
		5 = voto em branco;
	Elabore um algoritmo que leia o código do candidado em um voto. Calcule e
	escreva:
		a. total de votos para cada candidato;
		b. total de votos nulos;
		c. total de votos em branco;
	Como finalizador do conjunto de votos, tem-se o valor 0. */


void menu(){
	printf("\n\n---------------------------------------------------------------\n");
	printf("                      SISTEMA ELEICAO\n");
	printf("---------------------------------------------------------------\n\n");
	printf("0 - Encerra votacao\n");
	printf("1 - Canditato A\n");
	printf("2 - Canditato B\n");
	printf("3 - Canditato C\n");
	printf("4 - Voto nulo\n");
	printf("5 - Voto em branco\n");
	printf("\n\nInforme seu voto: ");

}

void main(){

	int controleVotacao = -1, votosBranco = 0, votos_A = 0, votos_B = 0, votos_C = 0, votosNulos = 0;

	while(controleVotacao != 0){
		
		system("clear");
		menu();
		scanf(" %d", &controleVotacao);

		switch(controleVotacao){
			
			case 0:{
				break;
			}

			case 1:{
				votos_A++;
				break;
			}

			case 2:{
				votos_B++;
				break;
			}

			case 3:{
				votos_C++;
				break;
			}

			case 4:{
				votosNulos++;
				break;
			}

			case 5:{
				votosBranco++;
				break;
			}

			default:{
				printf(">>>>>>>>>>>>>>>>>>>>>>> OPCAO INVALIDA <<<<<<<<<<<<<<<<<<<<<<<");
			}

		}

	}

	system("clear");
	printf("\n\n---------------------------------------------------------------\n");
	printf("                    SISTEMA ELEICAO - APURACAO\n");
	printf("---------------------------------------------------------------\n\n");
	printf("Total de votos para CANDIDATO A: %d\n", votos_A);
	printf("Total de votos para CANDIDATO B: %d\n", votos_B);
	printf("Total de votos para CANDIDATO C: %d\n", votos_C);
	printf("Total de votos NULOS: %d\n", votosNulos);
	printf("Total de votos em BRANCO: %d\n\n\n\n", votosBranco);

}