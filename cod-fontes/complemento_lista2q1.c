#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* O programa deverá inicialmente ler o Nome do Aluno,
e somente ler os outros dados caso o nome seja diferente de 'fim',
quando o nome lido for igual a 'fim', o programa deve ser encerrado.
Após a leitura de um nome válido, o programa deve obter os dados restantes,
que são: Nota Prova 01, Nota Prova 02, Nota Trabalhos, Quantidade de Faltas e Sexo (masculino = 'm', feminino = 'f').
O cálculo da Nota Final deve obedecer o seguinte critério: Prova 01 = peso 3.5, Prova 02 = peso 4 e Nota Trabalhos = peso 2.5.
Para cada aluno, o programa deve imprimir seu Nome, sua Nota Final, e uma mensagem informando se ele foi APROVADO ou REPROVADO.
Sendo que para ser aprovado ele deve ter obtido nota final igual ou maior que cinco e possuir presença em pelo menos 75% das aulas (total de 15 aulas).
Ao final, o programa deve informar a % de alunos aprovados e reprovados, a média de notas dos alunos do sexo masculino, e a maior nota entre os alunos do sexo feminino.  */

//Início
void main(){
//incializando variáveis

  char nome[25],sexo,comando;
  float nota1 = 0, nota2 = 0, notat = 0, notafinal = 0, maior_nota = 0, media_masc = 0;
  float nota_masc = 0, media_tmasc = 0, porcentagem_apro = 0, porcentagem_repro = 0;
  int qtdfaltas = 0, cont_aprovado = 0, cont_reprovado = 0, qtdtotal = 0, qtdmasc = 0;
  //começo da execução
  printf("PARA O FIM DO CADASTRO DE NOTAS DIGITE - 'FIM'\n");
  printf("Informe nome do aluno: ");
  scanf(" %[^\n]s",&nome);
  while(strcmp(nome,"FIM")!=0) { //compara o nome do aluno conforme especificação
    printf("Informe nota avaliacao 1: ");
    scanf(" %f",&nota1);
    printf("Informe nota avaliacao 2: ");
    scanf(" %f",&nota2);
    printf("Informe nota dos trabalhos: ");
    scanf(" %f",&notat);
    printf("Informe o numero de faltas: ");
    scanf(" %d",&qtdfaltas);
    printf("Informe o sexo: M - masculino ou F - feminino: ");
    scanf(" %c",&sexo);
    
    notafinal = ( (nota1 * 3.5) + (nota2 * 4) + (notat * 2.5) ) / 10; //cálculo da nota final
    
    if(notafinal >= 5 && qtdfaltas <= 11) { //resultado do aluno
      printf(" %s, APROVADO",nome);
      cont_aprovado=+1; //armazena a quantidade de alunos aprovados
    }
    else{
      printf(" %s, REPROVADO",nome);
      cont_reprovado =+ 1; //armazena a quantidade de alunos reprovados
    }
    if(sexo=='F'){
      if(notafinal>maior_nota){
        maior_nota = notafinal; //armazena a maior nota feminina
      }
    }
    else{
      qtdmasc =+ 1;
      media_masc = nota_masc + notafinal; //calcula a média das notas masculinas
    }

    printf("\n\nPARA O FIM DO CADASTRO DE NOTAS DIGITE - 'FIM'\n");
    printf("Informe nome do aluno: ");
    scanf(" %[^\n]s",&nome);
  }

  qtdtotal = cont_aprovado + cont_reprovado;
  porcentagem_apro = (cont_aprovado*100) / qtdtotal;
  porcentagem_repro = (cont_reprovado*100) / qtdtotal;
  media_tmasc = media_masc / qtdmasc;

  printf("\nInforme o comando:\n A - Para percentual de aprovacao e reprovacao\n B - Para media de notas masculinas\n C - Para maior nota feminina\n D - Para finalizar programa\n\n");
  scanf(" %c",&comando);
  while(comando != 'D'){

    switch(comando){
      case 'A':{
        printf("Percentual de alunos aprovados: %2.f\n",porcentagem_apro);
        printf("Percentual de alunos reprovados: %2.f\n\n",porcentagem_repro);
        break;
      }
      case 'B':{
        printf("Media dos alunos do sexo masculino: %2.f\n",media_tmasc);
        break;
      }
      case 'C':{
        printf("Maior nota feminina: %2.f\n\n",maior_nota);
        break;
      }
    }
    printf("\nInforme o comando:\n A - Para percentual de aprovacao e reprovacao\n B - Para media de notas masculinas\n C - Para maior nota feminina\n D - Para finalizar programa\n\n");
    scanf(" %c",&comando);
  }
}
