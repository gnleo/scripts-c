#include <stdio.h>
#include <stdlib.h>


void main(){
	FILE *arquivo;
	char Linha[100];
	char *result;
//-----------------------------------------------------------
	//grava dados no arquivo
	arquivo = fopen("teste.txt", "wt");

	if(arquivo == NULL){
		printf("\n\n\nErro ao criar arquivo!\n\n");
		return;
	}

	fprintf(arquivo, "Escrita de teste 1");

	fclose(arquivo);
//-----------------------------------------------------------

	arquivo = fopen("teste.txt", "rt");

  	while (!feof(arquivo)){

		// Lê uma linha (inclusive com o '\n')
      	result = fgets(Linha, 100, arquivo);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      	if (result){  // Se foi possível ler
	  		printf("%s \n\n", result);
      	}
  	}
  	fclose(arquivo);

}
