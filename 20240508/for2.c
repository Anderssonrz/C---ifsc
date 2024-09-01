#include <stdio.h>
#include<stdlib.h>

void main()
{
   int numero, cont,resultado;

   printf("numero para calcular a tabuada: ");
   scanf("%d", &numero);
   system("cls");
   printf("//======================//");
   printf("\n");
   printf("\ttabuada de %d:\n", numero);

   for (cont = 1; cont <= 10; cont++) {
      resultado = numero * cont;
      printf("\t%d x %d = %d\n", numero, cont, resultado);
   }
   printf("//======================//");
}
