/*Faça um programa que crie e alimente uma matriz 6 x 6, simulando
um tabuleiro. Receba somente valores 0s e 1s. Procure e aponte qual a linha com
mais valores nulos (0s).*/
#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3
void main()
{
   int valores[LIN][COL];
   int linha,coluna, cont,maisZeros=0, linhaMaisZeros;

   for(linha = 0; linha <LIN; linha++) {
      for(coluna = 0; coluna<LIN; coluna++) {
         printf("(digite 0 ou 1:)[%d][%d]: ",linha,coluna);
         scanf("%d",&valores[linha][coluna]);
      }
   }
   system("cls");
   for(linha = 0; linha <LIN; linha++) {
      for(coluna = 0; coluna<LIN; coluna++) {
         printf("|%d|",valores[linha][coluna]);
      }
      printf("\n");
   }

   for(linha = 0; linha <LIN; linha++) {
      cont = 0;
      for(coluna = 0; coluna<LIN; coluna++) {
         if(valores[linha][coluna]==0) {
            cont++;
         }
      }
      if(cont >maisZeros) {
         maisZeros = cont;
         linhaMaisZeros = linha + 1;
      }
   }
   printf("a linha %d teve %d valores nulos",linhaMaisZeros,maisZeros);
}
