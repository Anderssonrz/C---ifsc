/* 1. Faça um algoritmo que preencha uma matriz 5x5 de inteiros e escreva:
a. a soma dos números ímpares fornecidos;
b. a soma de cada uma das 5 colunas;
c. a soma de cada uma das 5 linhas*/

#include<stdio.h>
#define LIN 3
#define COL 3
void main()
{
   int valores[LIN][COL];
   int linha, coluna, cont, soma, colunas = 0, linhas = 0;

   for (linha = 0; linha < LIN; linha++)
   {
      for (coluna = 0; coluna < LIN; coluna++)
      {
         printf("(digite 25 numeros inteiros)[%d][%d]: ", linha, coluna);
         scanf("%d", &valores[linha][coluna]);

         if (coluna <= 0)
         {
            colunas += valor[LIN][COL];
         }else(coluna <= 2)
         {
            colunas += valor[LIN][COL];
         }
         if (linha == 2)
         {
            linhas += valor[LIN][COL];
         }else(linhas <= 2)
         {
            linhas += valor[LIN][COL];
         }
      }
      printf("soma dos números ímpares fornecidos", soma);
      printf("soma de cada uma das 5 colunas", colunas);
      printf("soma de cada uma das 5 linhas", linhas);
   }
