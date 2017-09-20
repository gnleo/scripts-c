#include <stdio.h>

int main() {
	int areia[99][99];				//MATRIZ CRIADA

	int a, b;						
	for(a = 0; a < 99; a++)			// 
	{								// ANULANDO
		for(b = 0; b < 99; b++)		// TODA A
		{							// MATRIZ
				areia[a][b] = 0;	//
		}							//
	}								

	areia[1][49] = 1;				//
	areia[1][50] = 1;				// INICIANDO OS VALORES
	areia[1][51] = 1;				// (GRAOS DE AREIA INICIAIS)
	
	int l, c;							//
	for(l=0; l<99; l++)					//
    {									// IMPRIMINDO A MATRIZ
        for(c = 0; c<99; c++)			// INICIAL NULA COM OS
        {								// SOMENTE COM OS PRIMEIROS
            printf("%d", areia[l][c]);	// GRAOS DE AREIA
		}								//
		printf("\n");					//
    }									//
	
	int acao;
	printf("\n\n---------------------------------------------------------------\n");	//
	printf("Interacoes preferenciais descritas no problema:\n\n");						// USUARIO INSERE
	printf("1000, 1500, 2000, 2500 \n\n");												// O NUMERO DE 
	printf("Insira o numero de interacoes que deseja:\n");								// INTERACOES,
	scanf("%d", &acao);																	// REPETICOES
	printf("Realizando %d interacoes\n", acao);											//

	int lim;													//
	lim = 0;													//
	while( lim < acao)											// EXECUTANDO  NUMERO DE INTERACOES
	{
		int e, f;
		for(e = 0; e < 98; e++)												// for PARA OBEDECER AS REGRAS
		{																	// EM TODA MATRIZ
			for(f = 0; f < 98; f++)											//
			{
				if(areia[e][f]==1 && areia[e][f+1]==0 && areia[e+1][f]==0 && areia[e+1][f+1]==0)	// regra 1
				{
					areia[e][f] = 0;
					areia[e+1][f] = 1;
				}
				if(areia[e][f+1]==1 && areia[e][f]==0 && areia[e+1][f]==0 && areia[e+1][f+1]==0)	// regra 2
				{
					areia[e][f+1] = 0;
					areia[e+1][f+1] = 1;
				}
				if(areia[e][f]==1 && areia[e+1][f]==1 && areia[e][f+1]==0 && areia[e+1][f+1]==0)	// regra 3
				{
					areia[e][f] = 0;
					areia[e+1][f+1] = 1;
				}
				if(areia[e][f]==1 && areia[e+1][f+1]==1 && areia[e][f+1]==0 && areia[e+1][f]==0)	// regra 4
				{
					areia[e][f] = 0;
					areia[e+1][f] = 1;
				}
				if(areia[e][f]==1 && areia[e][f+1]==1 && areia[e+1][f]==0 && areia[e+1][f+1]==0)	// regra 5
				{
					areia[e][f] = 0;
					areia[e][f+1] = 0;
					areia[e+1][f] = 1;
					areia[e+1][f+1] = 1;
				}
				if(areia[e][f+1]==1 && areia[e+1][f]==1 && areia[e][f]==0 && areia[e+1][f+1]==0)	// regra 6
				{
					areia[e][f+1] = 0;
					areia[e+1][f+1] = 1;
				}
				if(areia[e][f+1]==1 && areia[e+1][f+1]==1 && areia[e][f]==0 && areia[e+1][f]==0)	// regra 7
				{
					areia[e][f+1] = 0;
					areia[e+1][f] = 1;
				}
				if(areia[e][f]==1 && areia[e][f+1]==1 && areia[e+1][f]==1 && areia[e+1][f+1]==0)	// regra 8
				{
					areia[e][f+1] = 0;
					areia[e+1][f+1] = 1;
				}
				if(areia[e][f]==1 && areia[e][f+1]==1 && areia[e+1][f+1]==1 && areia[e+1][f]==0)	// regra 9
				{
					areia[e][f] = 0;
					areia[e+1][f] = 1;
				}
			}
		}
		
		areia[1][49] = 1;			//
		areia[1][50] = 1;			// INICIANDO OS VALORES
		areia[1][51] = 1;			// (GRÃOS DE AREIA INICIAIS)

		lim = lim + 1;		// INCREMENTO while

		if(lim == acao)				//
		{							// if PARA EVITAR
			areia[1][49] = 0;		// A CRIACAO DE MAIS 
			areia[1][51] = 0;		//	DOIS GRAOS NO INICIO
		}							// DO MONTE NA ULTIMA 
									// INCREMENTACAO
	}
										
	for(l=0; l<99; l++)					//
    {									// IMPRIMINDO A MATRIZ
        for(c = 0; c<99; c++)			// FINAL COM TODAS
        {								// AS REGRAS
            printf("%d", areia[l][c]);	// OBEDECIDAS
		}								//
		printf("\n");					//
	}									//

}	 

