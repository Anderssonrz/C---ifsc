/*Crie um algoritmo que leia um vetor de 30 números
inteiros e gere um segundo vetor cujos índices pares são o dobro do
vetor original e os ímpares o triplo.*/

#include<stdio.h>
#define VAL 30

void main ()
{

   int b[VAL], a[VAL], i;
//primeiro vetor
   for(i = 0; i < VAL; i++) {
      printf("%d) digite um valor: ", i);
      scanf("%d", &a[i]);
   }
   //relizar a transformacao
   for(i = 0; i < VAL; i++) {
      if(i % 2 == 0) {
         b[i] = a[i] * 2;
      }
      else
      {
         b[i] = a[i] * 3;
      }
      printf("vetor [%d]  = %d\n ", i, b[i]);
   }
}

