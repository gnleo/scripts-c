#include <stdio.h>
#include <conio.h>

//define o tamanho de linha, coluna e probabilidades
#define lin 99
#define col 99
#define p 1
#define f 0.5


//retorna 0 ou 1 em funcao da probabilidade informada e o numero aleatorio
int bernoulli(float prob){

	float aleatorio = (float)(rand() % 100) / 100;
	if(aleatorio < prob){
		return 1;
	}
	else{
		return 0;
	} 
}

//popula a matriz com 1. E 2 na posicao 50x50 
populaMatriz(int matrizA[lin][col]){
	int l, c;
	
	for(l = 0; l < lin; l++){
		
		for(c = 0; c < col; c++){
			matrizA [l][c] = 1;
		}
		
	}
	matrizA[50][50] = 2;
}

//transporta os valores da matriz origem para a destino
transportaMatriz(int matrizB[lin][col], int matrizA[lin][col]){
	int l, c;
	for(l = 0; l < lin; l++){
		for(c = 0; c < col; c++){
			matrizA[l][c] = matrizB[l][c];
		}
	}
}

//verifica a vizinhanca da celula conforme as regras estabelecidas
int verificaVizihanca(int matrizA[lin][col], int linha, int coluna){
	int cont = 0;
	
	//canto sup esquerdo
	if(linha == 0 && coluna == 0){
		if(matrizA[linha][coluna+1] == 2) cont++;
		if(matrizA[linha+1][coluna] == 2) cont++;
		if(matrizA[linha+1][coluna+1] == 2) cont++;
	}
	
	//canto sup direito
	if(linha == 0 && coluna == col-1){
		if(matrizA[linha][coluna-1] == 2) cont++;
		if(matrizA[linha+1][coluna] == 2) cont++;
		if(matrizA[linha+1][coluna-1] == 2) cont++;
	}

	//canto inf esquerdo
	if(linha == lin-1 && coluna == 0){
		if(matrizA[linha-1][coluna] == 2) cont++;
		if(matrizA[linha-1][coluna+1] == 2) cont++;
		if(matrizA[linha][coluna+1] == 2) cont++;
	}

	//canto inf direito
	if(linha == lin-1 && coluna == col-1){
		if(matrizA[linha-1][coluna] == 2) cont++;
		if(matrizA[linha-1][coluna-1] == 2) cont++;
		if(matrizA[linha][coluna-1] == 2) cont++;
	}

	//primeira linha(fora os cantos)
	if(linha == 0 && coluna != 0 && coluna != col-1){
		if(matrizA[linha][coluna-1] == 2) cont++;
		if(matrizA[linha][coluna+1] == 2) cont++;
		if(matrizA[linha+1][coluna-1] == 2) cont++;
		if(matrizA[linha+1][coluna] == 2) cont++;
		if(matrizA[linha+1][coluna+1] == 2) cont++;
	}

	//ultima linha(fora os cantos)
	if(linha == lin-1 && coluna != 0 && coluna != col-1){
		if(matrizA[linha][coluna-1] == 2) cont++;
		if(matrizA[linha][coluna+1] == 2) cont++;
		if(matrizA[linha-1][coluna-1] == 2) cont++;
		if(matrizA[linha-1][coluna] == 2) cont++;
		if(matrizA[linha-1][coluna+1] == 2) cont++;
	}

	//primeira coluna(fora os cantos)
	if(coluna == 0 && linha != 0 && linha != lin-1){
		if(matrizA[linha-1][coluna] == 2) cont++;
		if(matrizA[linha-1][coluna+1] == 2) cont++;
		if(matrizA[linha][coluna+1] == 2) cont++;
		if(matrizA[linha+1][coluna] == 2) cont++;
		if(matrizA[linha+1][coluna+1] == 2) cont++;
	}

	//ultima coluna(fora os cantos)
	if(coluna == col-1 && linha != 0 && linha != lin-1){
		if(matrizA[linha-1][coluna] == 2) cont++;
		if(matrizA[linha-1][coluna-1] == 2) cont++;
		if(matrizA[linha][coluna-1] == 2) cont++;
		if(matrizA[linha+1][coluna] == 2) cont++;
		if(matrizA[linha+1][coluna-1] == 2) cont++;
	}

	//para todos os outros casos(celulas do meio)
	if(linha != 0 && linha != lin-1 && coluna != 0 && coluna != col-1){	
		if(matrizA[linha-1][coluna-1] == 2) cont++;	
		if(matrizA[linha-1][coluna] == 2) cont++;	
		if(matrizA[linha-1][coluna+1] == 2) cont++;	
		if(matrizA[linha][coluna-1] == 2) cont++;	
		if(matrizA[linha][coluna+1] == 2) cont++;	
		if(matrizA[linha+1][coluna-1] == 2) cont++;	
		if(matrizA[linha+1][coluna] == 2) cont++;	
		if(matrizA[linha+1][coluna+1] == 2) cont++;	
	}
		
	//printf("%d\n", cont);
	return cont;
}

//imprime os elementos da matriz
imprimeMatriz(int matrizA[lin][col], int tipoimpressao){
	
	//muda a cor do terminal para verde
	system("color 02");
	
	int l, c;
	for(l = 0; l < lin; l++){
		for(c = 0; c < col; c++){
			if(tipoimpressao == 1){
				printf("%d", matrizA[l][c]);	
			}
			else{
				//exibe os valores da matriz em formatos de codigo ascii
				if(matrizA[l][c] == 0) printf("%c", 255);
				if(matrizA[l][c] == 1) printf("%c", 219);
				if(matrizA[l][c] == 2) printf("%c", 176);
			}
		}
		printf("\n");
	}
}




//Inicio
void main(){

	srand (time (NULL));
	int matrizA[lin][col];
	int matrizB[lin][col];
	int tipoimpressao, l, c, a, iteracoes; 
	

	//Oferece a opcao de exibir o grafico em numeros ou simbolos ascii
	while(tipoimpressao != 1 && tipoimpressao != 2){
		printf("DESEJA EXIBIR A SIMULACAO:\nnumeros(informe 1) ou simbolos ASCII(informe 2)?: ");
		scanf("%d", &tipoimpressao);
		if(tipoimpressao != 1 && tipoimpressao != 2){
			printf("Valor invalido. Informe novamente. \n");
		}
	}
	
	//Pergunta o numero de iteracoes
	printf("\nInforme o numero de iteracoes: ");
	scanf("%d", &iteracoes);


	//Executa o algoritmo ate que seja informado para sair (0) 
	while(iteracoes != 0){
	
		//Poula a matriz com valores 1. E 2 na posicao 50x50
		populaMatriz(matrizA);	
	
	
		//Executa as regras para o numero de iteracoes informada
		for(a = 1; a <= iteracoes; a++){
	
			//Varre as linhas da matriz 
			for(l = 0; l < lin; l++){
				
				//Varre as colunas da matriz
				for(c = 0; c < col; c++){
	
					//Se for uma arvore verde
					if(matrizA[l][c] == 1){
					
						//Verifica se tem mais de 1 vizinho queimando
						if(verificaVizihanca(matrizA, l, c) >= 1){
							
							//Se tiver mais de 1 vizinho queimando, queima tambem
							matrizB[l][c] = 2;
						}
						else{
							//Se não tiver vizinhos queimando, queima com probabilidade f
							if(bernoulli(f) == 1){
								//Se bernoulli retorna sucesso, queima
								matrizB[l][c] = 2;
							}
							else{
								//Se bernoulli retorna fracasso, nao faz nada
								matrizB[l][c] = matrizA[l][c];
							}
						}
						
					}
					else{
						//Se for uma arvore queimando
						if(matrizA[l][c] == 2){
							//Fica vazio
							matrizB[l][c] = 0;
						}
						//Se for um espaço vazio
						else{
							//Cresce uma arvore com probabilidade p
							if(bernoulli(p) == 1){
								//Se bernoulli retorna sucesso, cresce uma arvore
								matrizB[l][c] = 1;
							}
							else{
								//Se bernoulli retorna fracasso, nao faz nada
								matrizB[l][c] = matrizA[l][c];
							}
						}			
						
					}
	
				}
	
			}	
	
			//Transporta o resultado das regras (gravado na matriz B) para a matriz A
			transportaMatriz(matrizB, matrizA);
	
		}
		
		//Imprime a matriz A ao completar o numero de iteracoes		
		imprimeMatriz(matrizA, tipoimpressao);
		
		//Oferece a execucao para um novo numero de iteracoes
		printf("\nInforme o numero de iterações: ");
		scanf("%d", &iteracoes);
		
	}
}



