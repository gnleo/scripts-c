
/* Uma sorveteria vende 3 produtos diferentes, cada um com preço e um estoque (reposto diaremente), de acordo com a tabela abaixo:

  Código |     Produto   | Preco R$ |      Estoque diario
    10   | refrigerante  |   2,50   | 300 latas
    15   | casq. simples |   1,50   | 700 bolas (*)
    20   | casq. dupla   |   2,50   | (*) divide o estoque com o item anterior

Finalize o desenvolvimento do programa anexo "trabalhoImplementacao.c" que processa as vendas do dia, conforme as instrucoes a seguir:
1. no programa principal crie um "menu" solicitando se o operador do sistema deseja efetuar uma nova venda ou encerrar o movimento do
  dia; (IMPLEMENTADO)
  
2. para cada nova venda:
  a. o progama deve chamar uma funcao que apresenta, na tela, um menu indicando os precos dos produtos, este menu deve ser apresentado
  no inicio de cada venda; (IMPLEMENTADO)
   
  b. em seguida (no programa principal), o operador deve informar o codigo do produto e a quantidade comprada. (IMPLEMENTADO)
  OBS: NAO EXISTEM CASADAS (CASO O CLIENTE QUEIRA UM REFRIGERANTE E UMA CASQUINHA, PARA O SISTEMA SERAO REGISTRADAS DUAS VENDAS);

  C. utilizando um funcao especifica, armazenar as informacoes de cada venda na matriz vendas:
    
    |venda produto   | 15| 10 | 15 | 20 | 20 | ... |
    |venda quantidade| 2 |  1 |  1 |  5 |  5 | ... |
  
  --> finalizar implementacao da funcao "armazenar_informacoes.

3. ao encerrar o movimento do dia, o programa deve chamar uma funcao que emite um relatorio de final de expediente, com as seguintes
  informacoes:
  a. numero (quantidade) total de itens vendidos em cada produto.
    Ex: "hoje foram vendidos: 01 refrigerantes; 03 casq. simples; 08 casq. duplas."

  b. valor total pago para cada produto.
    Ex: "valor faturado: R$ 2,50 em refrigetantes, R$ 4,50 em casq. simples; R$ 20,00 em casq. duplas."

  c. total (geral) arrecado;

  --> finalizar implementacao da funcao "emitir_relatorio..."

*/

#include <stdio.h>

typedef int boolean;
#define true 1
#define false 0

inicializa_vetor(int VENDAS [2] [1000]){
    int i;
    for(i=0; i<100; i++){
        VENDAS[0][i] = -1;
        VENDAS[1][i] = -1;
    }
}

imprime_menu(){
    printf("\n Nova venda:\n");
    printf("\n              10  -  Refrigerante      - R$ 2,50");
    printf("\n              15  -  Casquinha Simples - R$ 1,50"); 
    printf("\n              20  -  Casquinha Dupla   - R$ 2,50");               
}

boolean armazenar_informacoes(int VENDAS [2] [1000], int codigo_produto, int quantidade_venda, int numero_de_vendas) {
    // Finalizar implementação.
                                    
    return true;
}

emitir_relatorio(int VENDAS [2] [1000], int numero_de_vendas) {
    // Finalizar implementação      
}

int main(){

    char opcao;
    int codigo_produto;
    int quantidade_venda;

    int VENDAS [2] [1000];
    inicializa_vetor( VENDAS );
    int numero_de_vendas = 0;

    printf("\n\n\n Deseja efetuar uma nova venda ( s ) ou encerrar o movimento do dia ( e )?  ");
    scanf(" %c",&opcao);

    while( opcao == 's' ){
        imprime_menu();

        printf("\n\n Informe o codigo do produto desejado: ");
        scanf(" %d",&codigo_produto);
        printf("\n Informe a quantidade desejada: ");
        scanf(" %d",&quantidade_venda);

        if(  armazenar_informacoes(VENDAS, codigo_produto, quantidade_venda, numero_de_vendas)){
            numero_de_vendas++;
            printf("\n Venda registrada...");
        } else{
            printf("\n Estoque insuficiente. Venda nao registrada...");
        }

        printf("\n\n\n Deseja efetuar uma nova venda ( s ) ou encerrar o movimento do dia ( e )?  ");
        scanf(" %c",&opcao);              
    }

    emitir_relatorio(VENDAS, numero_de_vendas);

}
